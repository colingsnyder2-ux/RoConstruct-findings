// Exercise stored, fast and slow deflate callbacks through both ABI builds.
#include "zlib.h"
#include <stdio.h>
#include <string.h>

static unsigned char input[65536], packed[70000], output[65536];

#pragma comment(linker, "/include:_inflate_table")

static int streaming(int level, int bits, int strategy)
{
    z_stream enc = {0}, dec = {0};
    if (deflateInit2(&enc, level, Z_DEFLATED, bits, 8, strategy) != Z_OK)
        return 10;
    enc.next_in = input;
    enc.avail_in = sizeof(input);
    int status;
    do {
        enc.next_out = packed + enc.total_out;
        enc.avail_out = 97;
        status = deflate(&enc, Z_FINISH);
    } while (status == Z_OK && enc.total_out + 97 <= sizeof(packed));
    unsigned size = enc.total_out;
    int ended = deflateEnd(&enc);
    if (status != Z_STREAM_END || ended != Z_OK)
        return 11;
    if (inflateInit2(&dec, bits) != Z_OK)
        return 12;
    dec.next_in = packed;
    dec.avail_in = size;
    do {
        dec.next_out = output + dec.total_out;
        dec.avail_out = sizeof(output) - dec.total_out;
        if (dec.avail_out > 251)
            dec.avail_out = 251;
        status = inflate(&dec, Z_NO_FLUSH);
    } while (status == Z_OK && dec.total_out < sizeof(output));
    unsigned decoded = dec.total_out;
    ended = inflateEnd(&dec);
    if (status != Z_STREAM_END || ended != Z_OK || decoded != sizeof(input)
        || memcmp(input, output, sizeof(input)))
        return 13;
    return 0;
}

int main()
{
    for (unsigned i = 0; i < sizeof(input); ++i)
        input[i] = (unsigned char)((i * 7) ^ (i >> 5));
    uLongf packedSize = sizeof(packed), outputSize = sizeof(output);
    if (compress2(packed, &packedSize, input, sizeof(input), 9) != Z_OK)
        return printf("compress failed\n"), 2;
    if (uncompress(output, &outputSize, packed, packedSize) != Z_OK || outputSize != sizeof(input))
        return printf("uncompress failed\n"), 3;
    int same = memcmp(input, output, sizeof(input)) == 0;
    int cases = 0;
    const int levels[] = {0, 1, 6, 9}, wrappers[] = {-15, 15, 31};
    for (unsigned l = 0; l < 4; ++l)
        for (unsigned w = 0; w < 3; ++w)
            for (int strategy = Z_DEFAULT_STRATEGY; strategy <= Z_HUFFMAN_ONLY; ++strategy) {
                int result = streaming(levels[l], wrappers[w], strategy);
                if (result)
                    return printf("stream failed level=%d bits=%d strategy=%d code=%d\n",
                                  levels[l], wrappers[w], strategy, result), result;
                ++cases;
            }
    printf("zlib %s packed=%lu same=%d streaming=%d\n", zlibVersion(), (unsigned long)packedSize, same, cases);
    return same && strcmp(zlibVersion(), "1.2.3") == 0 ? 0 : 1;
}
