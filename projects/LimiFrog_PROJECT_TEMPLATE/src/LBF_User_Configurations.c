/*******************************************************************************
 * LBF_User_Configurations.c
 * 
 * 
 * (c)2015 LimiFrog / CYMEYA
 * This program is licensed under the terms of the MIT License.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 * Please refer to the License File LICENSE.txt located at the root of this
 * project for full licensing conditions, 
 * or visit https://opensource.org/licenses/MIT.
 ******************************************************************************/


/* ***************************************************************************
 *  --------               USER CONFIGURATION               ---------------- *
 *  This file holds board configuration parameters defined by the user.      *
 *  She/he should set the parameters listed below according to her/his needs *
 * **************************************************************************/



// ============================================================================
//    OLED presence	
// ============================================================================

// Comment out next line if no OLED or not used. Uncomment if OLED is used :

// #define USE_OLED  

   // WARNING:
   // this initializes OLED but powering on/off the screen is left to user 
   // code, using e.g. functions OLED_Switch_ON() and OLED_Switch_OFF()


// ============================================================================
//    Enable/Disable BlueTooth Low-Energy Functionality
// ============================================================================

// Comment out / Uncomment next line as needed :

// #define ENABLE_BTLE

// Select here the required code to download in the BTLE module 
// Must be stored on the Data Flash - Would typically be put there by USB 
// Ignored if ENABLE_BTLE is undefined
#define  BTLE_CODE_FILENAME   "BTLE_D.BIN"

// Indicate here baudrate (bits/s) for exchanges over UART between STM32 and 
// application running on PAN1740.  
//  Does NOT affect baud rate used for booting PAN1740 over UART -- which 
//  must not be changed).
// Ignored if BTLE is not enabled
#define	UART_BTLE_BAUDRATE	 115200  	



// ============================================================================
//    EXTENSION PORT
// ============================================================================

// If not using the extension port, just keep default values for all
// GPIO functionalities (other parameters are don't care in that case)
// i.e. :  #define xxx_Function NONE


    /******************************************************************
    // Some Constants
    // --------------------------
    // If you intend to use UART4, USART2 or SPI (over USART2) on
    // the extension connector, specify their speed here (bit/s):
    // (ignored if UART/SPI not used)
    // Maximum Speed: Fcoreclk/16  (e.g. 4.5Mbit/s if Core Clock = 72MHz)
    ******************************************************************/

    // If using UART2 or SPI on extension port:
    #define 	EXT_PORT_UART2_SPI_Baudrate	0   // 

    // If using UART4 on extension port:
    #define 	EXT_PORT_UART4_Baudrate 	0   // 



    /******************************************************************
    *  CONFIGURATION OF EACH POSITION ON THE EXTENSION PORT           *
    *								      *
    *  Specify the type of interface you want to use on each position,*	
    *  selecting one of the indicated valid values.	              *
    *  (Interfaces are set into some pre-defined configuration,       *
    *   chosen to fit most classical application requirements   -     *
    *   see information at the end of this file )                     *  
    ******************************************************************/



    // ===========================================================
    // Extension Port Position 11  (PB9)
    // --------------------------
    #define 	EXT_PORT_POS11_Function  	NONE  
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	I2C1_SDA	
	//	PWM_TIM4_CH4
//TODO Also cope with CAN_TX 

    #define 	EXT_PORT_POS11_GPIOtype		NA 
	// Relevant only if former parameter is GPIO (else: ignored)
	// Valid Values = 
 	//	NA     (not applicable)
	//	IN     (standard CMOS input) 
	//	IN_PU  (input with internal pull-up) 
	//	IN_PD  (input with internal pull-down) 
	//	OUT    (standard CMOS push-pull output)
	//	OUT_OD (open-drain output)
	//	IT_RISING   (external interrupt, rising-edge triggered)
	//	IT_FALLING  (external interrupt, rising-edge triggered)


    // ===========================================================
    // Extension Port Position 10  (PB8)
    // --------------------------
    #define 	EXT_PORT_POS10_Function  	NONE 
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	I2C1_SCL
	//	PWM_TIM4_CH3
