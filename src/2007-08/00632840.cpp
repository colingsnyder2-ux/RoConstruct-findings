// from server: 90% by colin
// roc 2007-08 00632840  unit: CXTPCommandBarKeyboardTip  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632840
//
// 00632840  56                   push esi
// 00632841  8bf1                 mov esi, ecx
// 00632843  8d4e58               lea ecx, [esi + 0x58]
// 00632846  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0063284c  8d4e54               lea ecx, [esi + 0x54]
// 0063284f  ff15bcdd7700         call dword ptr [0x77ddbc]
// 00632855  8bce                 mov ecx, esi
// 00632857  e884ddffff           call 0x6305e0
// 0063285c  f644240801           test byte ptr [esp + 8], 1
// 00632861  7409                 je 0x63286c
// 00632863  56                   push esi
// 00632864  e8f9d3ffff           call 0x62fc62
// 00632869  83c404               add esp, 4
// 0063286c  8bc6                 mov eax, esi
// 0063286e  5e                   pop esi
// 0063286f  c20400               ret 4

struct CXTPCommandBarKeyboardTip {
    char pad[0x54];
    int field54;
    int field58;
    void sub_6305E0();

    void* destroy(unsigned int flags);
};

extern "C" void __stdcall sub_77DDBC(int*);
extern "C" void __cdecl sub_62FC62(void*);

void* CXTPCommandBarKeyboardTip::destroy(unsigned int flags)
{
    sub_77DDBC(&field58);
    sub_77DDBC(&field54);
    sub_6305E0();
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
