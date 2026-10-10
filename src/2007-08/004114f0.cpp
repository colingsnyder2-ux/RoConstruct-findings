// from server: 85% by colin
extern "C" long (__stdcall *SafeArrayGetVartype)(void* psa, unsigned short* vt);

void func_004114f0(void* psa, unsigned short* vt)
{
    if (SafeArrayGetVartype(psa, vt) < 0)
        return;
    if (vt == 0)
        return;
    if (*vt != 0xd)
        return;
    if (psa == 0)
        return;
    unsigned short flags = *(unsigned short*)((char*)psa + 2);
    if ((flags & 0x40) == 0)
        return;
    if ((flags & 0x400) == 0)
        return;
    *vt = 9;
}
