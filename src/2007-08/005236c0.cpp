// from server: 67% by colin
extern "C" void __cdecl sub_51E8E0(void*, const char*);
extern "C" void __cdecl sub_51E990(void*, const char*);
extern "C" void* __cdecl sub_51ED00(void*, int);
extern "C" void __cdecl sub_51ECD0(void*, void*);
extern "C" void __cdecl sub_5206A0(void*, void*, void*);
extern "C" int __cdecl sub_521750(void*, void*, int);
extern "C" int __cdecl sub_5147B0(void*, void*, void*, int);

struct S {
    void f(int, char*);
};

void S::f(int a, char* b)
{
    char* p = (char*)this;
    if ((*(unsigned char*)(p + 0x68) & 1) == 0) {
        sub_51E8E0(p, (const char*)0x7A4310);
    }
    unsigned int flags = *(unsigned int*)(p + 0x68);
    if (flags & 4) {
        flags |= 8;
        *(unsigned int*)(p + 0x68) = flags;
    }
    char* buf = (char*)sub_51ED00(p, a + 1);
    if (buf == 0) {
        sub_51E990(p, (const char*)0x7A42EC);
        return;
    }
    sub_5206A0(p, buf, (void*)a);
    if (sub_521750(p, buf, 0) != 0) {
        sub_51ECD0(p, buf);
        return;
    }
    char* end = buf + a;
    *end = 0;
    char* q = buf;
    if (*q != 0) {
        do {
            q++;
        } while (*q != 0);
    }
    if (q != end) {
        q++;
    }
    char* node = (char*)sub_51ED00(p, 0x10);
    if (node == 0) {
        sub_51E990(p, (const char*)0x7A42C0);
        sub_51ECD0(p, buf);
        return;
    }
    *(int*)(node + 0) = -1;
    *(char**)(node + 4) = buf;
    *(char**)(node + 8) = q;
    char* r = q;
    char* r2 = q + 1;
    char c;
    do {
        c = *r;
        r++;
    } while (c != 0);
    *(int*)(node + 0xc) = (int)(r - r2);
    int res = sub_5147B0(p, b, node, 1);
    sub_51ECD0(p, buf);
    sub_51ECD0(p, node);
    if (res != 0) {
        sub_51E990(p, (const char*)0x7A4294);
    }
}
