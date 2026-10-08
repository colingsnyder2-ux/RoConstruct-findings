// from server: 77% by colin
// roc 2007-08 00421f60  unit: CXTTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421f60
//
// 00421f60  56                   push esi
// 00421f61  8bf1                 mov esi, ecx
// 00421f63  e86cdd2000           call 0x62fcd4
// 00421f68  80be9000000000       cmp byte ptr [esi + 0x90], 0
// 00421f6f  740c                 je 0x421f7d
// 00421f71  8b4654               mov eax, dword ptr [esi + 0x54]
// 00421f74  8b5044               mov edx, dword ptr [eax + 0x44]
// 00421f77  8d4e54               lea ecx, [esi + 0x54]
// 00421f7a  5e                   pop esi
// 00421f7b  ffe2                 jmp edx
// 00421f7d  5e                   pop esi
// 00421f7e  c3                   ret 

struct CXTTreeCtrl {
    char pad[0x54];
    void* field_54;
    char pad2[0x90 - 0x58];
    char field_90;
    void OnSomething();
};

extern "C" void __stdcall sub_62fcd4();

void CXTTreeCtrl::OnSomething()
{
    sub_62fcd4();
    if (field_90 != 0)
    {
        void** p = (void**)field_54;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))p[0x44 / 4];
        fn(&field_54);
    }
}
