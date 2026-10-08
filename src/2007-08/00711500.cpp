// from server: 10% by colin
// roc 2007-08 00711500  unit: CXTColorSelectorCtrl  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00711500
//
// 00711500  56                   push esi
// 00711501  8bf1                 mov esi, ecx
// 00711503  e8c8faffff           call 0x710fd0
// 00711508  84c0                 test al, al
// 0071150a  7419                 je 0x711525
// 0071150c  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 00711512  e8edeaf1ff           call 0x630004
// 00711517  8bc6                 mov eax, esi
// 00711519  50                   push eax
// 0071151a  8bce                 mov ecx, esi
// 0071151c  e801f4f1ff           call 0x630922
// 00711521  5e                   pop esi
// 00711522  c20400               ret 4
// 00711525  8b442408             mov eax, dword ptr [esp + 8]
// 00711529  50                   push eax
// 0071152a  8bce                 mov ecx, esi
// 0071152c  e8f1f3f1ff           call 0x630922
// 00711531  5e                   pop esi
// 00711532  c20400               ret 4

struct CXTColorSelectorCtrl {
    char pad[0x160];
    int field_160;
    bool sub_710FD0();
    void sub_630004();
    void sub_630922(void*);
    void target(int);
};

bool CXTColorSelectorCtrl::sub_710FD0()
{
    return true;
}

void CXTColorSelectorCtrl::sub_630004()
{
}

void CXTColorSelectorCtrl::sub_630922(void*)
{
}

void CXTColorSelectorCtrl::target(int arg)
{
    if (sub_710FD0())
    {
        sub_630004();
        sub_630922(this);
    }
    else
    {
        sub_630922(&arg);
    }
}
