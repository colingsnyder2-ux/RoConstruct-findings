// from server: 39% by king_originala
extern void __cdecl edgeFilter(
    const unsigned char* source, int pixelStride, int channels,
    unsigned int width, unsigned int height, unsigned char* destination,
    int channelStride, int rowStride);

void __cdecl downsample(
    unsigned int width, unsigned int height, int channels,
    const unsigned char* source, unsigned char* destination,
    int channelStride, int rowStride, int pixelStride)
{
    if (width == 1 || height == 1) {
        edgeFilter(source, pixelStride, channels, width, height,
                   destination, channelStride, rowStride);
        return;
    }

    int columns = (int)(width >> 1);
    int rows = (int)(height >> 1);
    int rowAdjustment = rowStride * 2 - width * pixelStride;

    for (int y = rows; y > 0; --y) {
        for (int x = columns; x > 0; --x) {
            if (channels > 0) {
                const unsigned char* nextRow = source + rowStride;
                int offset = pixelStride - rowStride;
                int remaining = channels;
                do {
                    int sum = nextRow[pixelStride] + nextRow[offset];
                    sum += *source;
                    sum += *nextRow;
                    *destination++ = (unsigned char)((sum + 2) / 4);
                    source += channelStride;
                    nextRow += channelStride;
                } while (--remaining);
            }
            source += pixelStride;
        }
        source += rowAdjustment;
    }
}
