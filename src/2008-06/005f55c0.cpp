// from server: 98% by king_originala
struct Position {
    int state;
    __int64 position;
    __int64 offset;
};

struct S;
extern int (__thiscall *pubsync)(S*);

struct Device {
    char storage[0x4c];
    void seek(Position* result, __int64 offset, int direction, int mode, void* file);
};

struct S {
    char storage0[0x10];
    int* field10;
    int* field14;
    char storage18[8];
    int* field20;
    int* field24;
    char storage28[8];
    int* field30;
    int* field34;
    char storage38[8];
    Device device;
    void* file;

    void seek(Position* result, __int64 offset, int direction, int mode);
};

void S::seek(Position* result, __int64 offset, int direction, int mode)
{
    if (*field24 != 0)
        pubsync(this);

    if (direction == 1 && *field20 != 0)
        offset -= *field30;

    *field10 = 0;
    *field20 = 0;
    *field30 = 0;
    *field14 = 0;
    *field24 = 0;
    *field34 = 0;

    device.seek(result, offset, direction, mode, file);
}
