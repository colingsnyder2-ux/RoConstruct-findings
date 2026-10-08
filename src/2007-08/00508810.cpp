// from server: 100% by colin
// roc 2007-08 00508810  unit: G3D::GCamera  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508810
//
// 00508810  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00508813  83e801               sub eax, 1
// 00508816  50                   push eax
// 00508817  e864ffffff           call 0x508780
// 0050881c  c3                   ret 

struct GCamera {
    char pad[0x4c];
    int field_0x4c;
    void func_00508780(int);
    void func_00508810();
};

void GCamera::func_00508810()
{
    func_00508780(field_0x4c - 1);
}
