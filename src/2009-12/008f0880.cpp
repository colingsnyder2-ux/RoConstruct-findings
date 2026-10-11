// from server: 31% by atomic.potato
extern "C" void* __cdecl func_007f3860(unsigned int size);
extern "C" void __fastcall func_008f04a0(void* self);

void* __fastcall func_008f0880(void* self)
{
    void* p = func_007f3860(0x218);
    if (p != 0)
    {
        func_008f04a0(p);
    }
    else
    {
        p = 0;
    }
    return p;
}
