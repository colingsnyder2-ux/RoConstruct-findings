#include "png.h"
#include <stddef.h>
#include <stdio.h>
int main() {
 printf("size=%u big_row_buf=%u", (unsigned)sizeof(png_struct), (unsigned)offsetof(png_struct, big_row_buf));
#if PNG_LIBPNG_VER >= 10206
 printf(" compression_type=%u user_width_max=%u user_height_max=%u", (unsigned)offsetof(png_struct, compression_type), (unsigned)offsetof(png_struct, user_width_max), (unsigned)offsetof(png_struct, user_height_max));
#endif
 printf("\n");return 0;
}
