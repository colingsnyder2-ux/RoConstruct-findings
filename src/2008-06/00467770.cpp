// from server: 34% by colin
struct DxUserInput
{
    char pad0[4];
    char pad1[0x20];
    void* ptr24;

    void Release();
};

extern "C" long __stdcall InterlockedDecrement(long volatile*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_45ad90(void*);

void DxUserInput::Release()
{
    if (ptr24)
    {
        if (InterlockedDecrement((long*)ptr24 + 1) == 0)
        {
            sub_45ad90(ptr24);
            if (ptr24)
            {
                void** vt = *(void***)ptr24;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(ptr24, 1);
            }
        }
        ptr24 = 0;
    }
    sub_802468((char*)this + 4);
}
