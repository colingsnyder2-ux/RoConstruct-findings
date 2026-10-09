// from server: 86% by colin
// roc 2007-08 0061eee0  unit: RBX::ScoreHud  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061eee0
//
// 0061eee0  8b442404             mov eax, dword ptr [esp + 4]
// 0061eee4  56                   push esi
// 0061eee5  57                   push edi
// 0061eee6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061eeea  57                   push edi
// 0061eeeb  50                   push eax
// 0061eeec  8bf1                 mov esi, ecx
// 0061eeee  e85dbbf5ff           call 0x57aa50
// 0061eef3  85ff                 test edi, edi
// 0061eef5  7409                 je 0x61ef00
// 0061eef7  8bcf                 mov ecx, edi
// 0061eef9  e8021ee3ff           call 0x450d00
// 0061eefe  eb02                 jmp 0x61ef02
// 0061ef00  33c0                 xor eax, eax
// 0061ef02  85ff                 test edi, edi
// 0061ef04  898604010000         mov dword ptr [esi + 0x104], eax
// 0061ef0a  7412                 je 0x61ef1e
// 0061ef0c  8bcf                 mov ecx, edi
// 0061ef0e  e87df6deff           call 0x40e590
// 0061ef13  5f                   pop edi
// 0061ef14  898608010000         mov dword ptr [esi + 0x108], eax
// 0061ef1a  5e                   pop esi
// 0061ef1b  c20800               ret 8
// 0061ef1e  33c0                 xor eax, eax
// 0061ef20  5f                   pop edi
// 0061ef21  898608010000         mov dword ptr [esi + 0x108], eax
// 0061ef27  5e                   pop esi
// 0061ef28  c20800               ret 8

struct RBX_ScoreHud {
    char pad[0x104];
    int field_104;
    int field_108;
    void func_0061eee0(int a, int b);
};

extern "C" void __stdcall sub_0057aa50(int, int);
extern "C" int __stdcall sub_00450d00();
extern "C" int __stdcall sub_0040e590();

void RBX_ScoreHud::func_0061eee0(int a, int b)
{
    sub_0057aa50(a, b);
    int v;
    if (b != 0) {
        v = sub_00450d00();
    } else {
        v = 0;
    }
    field_104 = v;
    if (b != 0) {
        field_108 = sub_0040e590();
    } else {
        field_108 = 0;
    }
}
