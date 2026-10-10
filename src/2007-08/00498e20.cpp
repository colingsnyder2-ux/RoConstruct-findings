// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct AbuseReporterData;

struct AbuseReporter {
    void* _data;
    void* requestProcessor;
    void construct(void* a, void* b);
};

void AbuseReporter::construct(void* a, void* b)
{
    _data = a;
    void* p = (char*)this + 4;
    // call to 0x498d90 with ecx = p, args b, a
    // declared as a member-like helper
    extern void __stdcall helper498d90(void*, void*, void*);
    helper498d90(p, b, a);

    if (a != 0) {
        char* edi = (char*)a + 0xa4;
        if (edi != 0) {
            *(void**)edi = a;
            void* esi = *(void**)((char*)this + 4);
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }
            void* ecx = *(void**)(edi + 4);
            if (ecx != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1) == 1) {
                    void** vt = *(void***)ecx;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(ecx);
                }
            }
            *(void**)(edi + 4) = esi;
        }
    }
}
