// from server: 65% by atomic.potato
struct S {
    char pad0[0x1c];
    void* field1c;
    void method(int, int);
};

extern "C" void* __cdecl sub_5cf450(void*);

void S::method(int a, int b) {
    void* v;
    if (a) {
        v = sub_5cf450((void*)a);
    } else {
        v = 0;
    }
    void* p = field1c;
    void** pp = (void**)p;
    void* fn = *(void**)((char*)*pp + 0xc);
    ((void (__stdcall*)(void*, void*))fn)(p, v);
}
