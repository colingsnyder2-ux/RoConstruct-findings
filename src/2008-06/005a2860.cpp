// from server: 52% by colin
struct S {
    int f(void*);
};

extern "C" bool __cdecl func_0060a2f0();

int S::f(void* arg)
{
    if (func_0060a2f0()) {
        *(int*)this = 0;
        return 0;
    }
    int* src = (int*)arg;
    int* dst = (int*)((char*)this + 8);
    if (dst) {
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
    }
    *(int*)this = 0x833908;
    return 0;
}
