// from server: 100% by colin
// roc 2007-08 005ccca0  unit: RBX::IPipelined  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccca0
//
// 005ccca0  53                   push ebx
// 005ccca1  56                   push esi
// 005ccca2  8bf1                 mov esi, ecx
// 005ccca4  8b06                 mov eax, dword ptr [esi]
// 005ccca6  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ccca9  ffd2                 call edx
// 005cccab  8ad8                 mov bl, al
// 005cccad  84db                 test bl, bl
// 005cccaf  7424                 je 0x5cccd5
// 005cccb1  837e18ff             cmp dword ptr [esi + 0x18], -1
// 005cccb5  7510                 jne 0x5cccc7
// 005cccb7  8b460c               mov eax, dword ptr [esi + 0xc]
// 005cccba  8b4e08               mov ecx, dword ptr [esi + 8]
// 005cccbd  50                   push eax
// 005cccbe  51                   push ecx
// 005cccbf  e8dc7afeff           call 0x5b47a0
// 005cccc4  83c408               add esp, 8
// 005cccc7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ccccb  895618               mov dword ptr [esi + 0x18], edx
// 005cccce  5e                   pop esi
// 005ccccf  8ac3                 mov al, bl
// 005cccd1  5b                   pop ebx
// 005cccd2  c20400               ret 4
// 005cccd5  8b4618               mov eax, dword ptr [esi + 0x18]
// 005cccd8  3b44240c             cmp eax, dword ptr [esp + 0xc]
// 005cccdc  7d07                 jge 0x5ccce5
// 005cccde  c74618ffffffff       mov dword ptr [esi + 0x18], 0xffffffff
// 005ccce5  5e                   pop esi
// 005ccce6  8ac3                 mov al, bl
// 005ccce8  5b                   pop ebx
// 005ccce9  c20400               ret 4

struct IPipelined {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    bool method18(int);
};

extern "C" void __cdecl sub_5B47A0(int, int);

bool IPipelined::method18(int arg) {
    bool result = ((bool (__thiscall *)(IPipelined *))*(void **)(*(int *)this + 0x18))(this);
    if (result) {
        if (this->field18 == -1) {
            sub_5B47A0(this->field8, this->fieldC);
        }
        this->field18 = arg;
    } else {
        if (this->field18 < arg) {
            this->field18 = -1;
        }
    }
    return result;
}
