// from server: 100% by colin
// roc 2007-08 00684940  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684940
//
// 00684940  56                   push esi
// 00684941  8bf1                 mov esi, ecx
// 00684943  e88cb3faff           call 0x62fcd4
// 00684948  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0068494f  7411                 je 0x684962
// 00684951  6a00                 push 0
// 00684953  8bce                 mov ecx, esi
// 00684955  e8b6feffff           call 0x684810
// 0068495a  8bce                 mov ecx, esi
// 0068495c  5e                   pop esi
// 0068495d  e97ef2ffff           jmp 0x683be0
// 00684962  5e                   pop esi
// 00684963  c3                   ret 

struct CXTPPropertyGrid
{
    void func_0062fcd4();
    void func_00684810(int);
    void func_00683be0();
    void func_00684940();
};

void CXTPPropertyGrid::func_00684940()
{
    func_0062fcd4();
    if (*(int*)((char*)this + 0x154) != 0)
    {
        func_00684810(0);
        func_00683be0();
    }
}
