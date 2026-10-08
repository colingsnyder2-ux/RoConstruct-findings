// from server: 78% by colin
// roc 2007-08 006b3e50  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3e50
//
// 006b3e50  83b9e4010000ff       cmp dword ptr [ecx + 0x1e4], -1
// 006b3e57  741c                 je 0x6b3e75
// 006b3e59  83b9f401000000       cmp dword ptr [ecx + 0x1f4], 0
// 006b3e60  7513                 jne 0x6b3e75
// 006b3e62  6a01                 push 1
// 006b3e64  6a00                 push 0
// 006b3e66  c781ec01000001000000 mov dword ptr [ecx + 0x1ec], 1
// 006b3e70  e81bffffff           call 0x6b3d90
// 006b3e75  c20800               ret 8

struct CXTPControlGallery {
    char pad[0x1e4];
    int field_1e4;
    char pad2[0x1ec - 0x1e4 - 4];
    int field_1ec;
    char pad3[0x1f4 - 0x1ec - 4];
    int field_1f4;
    void sub_6b3d90();
    void func_6b3e50(int a, int b);
};

void CXTPControlGallery::func_6b3e50(int a, int b)
{
    if (field_1e4 != -1 && field_1f4 == 0)
    {
        field_1ec = 1;
        sub_6b3d90();
    }
}
