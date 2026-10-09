// from server: 69% by colin
// roc 2007-08 0040c100  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c100
//
// 0040c100  56                   push esi
// 0040c101  8b742408             mov esi, dword ptr [esp + 8]
// 0040c105  834618ff             add dword ptr [esi + 0x18], -1
// 0040c109  57                   push edi
// 0040c10a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0040c10d  7536                 jne 0x40c145
// 0040c10f  85f6                 test esi, esi
// 0040c111  7432                 je 0x40c145
// 0040c113  8d4e08               lea ecx, [esi + 8]
// 0040c116  c706c05b7800         mov dword ptr [esi], 0x785bc0
// 0040c11c  c74604a85b7800       mov dword ptr [esi + 4], 0x785ba8
// 0040c123  c701845b7800         mov dword ptr [ecx], 0x785b84
// 0040c129  c746145c5b7800       mov dword ptr [esi + 0x14], 0x785b5c
// 0040c130  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040c137  e8e4a90500           call 0x466b20
// 0040c13c  56                   push esi
// 0040c13d  e8203b2200           call 0x62fc62
// 0040c142  83c404               add esp, 4
// 0040c145  8bc7                 mov eax, edi
// 0040c147  5f                   pop edi
// 0040c148  5e                   pop esi
// 0040c149  c20400               ret 4

struct VCBrowserViewExternal_CComObjectNoLock {
    int Release(int);
};

extern "C" void __stdcall sub_466B20();
extern "C" void __stdcall sub_62FC62(void*);

int VCBrowserViewExternal_CComObjectNoLock::Release(int)
{
    int* p = (int*)this;
    int count = p[6] - 1;
    p[6] = count;
    int result = count;
    if (count == 0 && this != 0) {
        p[0] = 0x785bc0;
        p[1] = 0x785ba8;
        p[2] = 0x785b84;
        p[5] = 0x785b5c;
        p[6] = (int)0xc0000001;
        sub_466B20();
        sub_62FC62(this);
    }
    return result;
}
