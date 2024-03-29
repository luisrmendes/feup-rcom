#pragma once

extern int maxTries;

//#define BAUDRATE B9600
//#define BAUDRATE B38400
//#define BAUDRATE B57600
#define BAUDRATE B115200

#define ENABLE_CURRUPT_FRAME_TESTS 0
#define ENABLE_DESYNC_FRAME_TESTS 0

#define RECEIVER 0
#define TRANSMITTER 1

// Frame Macros
#define FRAME_SUPERVISION_SIZE 5
#define FRAME_FLAG 0x7E /* 01111110 */
#define FRAME_ADDRESS_FIELD_TYPE1 0x03 /* Comandos enviados pelo Emissor e respostas enviadas pelo Receptor */
#define FRAME_ADDRESS_FIELD_TYPE2 0x01 /* Comandos enviados pelo Receptor e respostas enviadas pelo Emissor */
#define FRAME_CONTROL_FIELD_SET 0x03 /* 00000011 */
#define FRAME_CONTROL_FIELD_DISC 0x0B /* 00001011 */
#define FRAME_CONTROL_FIELD_UA 0x07 /* 00000111 */
#define MAXTRIES maxTries + 1
#define FRAME_CONTROL_FIELD_RR0  ((unsigned char) (0x05 | 0x00)) /* R0000101 */
#define FRAME_CONTROL_FIELD_RR1  ((unsigned char) (0x05 | 0x80)) /* R = 1 */
#define FRAME_CONTROL_FIELD_REJ0 ((unsigned char) (0x01 | 0x00)) /* R0000001 */
#define FRAME_CONTROL_FIELD_REJ1 ((unsigned char) (0x01 | 0x80)) /* R = 1 */
#define FRAME_CONTROL_FIELD_SEND0 0x00
#define FRAME_CONTROL_FIELD_SEND1 0x40
#define FRAME_INFO_FLAG 0x01
#define FRAME_START_FLAG 0x02
#define FRAME_END_FLAG 0x03
#define ESCAPE_CHAR 0x7D
