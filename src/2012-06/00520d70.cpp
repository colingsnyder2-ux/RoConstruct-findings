// from server: 62% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall string_copy_ctor(void*, const void*);

struct VPlayer {
    void* field0;
    char pad1[0x1c];
    void* field20;
    void* field24;
    void* field28;
    void construct(void* src);
};

void VPlayer::construct(void* src) {
    char* s = (char*)src;
    field0 = *(void**)s;
    string_copy_ctor((char*)this + 4, s + 4);
    *(void**)((char*)this + 0x20) = *(void**)(s + 0x20);
    void* p = *(void**)(s + 0x20);
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
    }
    *(void**)((char*)this + 0x24) = *(void**)(s + 0x24);
    void* q = *(void**)(s + 0x28);
    *(void**)((char*)this + 0x28) = q;
    if (q) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 8), 1);
    }
}
