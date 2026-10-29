// roc 2012-06 00a5fff0  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fff0
//
// 00a5fff0  53                   push ebx
// 00a5fff1  55                   push ebp
// 00a5fff2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00a5fff6  56                   push esi
// 00a5fff7  8bd9                 mov ebx, ecx
// 00a5fff9  8b7378               mov esi, dword ptr [ebx + 0x78]
// 00a5fffc  57                   push edi
// 00a5fffd  83cfff               or edi, 0xffffffff
// 00a60000  896b70               mov dword ptr [ebx + 0x70], ebp
// 00a60003  85f6                 test esi, esi
// 00a60005  741b                 je 0xa60022
// 00a60007  8b4608               mov eax, dword ptr [esi + 8]
// 00a6000a  85c0                 test eax, eax
// 00a6000c  740d                 je 0xa6001b
// 00a6000e  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 00a60011  7508                 jne 0xa6001b
// 00a60013  57                   push edi
// 00a60014  8bcb                 mov ecx, ebx
// 00a60016  e895ffffff           call 0xa5ffb0
// 00a6001b  8b36                 mov esi, dword ptr [esi]
// 00a6001d  47                   inc edi
// 00a6001e  85f6                 test esi, esi
// 00a60020  75e5                 jne 0xa60007
// 00a60022  5f                   pop edi
// 00a60023  5e                   pop esi
// 00a60024  5d                   pop ebp
// 00a60025  5b                   pop ebx
// 00a60026  c20400               ret 4
// copied from an identical function in another client (function ?sub_8002c0@CXTColorHex@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
struct CXTColorHex {
    char pad[0x70];
    int field_70;
    char pad2[0x4];
    void* field_78;
    void sub_800280(int);
    void sub_8002c0(int);
};

void CXTColorHex::sub_8002c0(int arg) {
    void* esi;
    int edi;
    field_70 = arg;
    esi = field_78;
    edi = -1;
    while (esi != 0) {
        int* eax = *(int**)((char*)esi + 8);
        if (eax != 0 && arg == eax[6]) {
            sub_800280(edi);
        }
        esi = *(void**)esi;
        edi++;
    }
}
}