//TODO Also cope with CAN_RX 
		
    #define 	EXT_PORT_POS10_GPIOtype  	NA 
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 9  -  Not configurable (GND)
    // --------------------------
    
    #define 	EXT_PORT_POS9_Function  	NONE 
	// Valid Values = 
	//	NONE 

    #define 	EXT_PORT_POS9_GPIOtype  	NA 
	// Valid values: 
	// NA

    // ===========================================================
    // Extension Port Position 8  (PA0)
    // --------------------------
    #define 	EXT_PORT_POS8_Function  	NONE
    	// Valid Values = 
	//	NONE 
	//	GPIO
	//	UART2_CTS
	//	UART4_TX
	//	PWM_TIM2_CH1
	//	ADC12_IN_5
//TODO Also cope with OPAMP1_VINP

    #define 	EXT_PORT_POS8_GPIOtype  	NA
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 7  (PA1)
    // --------------------------
    #define 	EXT_PORT_POS7_Function  	NONE 
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	UART2_RTS
	//	UART4_RX
	//	PWM_TIM2_CH2
	//	ADC12_IN_6
//TODO Also cope with OPAMP1_VINM 

    #define 	EXT_PORT_POS7_GPIOtype  	NA 
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 6  (reserved for VCC_LDO)
    // --------------------------
    #define 	EXT_PORT_POS6_Function  	NONE
	// Valid Values = 
	//	NONE 
	//	VCC_LDO  (--> regulated 3.3V)


    // ===========================================================
    // Extension Port Position 5  (PA2)
    // --------------------------
    #define 	EXT_PORT_POS5_Function  	NONE  
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	UART2_TX
	//	SPI_MOSI      (over USART2 TX)
	//	PWM_TIM2_CH3
	//	ADC12_IN_7

    #define 	EXT_PORT_POS5_GPIOtype  	NA 
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 4  (PA3)
    // --------------------------
    #define 	EXT_PORT_POS4_Function  	NONE  
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	UART2_RX   
	//	SPI_MISO      (over USART2 RX)
	//	PWM_TIM2_CH4
	//	ADC12_IN_8
//TODO Also cope with OPAMP1_VOUT

    #define 	EXT_PORT_POS4_GPIOtype  	NA
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 3  (PA4)
    // --------------------------
    #define 	EXT_PORT_POS3_Function  	NONE
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	SPI_CK      (over USART2 CLK)
	//	PWM_LPTIM2
	//	ADC12_IN_9
//TODO also cope with DAC1_OUT

    #define 	EXT_PORT_POS3_GPIOtype  	NA
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 2  (PA6)
    // --------------------------
    // CAUTION: Both a STM32 GPIO and a BLE GPIO are routed to this 
    //  position - One must always be kept input to avoid conflicts
    //
    #define 	EXT_PORT_POS2_Function  	NONE 
	// Valid Values = 
	//	NONE 
	//	GPIO
	//	SPI_nCS   
	//	PWM_TIM16_CH1
//TODO Also cope with OPAMP2_VINP

    #define 	EXT_PORT_POS2_GPIOtype  	NA
	// Valid values: 
	// NA/IN/IN_PU/IN_PD/OUT/OUT_OD/IT_RISING/IT_FALLING


    // ===========================================================
    // Extension Port Position 1
    // --------------------------
    // Dedicated to Mic. Out monitoring

    #define 	EXT_PORT_POS1_Function  	NONE 
	// Valid Values = 
	//	NONE 

    #define 	EXT_PORT_POS1_GPIOtype  	NA 
	// Valid values: 
	// NA



    /* ==================================================================
    *  About Pre-defined Configurations :
    *
    *  - I2C1 is set for 400KHz clock, Single Master, memory-mapped : 
    *    I2C address (ChipID) on 8 bits, Register Address on 8 bits,
    *    Read or Write Data on 8 bits.
    *    i.e. suitable to address most I2C-controlled ICs
    *
    *  - SPI is implemented using SPI mode of USART2,
    *     with idle clock level = Low, Data sampling on rising edge
    *     Max. clock speed is 1/16x core clock frequency
    *
    *  - UART4 is set for 8 bit + 1 stop bit, no parity,
    *     Max. baud rate is 1/16x core clock frequency
    *
    *  - UART2 is set similarly to UART4, plus it offers optional
    *    hardware flow control (automatically enabled if UART2_RTS /
    *    UART2_CTS is enabled
    *
    *  - PWM are set in edge-aligned, positive pulse configuration
    *  - <TBD:CAN, ADC, DAC, OPAMP>
    *    
    *  Different settings would be possible. In addition, other signals
    *  not covered above could be output on the extension port.
    *  The user needs to write his own code to achieve this.
    *  
      ================================================================== */



