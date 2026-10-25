// from server: 69% by atomic.potato
// roc 2011-06 00546330  unit: G3D::TextInput::TokenException  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00546330
//
// 00546330  e80bfdffff           call 0x546040
// 00546335  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00546338  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 0054633b  7c04                 jl 0x546341
// 0054633d  83c8ff               or eax, 0xffffffff
// 00546340  c3                   ret 
// 00546341  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00546344  0fb60401             movzx eax, byte ptr [ecx + eax]
// 00546348  c3                   ret 

struct S {
    char pad0[0x20];
    char* buf;
    int limit;
    char pad1[8];
    int pos;
    int f();
};

extern "C" void __cdecl sub_546040();

int S::f() {
    sub_546040();
    int p = pos;
    if (p >= limit) {
        return -1;
    }
    return (unsigned char)buf[p];
}
