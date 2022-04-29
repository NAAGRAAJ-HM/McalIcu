/******************************************************************************/
/* File   : Icu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgIcu.hpp"
#include "Icu_core.hpp"
#include "infIcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ICU_AR_RELEASE_VERSION_MAJOR                                           4
#define ICU_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ICU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ICU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Icu:
      public abstract_module
   ,  public class_Icu_Functionality
{
   public:
      module_Icu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, ICU_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, ICU_CONFIG_DATA, ICU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ICU_CODE) DeInitFunction (void);
      FUNC(void, ICU_CODE) MainFunction   (void);
      ICU_CORE_FUNCTIONALITIES
};

extern VAR(module_Icu, ICU_VAR) Icu;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, ICU_VAR, ICU_CONST) gptrinfEcuMClient_Icu = &Icu;
CONSTP2VAR(infDcmClient,  ICU_VAR, ICU_CONST) gptrinfDcmClient_Icu  = &Icu;
CONSTP2VAR(infSchMClient, ICU_VAR, ICU_CONST) gptrinfSchMClient_Icu = &Icu;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Icu, ICU_VAR) Icu(
   {
         ICU_AR_RELEASE_VERSION_MAJOR
      ,  ICU_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ICU_CODE) module_Icu::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, ICU_CONFIG_DATA, ICU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Icu_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Icu_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgIcu;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Icu_InitCheck)
   }
#endif
}

FUNC(void, ICU_CODE) module_Icu::DeInitFunction(void){
#if(STD_ON == Icu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Icu_InitCheck)
   }
#endif
}

FUNC(void, ICU_CODE) module_Icu::MainFunction(void){
#if(STD_ON == Icu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Icu_InitCheck)
   }
#endif
}

FUNC(void, ICU_CODE) class_Icu_Functionality::SetMode(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::DisableWakeup(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::SetActivationCondition(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::DisableNotification(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::EnableNotification(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::GetInputState(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::StartTimeStamp(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::StopTimeStamp(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::GetTimeStampIndex(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::ResetEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::DisableEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::EnableEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::GetEdgeNumbers(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::StartSignalMeasurement(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::StopSignalMeasurement(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::GetTimeElapsed(void){
}

FUNC(void, ICU_CODE) class_Icu_Functionality::GetDutyCycleValues(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

