// from server: 100% by colin
// roc 2007-08 00682ac0  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682ac0
//
// 00682ac0  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00682ac6  85c0                 test eax, eax
// 00682ac8  7505                 jne 0x682acf
// 00682aca  e901b5fcff           jmp 0x64dfd0
// 00682acf  c3                   ret 

struct CXTPPropertyGrid
{
    char pad[0x14c];
    int* field_14c;
    int get();
};

extern int __cdecl helper_0064dfd0();

int CXTPPropertyGrid::get()
{
    if (field_14c == 0)
        return helper_0064dfd0();
    return (int)field_14c;
}
