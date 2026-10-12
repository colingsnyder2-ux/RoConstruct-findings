// from server: 94% by king_originala
struct StreamBuffer;

extern int (__thiscall *pubsync)(StreamBuffer *);

extern __declspec(noreturn) void __stdcall write_buffer(
    void *buffer, StreamBuffer *stream, char *data, int size);

struct S
{
    char reserved0[0x14];
    char **begin;
    char reserved1[0x0c];
    char **end;
    char reserved2[0x18];
    char buffer[0x60];
    StreamBuffer *stream;

    int sync();
};

int S::sync()
{
    char *last = *end;
    char *first = *begin;
    int size = int(last - first);

    try
    {
        if (size > 0)
        {
            StreamBuffer *destination = stream;
            write_buffer(buffer, destination, first, size);
        }

        if (stream)
            pubsync(stream);

        return 0;
    }
    catch (const int &)
    {
        return -1;
    }
}
