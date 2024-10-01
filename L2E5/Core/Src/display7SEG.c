//#include <display7SEG.h>
//
//void display7SEG(int num){
//	  switch (num)
//	      {
//	      case 0:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin
//	                          | SEG5_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_SET);
//	          break;
//	      case 1:
//	          HAL_GPIO_WritePin(GPIOB,
//	                   SESEG6_Pin | SEG2_Pin , GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG6_Pin | SEG3_Pin | SEG4_Pin
//                    | SEG5_Pin, GPIO_PIN_SET);
//	          break;
//	      case 2:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG6_Pin | SEG3_Pin | SEG4_Pin
//	                          , GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin | SEG5_Pin, GPIO_PIN_SET);
//	          break;
//	      case 3:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG6_Pin | SEG3_Pin | SEG2_Pin
//	                          | SEG5_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin| SEG5_Pin, GPIO_PIN_SET);
//	          break;
//	      case 5:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG2_Pin | SEG3_Pin | SEG6_Pin
//	                          | SEG5_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin| SESEG6_Pin, GPIO_PIN_SET);
//	          break;
//	      case 4:
//	          HAL_GPIO_WritePin(GPIOB,
//	        		  SEG6_Pin | SESEG6_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin
//	                          | SEG5_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB,SEG0_Pin | SEG3_Pin | SEG4_Pin, GPIO_PIN_SET);
//	          break;
//	      case 6:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SEG6_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin
//	                          | SEG5_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SESEG6_Pin, GPIO_PIN_SET);
//	          break;
//	      case 7:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG2_Pin , GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin| SEG3_Pin | SEG4_Pin
//                    | SEG5_Pin, GPIO_PIN_SET);
//	          break;
//	      case 8:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin
//	                          | SEG5_Pin | SEG6_Pin, GPIO_PIN_RESET);
//	          break;
//	      case 9:
//	          HAL_GPIO_WritePin(GPIOB,
//	                  SEG0_Pin | SESEG6_Pin | SEG2_Pin | SEG3_Pin | SEG5_Pin
//	                          | SEG6_Pin, GPIO_PIN_RESET);
//	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
//	          break;
//	      }
//}
