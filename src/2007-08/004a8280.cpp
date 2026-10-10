// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct ChangePropertyItem {
    int f(void* a, void* b);
};

int ChangePropertyItem::f(void* a, void* b)
{
    *(void**)this = a;
    void* local = 0;
    void* p = (char*)this + 4;
    // call 0x4a7300 with ecx = p, args b, a
    extern void __stdcall sub_4a7300(void*, void*, void*);
    sub_4a7300(p, b, a);
    if (a != 0) {
        char* edi = (char*)a + 0xa4;
        if (edi != 0) {
            *(void**)edi = a;
            void* esi = *(void**)p;
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }
            void* ecx = *(void**)(edi + 4);
            if (ecx != 0) {
                long old = _InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1);
                if (old == 1) {
                    void** vt = *(void***)ecx;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(ecx);
                }
            }
            *(void**)(edi + 4) = esi;
        }
    }
    return (int)this;
}
