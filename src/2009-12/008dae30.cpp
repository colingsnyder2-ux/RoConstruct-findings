// roc 2009-12 008dae30  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dae30
//
// 008dae30  53                   push ebx
// 008dae31  55                   push ebp
// 008dae32  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008dae36  56                   push esi
// 008dae37  8bd9                 mov ebx, ecx
// 008dae39  8b7378               mov esi, dword ptr [ebx + 0x78]
// 008dae3c  57                   push edi
// 008dae3d  83cfff               or edi, 0xffffffff
// 008dae40  896b70               mov dword ptr [ebx + 0x70], ebp
// 008dae43  85f6                 test esi, esi
// 008dae45  741b                 je 0x8dae62
// 008dae47  8b4608               mov eax, dword ptr [esi + 8]
// 008dae4a  85c0                 test eax, eax
// 008dae4c  740d                 je 0x8dae5b
// 008dae4e  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 008dae51  7508                 jne 0x8dae5b
// 008dae53  57                   push edi
// 008dae54  8bcb                 mov ecx, ebx
// 008dae56  e895ffffff           call 0x8dadf0
// 008dae5b  8b36                 mov esi, dword ptr [esi]
// 008dae5d  47                   inc edi
// 008dae5e  85f6                 test esi, esi
// 008dae60  75e5                 jne 0x8dae47
// 008dae62  5f                   pop edi
// 008dae63  5e                   pop esi
// 008dae64  5d                   pop ebp
// 008dae65  5b                   pop ebx
// 008dae66  c20400               ret 4
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
