// from server: 93% by tester
struct type_info;

extern "C" {
    int __stdcall type_info_equals(const type_info* self, const type_info* other);
}

struct S {
};

void __cdecl f(int a, int b, int c)
{
    if (c == 0) {
        if (b == 0)
            return;
        int* src = (int*)a;
        int* dst = (int*)b;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        return;
    }
    if (c == 1)
        return;
    int* p = (int*)b;
    const type_info* t = (const type_info*)p[0];
    unsigned char r = (unsigned char)type_info_equals(t, (const type_info*)0x961678);
    int mask = -(int)r;
    p[0] = mask & a;
}
