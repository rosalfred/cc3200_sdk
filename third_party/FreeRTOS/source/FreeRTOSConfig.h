#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html.
 *----------------------------------------------------------*/

#define configCPU_FAMILY

#define configUSE_PREEMPTION                    1
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 1
#define configUSE_TICKLESS_IDLE                 0
#define configCPU_CLOCK_HZ                      80000000
#define configTICK_RATE_HZ                      250
#define configMAX_PRIORITIES                    5
#define configMINIMAL_STACK_SIZE                128
#define configMAX_TASK_NAME_LEN                 16
#define configUSE_16_BIT_TICKS                  0
#define configIDLE_SHOULD_YIELD                 1
#define configUSE_TASK_NOTIFICATIONS            1
#define configUSE_MUTEXES                       1
#define configUSE_RECURSIVE_MUTEXES             1
#define configUSE_COUNTING_SEMAPHORES           1
#define configUSE_ALTERNATIVE_API               0 /* Deprecated! */
#define configQUEUE_REGISTRY_SIZE               10
#define configUSE_QUEUE_SETS                    1
#define configUSE_TIME_SLICING                  0
#define configUSE_NEWLIB_REENTRANT              0
#define configENABLE_BACKWARD_COMPATIBILITY     0
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS 5

/* Memory allocation related definitions. */
#define configSUPPORT_STATIC_ALLOCATION         0
#define configSUPPORT_DYNAMIC_ALLOCATION        1
#define configTOTAL_HEAP_SIZE                   10240
#define configAPPLICATION_ALLOCATED_HEAP        1

/* Hook function related definitions. */
#define configUSE_IDLE_HOOK                     0
#define configUSE_TICK_HOOK                     0
#define configCHECK_FOR_STACK_OVERFLOW          1
#define configUSE_MALLOC_FAILED_HOOK            1
#define configUSE_DAEMON_TASK_STARTUP_HOOK      0

/* Run time and task stats gathering related definitions. */
#define configGENERATE_RUN_TIME_STATS           0
#define configUSE_TRACE_FACILITY                1
#define configUSE_STATS_FORMATTING_FUNCTIONS    0

/* Co-routine related definitions. */
#define configUSE_CO_ROUTINES                   0
#define configMAX_CO_ROUTINE_PRIORITIES         1

/* Software timer related definitions. */
#define configUSE_TIMERS                        1
#define configTIMER_TASK_PRIORITY               3
#define configTIMER_QUEUE_LENGTH                10
#define configTIMER_TASK_STACK_DEPTH            configMINIMAL_STACK_SIZE

/* Interrupt nesting behaviour configuration. */
#define configKERNEL_INTERRUPT_PRIORITY         ( 7 << 5 )
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    ( 1 << 5 )
#define configMAX_API_CALL_INTERRUPT_PRIORITY   ( 1 << 5 )

/* Define to trap errors during development. */
//#define configASSERT( ( x ) ) if( ( x ) == 0 ) vAssertCalled( __FILE__, __LINE__ )

/* FreeRTOS MPU specific definitions. */
#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0

/* Optional functions - most linkers will remove unused functions anyway. */
#define INCLUDE_vTaskPrioritySet                1
#define INCLUDE_uxTaskPriorityGet               1
#define INCLUDE_vTaskDelete                     1
#define INCLUDE_vTaskSuspend                    1
#define INCLUDE_xResumeFromISR                  1
#define INCLUDE_vTaskDelayUntil                 1
#define INCLUDE_vTaskDelay                      1
#define INCLUDE_xTaskGetSchedulerState          1
#define INCLUDE_xTaskGetCurrentTaskHandle       1
#define INCLUDE_uxTaskGetStackHighWaterMark     0
#define INCLUDE_xTaskGetIdleTaskHandle          1
#define INCLUDE_eTaskGetState                   1
#define INCLUDE_xEventGroupSetBitFromISR        1
#define INCLUDE_xTimerPendFunctionCall          0
#define INCLUDE_xTaskAbortDelay                 0
#define INCLUDE_xTaskGetHandle                  0
#define INCLUDE_xTaskResumeFromISR              1

