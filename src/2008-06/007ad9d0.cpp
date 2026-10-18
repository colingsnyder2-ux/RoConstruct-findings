// from server: 63% by colin
struct S {
    void __fastcall f(int rowStep, int channels, unsigned int width,
                      unsigned int height, unsigned char* output,
                      int step, int stride);
};

void __fastcall S::f(int rowStep, int channels, unsigned int width,
                     unsigned int height, unsigned char* output,
                     int step, int stride)
{
    unsigned char* source = reinterpret_cast<unsigned char*>(this);
    int halfWidth = static_cast<int>(width >> 1);
    int halfHeight = static_cast<int>(height >> 1);

    if (width == 1) {
        if (halfWidth > 0) {
            int rows = halfWidth;
            do {
                int count = channels;
                if (count > 0) {
                    do {
                        int first = source[0];
                        int second = source[rowStep];
                        source += step;
                        *output++ = static_cast<unsigned char>((first + second) / 2);
                    } while (--count);
                }
                source += rowStep;
            } while (--rows);
        }
    } else if (height == 1) {
        int adjustment = stride + stride - rowStep;
        if (halfHeight > 0) {
            int rows = halfHeight;
            do {
                int count = channels;
                if (count > 0) {
                    do {
                        int first = source[0];
                        int second = source[stride];
                        source += step;
                        *output++ = static_cast<unsigned char>((first + second) / 2);
                    } while (--count);
                }
                source += adjustment;
            } while (--rows);
        }
    }
}
