// from server: 45% by atomic.potato
struct S {
    void* vfptr;
    void* field4;
    void* field8;
    int f();
};

extern "C" int __stdcall pubsync(void*);

int S::f() {
    void* p = field8;
    vfptr = (void*)0xaa84e0;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 8) = (void*)0xaa84d8;
    void* r = *(void**)field4;
    void* s = *(void**)r;
    if (*(unsigned char*)((char*)s + 0x1c) & 1) {
        void* t = field8;
        void* u = *(void**)((char*)t + 4);
        void* v = *(void**)((char*)u + (int)this + 0x30);
        pubsync(v);
    }
    ((void(*)(void*))0x6e2f20)(this);
    return 0;
}
