// from server: 72% by colin
// roc 2007-08 00643a10  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643a10
//
// 00643a10  56                   push esi
// 00643a11  8bf1                 mov esi, ecx
// 00643a13  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 00643a19  85c9                 test ecx, ecx
// 00643a1b  7405                 je 0x643a22
// 00643a1d  e8c2c7feff           call 0x6301e4
// 00643a22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00643a26  85c9                 test ecx, ecx
// 00643a28  898e64010000         mov dword ptr [esi + 0x164], ecx
// 00643a2e  5e                   pop esi
// 00643a2f  740a                 je 0x643a3b
// 00643a31  8b01                 mov eax, dword ptr [ecx]
// 00643a33  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00643a39  ffd2                 call edx
// 00643a3b  c20400               ret 4

struct CXTPCommandBar
{
    char pad[0x164];
    void* field_164;

    void SetCommandBar(void* p);
};

extern "C" void __stdcall helper_6301e4(void* p);

void CXTPCommandBar::SetCommandBar(void* p)
{
    if (field_164 != 0)
        helper_6301e4(field_164);
    field_164 = p;
    if (p != 0)
    {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0xa8 / 4];
        fn(p);
    }
}
