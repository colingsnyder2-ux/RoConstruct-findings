// from server: 13% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct VCAppIObjectSafetyRobloxImpl
{
    void construct();
    void assign(void* p);
};

extern void func_00544ce0();
extern void func_004091e0();

void VCAppIObjectSafetyRobloxImpl::construct()
{
    void* p = malloc(0xf0);
    if (p != 0)
    {
        func_00544ce0();
    }
    else
    {
        p = 0;
    }
    func_004091e0();
}

void VCAppIObjectSafetyRobloxImpl::assign(void* p)
{
    construct();
}
