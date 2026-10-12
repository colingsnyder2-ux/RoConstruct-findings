// from server: 98% by king_originala
struct S;

extern int (__thiscall *pubsync)(S *);

struct Stream {
    char storage[0x60];
    void *seek(void *result, __int64 offset, int direction, int mode,
               void *context);
};

struct S {
    char padding0[0x10];
    int *state10;
    int *state14;
    char padding18[8];
    int *state20;
    int *state24;
    char padding28[8];
    int *state30;
    int *state34;
    char padding38[8];
    Stream stream;
    void *context;

    void *seek(void *result, __int64 offset, int direction, int mode);
};

void *S::seek(void *result, __int64 offset, int direction, int mode)
{
    if (*state24 != 0)
        pubsync(this);

    if (direction == 1 && *state20 != 0)
        offset -= *state30;

    *state10 = 0;
    *state20 = 0;
    *state30 = 0;
    *state14 = 0;
    *state24 = 0;
    *state34 = 0;

    return stream.seek(result, offset, direction, mode, context);
}
