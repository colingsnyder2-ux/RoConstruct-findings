// from server: 68% by atomic.potato
// roc 2010-06 0077a060  unit: RBX::PartDropTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a060
//
// 0077a060  56                   push esi
// 0077a061  8bf1                 mov esi, ecx
// 0077a063  8b4edc               mov ecx, dword ptr [esi - 0x24]
// 0077a066  e815def9ff           call 0x717e80
// 0077a06b  8b46bc               mov eax, dword ptr [esi - 0x44]
// 0077a06e  8b5038               mov edx, dword ptr [eax + 0x38]
// 0077a071  8d4ebc               lea ecx, [esi - 0x44]
// 0077a074  ffd2                 call edx
// 0077a076  33c0                 xor eax, eax
// 0077a078  5e                   pop esi
// 0077a079  c3                   ret 

struct Sub {
    char pad0[0x38];
    void (__thiscall *fn)(void);
};

struct Outer {
    char pad0[0x24];
    int field24;
    char pad1[0x1c];
    Sub sub;
    int method();
};

extern "C" void __stdcall sub_717e80(int);

int Outer::method()
{
    sub_717e80(field24);
    Sub* s = &sub;
    s->fn();
    return 0;
}
