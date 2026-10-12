// from server: 97% by king_originala
struct Allocator {};
struct ReadBuffer;
struct WriteBuffer;

typedef char *(__thiscall *AllocateFn)(Allocator *, unsigned int, const void *);
typedef void (__thiscall *DeallocateFn)(Allocator *, char *, unsigned int);
typedef int (__thiscall *ReadFn)(ReadBuffer *, char *, int);
typedef int (__thiscall *WriteFn)(WriteBuffer *, const char *, int);

extern AllocateFn allocate;
extern DeallocateFn deallocate;
extern ReadFn sgetn;
extern WriteFn sputn;

struct ReadBuffer {
    int read(char *, int);
};

struct WriteBuffer {
    int write(const char *, int);
};

inline int ReadBuffer::read(char *p, int n)
{
    return sgetn(this, p, n);
}

inline int WriteBuffer::write(const char *p, int n)
{
    return sputn(this, p, n);
}

struct Stream {
    char prefix[4];
    WriteBuffer writeBuffer;
    char padding[3];
    ReadBuffer readBuffer;
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
    Stream **destination = output;
    int total = 0;
    unsigned char &finished = reinterpret_cast<unsigned char &>(output);

    do {
        Stream *source = *input;
        if (int n = source->readBuffer.read(buffer.data, size))
            count = n;
        else
            count = -1;

        finished = count == -1;
        if (count != -1) {
            int written = 0;
            while (written < count) {
                Stream *sink = *destination;
                written += sink->writeBuffer.write(
                    buffer.data + written, count - written);
            }
            total += count;
        }
    } while (!finished);

    return total;
}
