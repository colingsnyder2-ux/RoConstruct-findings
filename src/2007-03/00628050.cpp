// roc 2007-03 00628050  unit: seg_00620000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00628050
//
// 00628050  837c241000           cmp dword ptr [esp + 0x10], 0
// 00628055  56                   push esi
// 00628056  8b742408             mov esi, dword ptr [esp + 8]
// 0062805a  57                   push edi
// 0062805b  8bf9                 mov edi, ecx
// 0062805d  7426                 je 0x628085
// 0062805f  6a0e                 push 0xe
// 00628061  56                   push esi
// 00628062  e8a568ffff           call 0x61e90c
// 00628067  85c0                 test eax, eax
// 00628069  741a                 je 0x628085
// 0062806b  6a01                 push 1
// 0062806d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00628071  8b542414             mov edx, dword ptr [esp + 0x14]
// 00628075  51                   push ecx
// 00628076  52                   push edx
// 00628077  56                   push esi
// 00628078  50                   push eax
// 00628079  8bcf                 mov ecx, edi
// 0062807b  e840e2ffff           call 0x6262c0
// 00628080  5f                   pop edi
// 00628081  5e                   pop esi
// 00628082  c21000               ret 0x10
// 00628085  6a03                 push 3
// 00628087  56                   push esi
// 00628088  e87f68ffff           call 0x61e90c
// 0062808d  85c0                 test eax, eax
// 0062808f  7404                 je 0x628095
// 00628091  6a00                 push 0
// 00628093  ebd8                 jmp 0x62806d
// 00628095  5f                   pop edi
// 00628096  33c0                 xor eax, eax
// 00628098  5e                   pop esi
// 00628099  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000029@@QAEHHHHH@Z)

namespace ns_ROCX000029 {
struct CXTPImageManagerIcon {
    int sub_6496B0(int, int, int, int, int);
    int func(int, int, int, int);
};

extern "C" int __stdcall sub_630478(int, int);

int CXTPImageManagerIcon::func(int a, int b, int c, int d) {
    int result;
    if (d != 0) {
        result = sub_630478(a, 0xe);
        if (result != 0) {
            return sub_6496B0(result, a, b, c, 1);
        }
    }
    result = sub_630478(a, 3);
    if (result != 0) {
        return sub_6496B0(result, a, b, c, 0);
    }
    return 0;
}
}
