// from server: 73% by colin
// roc 2007-08 00464eb0  unit: DxUserInput  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00464eb0
//
// 00464eb0  83c1d8               add ecx, -0x28
// 00464eb3  e848ebffff           call 0x463a00
// 00464eb8  c20c00               ret 0xc

struct DxUserInput
{
    char pad[0x28];
    void func_00463a00(int, int, int);
    void func_00464eb0(int, int, int);
};

void DxUserInput::func_00464eb0(int a, int b, int c)
{
    ((DxUserInput*)((char*)this - 0x28))->func_00463a00(a, b, c);
}
