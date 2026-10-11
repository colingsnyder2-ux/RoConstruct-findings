// from server: 50% by atomic.potato
extern "C" int __cdecl fprintf(void*, const char*, ...);

struct S {
    char pad0[4];
    void* field4;
    void f(void*);
};

void S::f(void* arg) {
    if (this->field4 != 0) {
        ((void (__thiscall*)(S*))0x5ec030)(this);
        char* p = (char*)arg;
        if (*(unsigned int*)(p + 0x18) < 0x10)
            p = p + 4;
        else
            p = *(char**)(p + 4);
        fprintf(*(void**)0x98b800, (const char*)0x9bea30, p);
    }
}