/* A header file that defines trace macro can be included here. */




//#define configCPU_CLOCK_HZ				( ( unsigned long ) 80000000 )
////#define configTICK_RATE_HZ				( ( TickType_t ) 1000 )
////#define configMINIMAL_STACK_SIZE		( ( unsigned short ) 70 )
////#define configTOTAL_HEAP_SIZE			( ( size_t ) ( 5000) )
//#define configMAX_TASK_NAME_LEN			( 12 )
//#define configUSE_TRACE_FACILITY		1
//#define configUSE_16_BIT_TICKS			0
//#define configIDLE_SHOULD_YIELD			0
//#define configUSE_CO_ROUTINES 			0
//#define configUSE_MUTEXES				1
//#define configUSE_RECURSIVE_MUTEXES		1
//#define configCHECK_FOR_STACK_OVERFLOW	1
//#define configUSE_QUEUE_SETS			1
//#define configUSE_COUNTING_SEMAPHORES	1
//#define configUSE_ALTERNATIVE_API		0
////#define configSUPPORT_STATIC_ALLOCATION 0

////#define configMAX_PRIORITIES			( 10UL )
////#define configMAX_CO_ROUTINE_PRIORITIES ( 2 )
//#define configQUEUE_REGISTRY_SIZE		10

/* Timer related defines. */
////#define configUSE_TIMERS				0
////#define configTIMER_TASK_PRIORITY		2
////#define configTIMER_QUEUE_LENGTH		20
////#define configTIMER_TASK_STACK_DEPTH	( configMINIMAL_STACK_SIZE * 2 )
//#define configUSE_MALLOC_FAILED_HOOK    1
//#define configENABLE_BACKWARD_COMPATIBILITY 0
/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function. */

//#define INCLUDE_vTaskPrioritySet				1
//#define INCLUDE_uxTaskPriorityGet				1
//#define INCLUDE_vTaskDelete						1
#define INCLUDE_vTaskCleanUpResources			1
//#define INCLUDE_vTaskSuspend					1
//#define INCLUDE_vTaskDelayUntil					1
//#define INCLUDE_vTaskDelay						1
//#define INCLUDE_uxTaskGetStackHighWaterMark		0
//#define INCLUDE_xTaskGetSchedulerState			1
#define INCLUDE_xTimerGetTimerDaemonTaskHandle	0
//#define INCLUDE_xTaskGetIdleTaskHandle			1
#define INCLUDE_pcTaskGetTaskName				1
//#define INCLUDE_eTaskGetState					1
#define INCLUDE_xSemaphoreGetMutexHolder		0

//#define configKERNEL_INTERRUPT_PRIORITY 		( 7 << 5 )	/* Priority 7, or 255 as only the top three bits are implemented.  This is the lowest priority. */
/* !!!! configMAX_SYSCALL_INTERRUPT_PRIORITY must not be set to zero !!!!
See http://www.FreeRTOS.org/RTOS-Cortex-M3-M4.html. */
//#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	( 1 << 5 )  /* Priority 5, or 160 as only the top three bits are implemented. */

/* Use the Cortex-M3 optimised task selection rather than the generic C code
version. */
//#define configUSE_PORT_OPTIMISED_TASK_SELECTION 1

#define configRECORD_STACK_HIGH_ADDRESS           1  /* 1: record stack high address for the debugger, 0: do not record stack high address */


#ifdef __ICCARM__
    void vAssertCalled( const char *pcFile, unsigned long ulLine );
    #define configASSERT( x ) if( x == 0 ) vAssertCalled( __FILE__, __LINE__ );
#endif

#if defined(ccs)
   void vAssertCalled(const char *pcFile, unsigned long ulLine );
    #define configASSERT(expr) if ( (expr) == 0)   {                                                    \
                                                        vAssertCalled( __FILE__ , __LINE__ ); \
                                                    }
#endif

#endif /* FREERTOS_CONFIG_H */
