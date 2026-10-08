// from server: 65% by colin
// roc 2007-08 00643ee0  unit: CXTPCommandBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643ee0
//
// 00643ee0  56                   push esi
// 00643ee1  57                   push edi
// 00643ee2  8bf1                 mov esi, ecx
// 00643ee4  33d2                 xor edx, edx
// 00643ee6  e85576e3ff           call 0x47b540
// 00643eeb  85c0                 test eax, eax
// 00643eed  7e22                 jle 0x643f11
// 00643eef  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00643ef3  52                   push edx
// 00643ef4  8bce                 mov ecx, esi
// 00643ef6  e825ccdeff           call 0x430b20
// 00643efb  39b8d4000000         cmp dword ptr [eax + 0xd4], edi
// 00643f01  7410                 je 0x643f13
// 00643f03  8bce                 mov ecx, esi
// 00643f05  83c201               add edx, 1
// 00643f08  e83376e3ff           call 0x47b540
// 00643f0d  3bd0                 cmp edx, eax
// 00643f0f  7ce2                 jl 0x643ef3
// 00643f11  33c0                 xor eax, eax
// 00643f13  5f                   pop edi
// 00643f14  5e                   pop esi
// 00643f15  c20400               ret 4

struct CXTPCommandBar
{
    int GetCount();
    void* GetAt(int);
    int Find(void*);
};

int CXTPCommandBar::Find(void* p)
{
    int i = 0;
    if (GetCount() > 0)
    {
        do
        {
            if (*(void**)((char*)GetAt(i) + 0xd4) == p)
                return i;
            ++i;
        } while (i < GetCount());
    }
    return 0;
}
