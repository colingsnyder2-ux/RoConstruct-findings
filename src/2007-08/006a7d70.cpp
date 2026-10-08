// from server: 100% by colin
// roc 2007-08 006a7d70  unit: CXTPRibbonBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7d70
//
// 006a7d70  e86bfcffff           call 0x6a79e0
// 006a7d75  8b8048060000         mov eax, dword ptr [eax + 0x648]
// 006a7d7b  c3                   ret 

struct Func_6a79e0_result
{
    char pad[0x648];
    int field;
};

extern Func_6a79e0_result* func_6a79e0();

int func_6a7d70()
{
    return func_6a79e0()->field;
}
