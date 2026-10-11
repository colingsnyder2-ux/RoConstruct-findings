// from server: 92% by atomic.potato
struct Body {
    void sub_90a4a0();
    Body* f(unsigned int flags);
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" void* __cdecl sub_7bbea0();

Body* Body::f(unsigned int flags) {
    sub_90a4a0();
    if (flags & 1) {
        void* p = sub_7bbea0();
        EnterCriticalSection(p);
        *(void**)this = *(void**)((char*)p + 0x18);
        *(void**)((char*)p + 0x18) = this;
        LeaveCriticalSection(p);
    }
    return this;
}
