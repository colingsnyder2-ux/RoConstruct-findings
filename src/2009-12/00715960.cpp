// roc 2009-12 00715960  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715960
//
// 00715960  8b442404             mov eax, dword ptr [esp + 4]
// 00715964  8bd1                 mov edx, ecx
// 00715966  85c0                 test eax, eax
// 00715968  7405                 je 0x71596f
// 0071596a  83c0e4               add eax, -0x1c
// 0071596d  eb02                 jmp 0x715971
// 0071596f  33c0                 xor eax, eax
// 00715971  51                   push ecx
// 00715972  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715976  d901                 fld dword ptr [ecx]
// 00715978  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0071597b  8b5210               mov edx, dword ptr [edx + 0x10]
// 0071597e  d91c24               fstp dword ptr [esp]
// 00715981  03c8                 add ecx, eax
// 00715983  ffd2                 call edx
// 00715985  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAEXPAXPAM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S
{
    int vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;

    void f(void *, float *);
};

void S::f(void *p, float *value)
{
    int x = p ? (int)((char *)p - 28) : 0;
    float v = *value;
    void (__thiscall *fn)(int, float) = (void (__thiscall *)(int, float))field10;
    fn(field14 + x, v);
}