// from server: 100% by colin
// roc 2007-08 004059f0  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004059f0
//
// 004059f0  8b442404             mov eax, dword ptr [esp + 4]
// 004059f4  8b4808               mov ecx, dword ptr [eax + 8]
// 004059f7  894810               mov dword ptr [eax + 0x10], ecx
// 004059fa  33c0                 xor eax, eax
// 004059fc  c20400               ret 4

struct S {
    int m0;
    int m4;
    int m8;
    int mc;
    int m10;
};

int __stdcall copyField(S* s)
{
    s->m10 = s->m8;
    return 0;
}
