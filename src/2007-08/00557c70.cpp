// from server: 100% by colin
// roc 2007-08 00557c70  unit: RBX::DataModel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557c70
//
// 00557c70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00557c74  83e800               sub eax, 0
// 00557c77  56                   push esi
// 00557c78  8bf1                 mov esi, ecx
// 00557c7a  7422                 je 0x557c9e
// 00557c7c  83e801               sub eax, 1
// 00557c7f  7411                 je 0x557c92
// 00557c81  83e801               sub eax, 1
// 00557c84  752f                 jne 0x557cb5
// 00557c86  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00557c89  e8b22e0200           call 0x57ab40
// 00557c8e  5e                   pop esi
// 00557c8f  c20c00               ret 0xc
// 00557c92  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00557c95  e8565d0200           call 0x57d9f0
// 00557c9a  5e                   pop esi
// 00557c9b  c20c00               ret 0xc
// 00557c9e  837c240c01           cmp dword ptr [esp + 0xc], 1
// 00557ca3  7508                 jne 0x557cad
// 00557ca5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00557ca8  e813380200           call 0x57b4c0
// 00557cad  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00557cb0  e8eb200800           call 0x5d9da0
// 00557cb5  5e                   pop esi
// 00557cb6  c20c00               ret 0xc

struct RBX_DataModel {
    char pad[0xc];
    int field_0xc;
    char pad2[0x64 - 0x10];
    int field_0x64;
    void method(int a1, int a2, int a3);
};

extern "C" void __fastcall sub_57AB40(int);
extern "C" void __fastcall sub_57D9F0(int);
extern "C" void __fastcall sub_57B4C0(int);
extern "C" void __fastcall sub_5D9DA0(int);

void RBX_DataModel::method(int a1, int a2, int a3) {
    switch (a3) {
    case 0:
        if (a2 == 1) {
            sub_57B4C0(field_0xc);
        }
        sub_5D9DA0(field_0x64);
        break;
    case 1:
        sub_57D9F0(field_0xc);
        break;
    case 2:
        sub_57AB40(field_0xc);
        break;
    }
}
