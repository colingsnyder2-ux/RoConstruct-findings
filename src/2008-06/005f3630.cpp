// from server: 98% by king_originala
struct Position {
    int state;
    __int64 offset;
    __int64 position;
};

struct FileBuffer {
    void* file;
    void* conversion;
    Position* seek(Position* result, __int64 offset, int origin,
                   int mode, void* conversion);
};

struct StreamBuffer {
    char reserved00[16];
    int* count10;
    int* count14;
    char reserved18[8];
    int* count20;
    int* count24;
    char reserved28[8];
    int* count30;
    int* count34;
    char reserved38[8];
    FileBuffer buffer;

    Position* seekoff(Position* result, __int64 offset, int origin, int mode);
};

extern int (__thiscall *pubsync)(StreamBuffer*);

Position* StreamBuffer::seekoff(Position* result, __int64 offset,
                                int origin, int mode)
{
    if (*count24 != 0)
        pubsync(this);

    if (origin == 1 && *count20 != 0)
        offset -= *count30;

    *count10 = 0;
    *count20 = 0;
    *count30 = 0;
    *count14 = 0;
    *count24 = 0;
    *count34 = 0;

    return buffer.seek(result, offset, origin, mode, buffer.conversion);
}
