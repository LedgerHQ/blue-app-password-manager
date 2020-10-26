#ifndef __DUMP_METADATAS_H__
#define __DUMP_METADATAS_H__

#include "stdint.h"

#define TRANSFER_FLAG_OFFSET    0
#define TRANSFER_PAYLOAD_OFFSET 1

/* max payload size = 255 - sizeof(flag) - sizeof(status_word) */
#define MAX_PAYLOAD_SIZE (UINT8_MAX - TRANSFER_PAYLOAD_OFFSET - 2)

#define MORE_DATA_INCOMING 0x00
#define LAST_CHUNK         0xFF

int dump_metadatas();

#endif