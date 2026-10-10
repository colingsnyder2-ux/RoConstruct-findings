// from server: 69% by colin
struct String_sink {
    char pad0[0x24];
    int* ptr24;
    char pad28[0xC];
    int* ptr34;
    char pad38[0x8];
    void* ptr40;
    char pad44[0x14];
    unsigned int flags58;
    int write(const char* s, int n);
};

extern "C" int __stdcall append(void*, const char*, unsigned int);

int String_sink::write(const char* s, int n)
{
    if ((flags58 >> 3) & 1) {
        if (*ptr24 == 0) {
            void** vtbl = *(void***)this;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0x58/4];
            fn(this);
        }
    }

    if (n == -1)
        return 0;

    if ((flags58 >> 3) & 1) {
        int* p34 = ptr34;
        int avail = *p34;
        int used = *ptr24;
        if (used == used + avail) {
            void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))0x54c470;
            fn2(this);
            used = *ptr24;
            avail = *ptr34;
            if (used == used + avail)
                return -1;
        }
        *(char*)(*ptr24) = (char)n;
        *ptr34 -= 1;
        *ptr24 += 1;
        return n;
    } else {
        char local;
        local = (char)n;
        append(ptr40, &local, 1);
        return n;
    }
}
