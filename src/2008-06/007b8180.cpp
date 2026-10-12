// from server: 69% by king_originala
struct Image {
    void* table;
    unsigned char* data;
    int width;
    int height;
    int channels;

    Image(int, int, int);
    ~Image();
    void save(const char*, int);
};

void downsample(const Image* source, const char* filename)
{
    Image result(source->width / 2, source->height / 2, source->channels);
    int stride = source->width * source->channels;

    for (int y = 0, sy = 1; y < result.height; ++y, sy += 2) {
        for (int x = 0, sx = 1; x < result.width; ++x, sx += 2) {
            for (int c = 0; c < result.channels; ++c) {
                unsigned char* destination =
                    result.data + (result.width * x + y) * result.channels + c;
                const unsigned char* pixel =
                    source->data + 2 * ((source->width * y + x) * source->channels) + c;

                int sum;
                if (sx < source->width && sy < source->height) {
                    const unsigned char* next = pixel + source->channels;
                    sum = next[stride] + pixel[stride] + pixel[0] + next[0];
                } else {
                    sum = pixel[0] * 4;
                }
                *destination = (unsigned char)((sum + 2) >> 2);
            }
        }
    }

    result.save(filename, 5);
}
