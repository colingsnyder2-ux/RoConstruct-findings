// from server: 63% by colin
// roc 2007-08 00567dc0  unit: RBX::RootInstance  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567dc0
//
// 00567dc0  53                   push ebx
// 00567dc1  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00567dc5  55                   push ebp
// 00567dc6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00567dca  56                   push esi
// 00567dcb  8b742418             mov esi, dword ptr [esp + 0x18]
// 00567dcf  57                   push edi
// 00567dd0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00567dd4  3bf7                 cmp esi, edi
// 00567dd6  7410                 je 0x567de8
// 00567dd8  8b0e                 mov ecx, dword ptr [esi]
// 00567dda  53                   push ebx
// 00567ddb  03cd                 add ecx, ebp
// 00567ddd  ff54242c             call dword ptr [esp + 0x2c]
// 00567de1  83c608               add esi, 8
// 00567de4  3bf7                 cmp esi, edi
// 00567de6  75f0                 jne 0x567dd8
// 00567de8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00567dec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00567df0  8b542430             mov edx, dword ptr [esp + 0x30]
// 00567df4  5f                   pop edi
// 00567df5  8908                 mov dword ptr [eax], ecx
// 00567df7  896804               mov dword ptr [eax + 4], ebp
// 00567dfa  5e                   pop esi
// 00567dfb  895008               mov dword ptr [eax + 8], edx
// 00567dfe  5d                   pop ebp
// 00567dff  89580c               mov dword ptr [eax + 0xc], ebx
// 00567e02  5b                   pop ebx
// 00567e03  c3                   ret 

struct RBX_RootInstance {
    void insertInstancesHelper(int* begin, int* end, int base, int arg, int arg2, int arg3, int* out);
};

void RBX_RootInstance::insertInstancesHelper(int* begin, int* end, int base, int arg, int arg2, int arg3, int* out)
{
    int* it = begin;
    while (it != end)
    {
        int ecx = *it + base;
        void (__thiscall *fn)(int, int) = *(void (__thiscall **)(int, int))(*(int*)(&arg2));
        fn(ecx, arg3);
        it += 2;
    }
    out[0] = arg;
    out[1] = base;
    out[2] = arg2;
    out[3] = arg3;
}
