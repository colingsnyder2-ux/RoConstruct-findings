// from server: 70% by atomic.potato
extern "C" void __cdecl Function_0041ae90(void*, void*, int);

struct CInstanceRecord
{
    void __cdecl f(void*, int);
};

void CInstanceRecord::f(void* p, int value)
{
    if (value != 4)
    {
        Function_0041ae90(0, p, value);
        return;
    }

    *(unsigned int*)p = 0x00b7ca38;
    *((unsigned char*)p + 4) = 0;
    *((unsigned char*)p + 5) = 0;
}
