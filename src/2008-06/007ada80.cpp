// from server: 37% by king_originala
typedef unsigned char Byte;

void __cdecl copyLevel(const Byte* source, int pixelStride, int components,
                       unsigned width, unsigned height, Byte* destination,
                       int componentStride, int rowStride);

void __cdecl reduceLevel(int components, const Byte* source, Byte* destination,
                         int pixelStride, int componentStride, int rowStride,
                         unsigned width, unsigned height)
{
    if (width == 1 || height == 1) {
        copyLevel(source, pixelStride, components, width, height,
                  destination, componentStride, rowStride);
        return;
    }

    int columns = (int)(width >> 1);
    int rows = (int)(height >> 1);
    int adjustment = rowStride - width * pixelStride;

    if (rows > 0) {
        adjustment += rowStride;
        do {
            int remainingColumns = columns;
            if (remainingColumns > 0) {
                do {
                    int remainingComponents = components;
                    if (remainingComponents > 0) {
                        int offset = pixelStride;
                        const Byte* lower = source + rowStride;
                        offset -= rowStride;
                        do {
                            int sum = lower[pixelStride] + lower[offset];
                            sum += *source;
                            sum += *lower;
                            *destination = (Byte)((sum + 2) / 4);
                            ++destination;
                            source += componentStride;
                            lower += componentStride;
                        } while (--remainingComponents);
                    }
                    source += pixelStride;
                } while (--remainingColumns);
            }
            source += adjustment;
        } while (--rows);
    }
}
