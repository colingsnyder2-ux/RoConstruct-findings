// from server: 98% by king_originala
extern int (__thiscall *pubsync)(void*);

struct SeekTarget {
    unsigned char reserved[8];
    void* seek(void* result, __int64 offset, int direction, int mode, int context);
};

struct S {
    unsigned char reserved0[16];
    int* p10;
    int* p14;
    unsigned char reserved18[8];
    int* p20;
    int* p24;
    unsigned char reserved28[8];
    int* p30;
    int* p34;
    unsigned char reserved38[8];
    SeekTarget target;
    int context;

    void* seek(void* result, __int64 offset, int direction, int mode);
};

void* S::seek(void* result, __int64 offset, int direction, int mode)
{
    if (*p24 != 0)
        pubsync(this);

    if (direction == 1 && *p20 != 0)
        offset -= *p30;

    *p10 = 0;
    *p20 = 0;
    *p30 = 0;
    *p14 = 0;
    *p24 = 0;
    *p34 = 0;

    return target.seek(result, offset, direction, mode, context);
}
