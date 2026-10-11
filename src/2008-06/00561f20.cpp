// from server: 31% by atomic.potato
struct S {
    char pad0[0x1c];
    int field1c;
    int f(int, int, int, int, int, int, int, int, int);
};

struct Str {
    char pad[0x1c];
    void* data;
    unsigned int size;
    unsigned int cap;
};

extern "C" {
    void* __stdcall sub_80245c(void*, const char*);
    void* __stdcall sub_80243c(void*, int, int, int);
    void* __stdcall sub_802404(void*, const char*, int, int, int);
    void __stdcall sub_802468(void*);
}

void* __cdecl sub_6a0920(unsigned int);
void __cdecl sub_6a158c(void*, const char*);
void __cdecl sub_509b10(void*, const char*, const char*);
void __cdecl sub_409d50(void*, const char*);
int* __cdecl sub_561980(S*);

int S::f(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    int result = 0;
    char buf[0x20];
    void* stream = 0;
    int flag = 1;

    sub_80245c(buf, (const char*)&a);
    *(int*)((char*)buf + 0x1c) = i;

    int* p = sub_561980(this);
    if (p == 0) {
        Str* s = (Str*)((char*)this + 0x6c);
        const char* str;
        if (s->cap >= 0x10)
            str = (const char*)s->data;
        else
            str = (const char*)s + 4;
        char tmp[0x10];
        sub_509b10(tmp, "Unable to load %s", str);
        sub_409d50(tmp, "Content failed for %s because %s");
        sub_6a158c((void*)0x8d1bc8, tmp);
    }

    if (*p != 0) {
        void* obj = sub_6a0920(0x84);
        stream = obj;
        if (obj != 0) {
            int v = *p;
            sub_80243c(obj, v, 1, 1);
            *(void**)((char*)obj + 0x50) = (void*)0x82deb4;
        } else {
            obj = 0;
        }
        *(void**)((char*)this + 0x64) = obj;
    } else {
        void* obj = sub_6a0920(0x8c);
        stream = obj;
        if (obj != 0) {
            Str* s = (Str*)((char*)p + 8);
            const char* str;
            if (s->cap >= 0x10)
                str = (const char*)s->data;
            else
                str = (const char*)s + 4;
            sub_802404(obj, str, 0x21, 0x40, 1);
            *(void**)((char*)obj + 0x58) = (void*)0x82deac;
        } else {
            obj = 0;
        }
        *(void**)((char*)this + 0x64) = obj;
    }

    sub_802468((char*)this + 0x68);
    return result;
}
