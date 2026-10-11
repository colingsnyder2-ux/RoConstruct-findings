// from server: 100% by tester
// roc 2008-06 004178a0  unit: VCLuaFunction::?$CComContainedObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004178a0
//
// 004178a0  8b442404             mov eax, dword ptr [esp + 4]
// 004178a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004178a8  8b10                 mov edx, dword ptr [eax]
// 004178aa  ffe2                 jmp edx

typedef void (__thiscall *Fn)(void*);

void func_004142e0(void* a, void* b)
{
    (*(Fn*)a)(b);
}
