// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VCWorkspaceCComObject
{
    char pad[0x20];
    int field20;
    long* field24;
    void get(int* out);
};

void VCWorkspaceCComObject::get(int* out)
{
    out[0] = field20;
    long* p = field24;
    out[1] = (int)p;
    if (p)
    {
        _InterlockedExchangeAdd(p + 1, 1);
    }
}
