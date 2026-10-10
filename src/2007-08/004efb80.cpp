// from server: 41% by colin
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

struct WeakReferenceCountedPointer
{
    void __cdecl assign(void* dst, void* src);
};

void WeakReferenceCountedPointer::assign(void* dst, void* src)
{
    void** d = (void**)dst;
    void** s = (void**)src;
    while (d != s)
    {
        if (d)
        {
            *d = 0;
            void* p = *s;
            if (p)
            {
                *d = p;
                InterlockedIncrement((long*)((char*)p + 4));
            }
        }
        d++;
        s++;
    }
}
