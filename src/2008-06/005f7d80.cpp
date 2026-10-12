// from server: 83% by king_originala
struct Writer {
    char storage[0x4c];
    int write(void *, const char *, int);
};

struct S {
    char padding0[0x14];
    char **base;
    char padding1[0x0c];
    char **next;
    char padding2[0x0c];
    int *available;
    char padding3[0x08];
    Writer writer;
    void *context;
    char *buffer;
    int capacity;

    void flush();
};

void S::flush()
{
    char *first = *base;
    int length = *next - first;
    if (length > 0) {
        int written = writer.write(context, first, length);
        if (written == length) {
            char *begin = buffer;
            char *end = begin + capacity;
            *base = begin;
            *next = begin;
            *available = end - begin;
            return;
        }

        char *oldNext = *next;
        char *begin = buffer + written;
        char *end = buffer + capacity;
        *base = begin;
        *next = begin;
        *available = end - begin;

        int remaining = oldNext - *next;
        *available -= remaining;
        *next += remaining;
    }
}
