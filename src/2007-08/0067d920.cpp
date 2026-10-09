// from server: 66% by colin
// roc 2007-08 0067d920  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d920
//
// 0067d920  56                   push esi
// 0067d921  57                   push edi
// 0067d922  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0067d926  6a00                 push 0
// 0067d928  8bf1                 mov esi, ecx
// 0067d92a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067d92e  57                   push edi
// 0067d92f  e8bc020100           call 0x68dbf0
// 0067d934  85c0                 test eax, eax
// 0067d936  7421                 je 0x67d959
// 0067d938  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067d93c  8b01                 mov eax, dword ptr [ecx]
// 0067d93e  6a01                 push 1
// 0067d940  50                   push eax
// 0067d941  6854597800           push 0x785954
// 0067d946  8d5001               lea edx, [eax + 1]
// 0067d949  57                   push edi
// 0067d94a  8911                 mov dword ptr [ecx], edx
// 0067d94c  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 0067d952  6a01                 push 1
// 0067d954  e847f9ffff           call 0x67d2a0
// 0067d959  5f                   pop edi
// 0067d95a  5e                   pop esi
// 0067d95b  c20c00               ret 0xc

struct CXTPControlWorkspaceActions {
    char pad[0xf4];
    int field_f4;
    int sub_67D2A0(int, int, const char*, int, int);
    int sub_68DBF0(int, int);
    int func(int, int, int);
};

int CXTPControlWorkspaceActions::func(int a, int b, int c) {
    int result = sub_68DBF0(b, 0);
    if (result != 0) {
        int* p = (int*)c;
        int val = *p;
        *p = val + 1;
        ((CXTPControlWorkspaceActions*)field_f4)->sub_67D2A0(b, val, (const char*)0x785954, 1, 1);
    }
    return result;
}
