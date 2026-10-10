// from server: 78% by colin
// roc 2007-08 005237e0  unit: seg_00520000  size: 340 bytes

extern "C" void __cdecl sub_51E8E0(void* a, const char* b);
extern "C" void __cdecl sub_51E990(void* a, const char* b);
extern "C" void __cdecl sub_51ECD0(void* a, void* b);
extern "C" void* __cdecl sub_51ED00(void* a, int b);
extern "C" void __cdecl sub_5206A0(void);
extern "C" int __cdecl sub_520740(void* a, int b, int c, int d, int e, int* f);
extern "C" int __cdecl sub_521750(void* a, int b);
extern "C" int __cdecl sub_5147B0(void* a, void* b, int c, int d, int e);

struct S {
    void f(int a, int b, int c);
};

void S::f(int a, int b, int c)
{
    char* self = (char*)this;
    if ((*(unsigned char*)(self + 0x68) & 1) == 0) {
        sub_51E8E0(self, (const char*)0x7a43ec);
    }
    unsigned int flags = *(unsigned int*)(self + 0x68);
    if (flags & 4) {
        flags |= 8;
        *(unsigned int*)(self + 0x68) = flags;
    }
    char* buf = (char*)sub_51ED00(self, b + 1);
    if (buf == 0) {
        sub_51E990(self, (const char*)0x7a43c4);
        return;
    }
    sub_5206A0();
    if (sub_521750(self, 0) != 0) {
        sub_51ECD0(self, buf);
        return;
    }
    char* end = buf + b;
    *end = 0;
    char* p = buf;
    if (*p != 0) {
        do {
            p++;
        } while (*p != 0);
    }
    int len;
    if (p == end) {
        sub_51E990(self, (const char*)0x7a43ac);
        len = -1;
    } else {
        len = (signed char)p[1];
        p++;
        if (len != 0) {
            sub_51E990(self, (const char*)0x7a4384);
            len = 0;
        }
        p++;
    }
    int out;
    int r = sub_520740(self, len, (int)buf, (int)(p - buf), c, &out);
    void* mem = sub_51ED00(self, 16);
    if (mem == 0) {
        sub_51E990(self, (const char*)0x7a4358);
        sub_51ECD0(self, buf);
        return;
    }
    *(int*)((char*)mem + 0) = len;
    *(int*)((char*)mem + 4) = r;
    *(int*)((char*)mem + 8) = (int)buf + r;
    *(int*)((char*)mem + 12) = out;
    int err = sub_5147B0(self, mem, 1, 0, 0);
    sub_51ECD0(self, mem);
    sub_51ECD0(self, buf);
    if (err != 0) {
        sub_51E8E0(self, (const char*)0x7a432c);
    }
}
