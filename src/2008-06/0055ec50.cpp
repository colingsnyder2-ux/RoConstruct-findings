// from server: 95% by king_originala
struct Allocator {};

typedef char *(__thiscall *AllocateFn)(Allocator *, unsigned int, const void *);
typedef void (__thiscall *DeallocateFn)(Allocator *, char *, unsigned int);
typedef int (__thiscall *ReadFn)(void *, char *, int);
typedef int (__thiscall *WriteFn)(void *, const char *, int);

extern AllocateFn allocate;
extern DeallocateFn deallocate;
extern ReadFn sgetn;
extern WriteFn sputn;

struct Stream {
    char prefix[4];
    char writeBuffer[4];
    char readBuffer[1];
};

struct Buffer {
    char *data;
    unsigned int size;

    Buffer(unsigned int);
    ~Buffer();
};

inline Buffer::Buffer(unsigned int n)
{
    Allocator a;
    data = allocate(&a, n, 0);
    size = n;
}

inline Buffer::~Buffer()
{
    if (data) {
        Allocator a;
        deallocate(&a, data, size);
    }
}

int copy_stream(Stream **input, Stream **output, int size)
{
    int count = 0;
    Buffer buffer(size);
    int total = 0;
    bool finished;

    do {
        if (int n = sgetn((*input)->readBuffer, buffer.data, size))
            count = n;
        else
            count = -1;

        finished = count == -1;
        if (count != -1) {
            int written = 0;
            while (written < count) {
                written += sputn((*output)->writeBuffer,
                                 buffer.data + written,
                                 count - written);
            }
            total += count;
        }
    } while (!finished);

    return total;
}
