/**
  ******************************************************************************
  * @file    main.c
  * @author  Afra Ben Mabrouk
  * @brief   supporting multiple platforms 
  * @version V9.10.1
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

//#define INTEL
#define SOM
#define min(var1, var2) (((var1) < (var2)) ? (var1) : (var2))  /* Déclaration de la fonction minimum et son équation pour la comparaision entre deux variables */
 
//#define OTHERS
#define MUL
#define max(var1, var2) (((var1) > (var2)) ? (var1) : (var2)) /* Déclaration de la fonction maximum et son équation pour la comparaision entre deux variables */
/* Private function prototypes -----------------------------------------------*/
static  int mul(int  var1 , int var2);
static  int sum(int  var1 , int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  var1 and var2 
  * @retval None
  */

int main(void)
{
#ifdef SOM
 int resultSum=sum(10,2);
#endif
 int resultMin=min(10,2);
 #ifdef MUL
int resultMul=mul(100,20);
#endif
int resultMax=max(100,20);
  while (1)
  {
   
  }
  
}
#ifdef SOM
static  int sum(int  var1 , int var2) {
  return(var1+var2);
}
#endif

#ifdef MUL
static  int mul(int  var1 , int var2) {
  return(var1*var2);
}
#endif
/**************************************END OF FILE**************************************/