/* ***************************************************************************
 *  --------              END OF USER PART                  ---------------- *
 *  									     *
 *  Code below exploits parameters defined by the user above.		     *
 *  Do not modify it							     *
 * **************************************************************************/




/* ***************************************************************************/
/* ***************************************************************************/

#include "LBF_Global.h"

//#include "LBF_User_Conf.h"
//#include "User_Configuration.h"  //configuration file in user's project


/*******************************************************************************
* Function Name  : LBF_User_Config
* Description    : Populate configuration structure according to user's
*                  directives (found in User_Configuration.h)
* Input Param    : None.
* Output Param   : pExtPortConfig - pointer to structure that will hold the user-
		     defined parameters to configure the extension port
* Return         : None.
*******************************************************************************/


void LBF_User_Conf( LBF_ExtPortConfig_t* pExtPortConfig )
{
#ifndef __LBF_LEGACY  // very different mapping of extension port prior to LimiFrog0.x
		      // Not supported here
    
    pExtPortConfig->UART2_SPI_Baudrate =  EXT_PORT_UART2_SPI_Baudrate;
    pExtPortConfig->UART4_Baudrate =  EXT_PORT_UART4_Baudrate;	   

    pExtPortConfig->Pos11.Function = EXT_PORT_POS11_Function;  
    pExtPortConfig->Pos11.GPIO_Conf = EXT_PORT_POS11_GPIOtype;

    pExtPortConfig->Pos10.Function = EXT_PORT_POS10_Function;  
    pExtPortConfig->Pos10.GPIO_Conf = EXT_PORT_POS10_GPIOtype;
  
    pExtPortConfig->Pos9.Function = EXT_PORT_POS9_Function;  
    pExtPortConfig->Pos9.GPIO_Conf = EXT_PORT_POS9_GPIOtype;

    pExtPortConfig->Pos8.Function = EXT_PORT_POS8_Function;  
    pExtPortConfig->Pos8.GPIO_Conf = EXT_PORT_POS8_GPIOtype;

    pExtPortConfig->Pos7.Function = EXT_PORT_POS7_Function;  
    pExtPortConfig->Pos7.GPIO_Conf = EXT_PORT_POS7_GPIOtype;

    // Position 6 is reserved to VCC_LDO
    pExtPortConfig->Pos6.Function = EXT_PORT_POS6_Function;  

    pExtPortConfig->Pos5.Function = EXT_PORT_POS5_Function;  
    pExtPortConfig->Pos5.GPIO_Conf = EXT_PORT_POS5_GPIOtype;

    pExtPortConfig->Pos4.Function = EXT_PORT_POS4_Function;  
    pExtPortConfig->Pos4.GPIO_Conf = EXT_PORT_POS4_GPIOtype;

    pExtPortConfig->Pos3.Function = EXT_PORT_POS3_Function;  
    pExtPortConfig->Pos3.GPIO_Conf = EXT_PORT_POS3_GPIOtype;

    pExtPortConfig->Pos2.Function = EXT_PORT_POS2_Function;  
    pExtPortConfig->Pos2.GPIO_Conf = EXT_PORT_POS2_GPIOtype;

    // Position 1: N/A  (dedicated to MIC monitoring)

#endif
}



/*******************************************************************************
*
* For BlueTooth Low-Energy Initialization:
* Assign some global constants according to above DEFINEs from user
* These are used in LBF_Board_Selective_Inits.c and LBF_BTLE_Inits.c
*
*******************************************************************************/

#ifdef ENABLE_BTLE
  bool const Enable_BTLE = true;
  char const * const BTLE_Code_Filename = BTLE_CODE_FILENAME; // constant pointer to constant (string of) char
  uint32_t const Uart_BTLE_BaudRate  =  UART_BTLE_BAUDRATE;
#else
  bool const Enable_BTLE = false;
  char* BTLE_Code_Filename = NULL;
  uint32_t const Uart_BTLE_BaudRate  =  0;
#endif





/*******************************************************************************
* Function Name  : LBF_Is_OLED_Used
* Description    : Returns flag indicating if OLED is used,
		   accoring to user #define specified above
* Input Param    : None.
* Output Param   : None
* Return         : true if OLED is used, else false.
*******************************************************************************/

bool LBF_Is_OLED_Used( void )
{
#ifdef USE_OLED
	return true;
#else
	return false;
#endif
}

/***************************************************************END OF FILE****/
