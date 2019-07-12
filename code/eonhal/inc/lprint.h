/**
  ******************************************************************************
  * @file    lprint.h 
  * @authors Pablo Fuentes, Joseph Peñafiel
	* @version V1.0.1
  * @date    2019
  * @brief   Lightweigth Print
  ******************************************************************************
*/

#ifndef LPRINT_H_
#define LPRINT_H_

#include <stdarg.h>

/**
 * @brief Macro to define the override LPUTC function
 * 
 */
#define LPRINT_TARGET(__func__) \
  void LPUTC(char c) { __func__(c); }

/**
 * @brief This function should be override to implement lprint
 * 
 * @param {c} Character to be printed 
 */
void LPUTC(char c);

/**
 * @brief Print a formatted string
 * 
 * @param {format} Formatted string. To put variables use { }
 * @param {...} Variables integers 
 */
void lprint(const char *format, ...);

#endif