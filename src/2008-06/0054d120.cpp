// from server: 100% by king_originala
// roc 2008-06 0054d120  unit: RBX::RenderBase::Mesh  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d120
//
// 0054d120  55                   push ebp
// 0054d121  8bec                 mov ebp, esp
// 0054d123  83ec08               sub esp, 8
// 0054d126  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d129  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d12c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054d12f  3b08                 cmp ecx, dword ptr [eax]
// 0054d131  721c                 jb 0x54d14f
// 0054d133  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d136  8b4204               mov eax, dword ptr [edx + 4]
// 0054d139  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d13c  8b11                 mov edx, dword ptr [ecx]
// 0054d13e  8d04c2               lea eax, [edx + eax*8]
// 0054d141  394508               cmp dword ptr [ebp + 8], eax
// 0054d144  7309                 jae 0x54d14f
// 0054d146  c745f801000000       mov dword ptr [ebp - 8], 1
// 0054d14d  eb07                 jmp 0x54d156
// 0054d14f  c745f800000000       mov dword ptr [ebp - 8], 0
// 0054d156  8a45f8               mov al, byte ptr [ebp - 8]
// 0054d159  8be5                 mov esp, ebp
// 0054d15b  5d                   pop ebp
// 0054d15c  c20400               ret 4

struct Element {
    unsigned int data[2];
};

struct Mesh {
    Element* begin;
    unsigned int count;
    bool contains(Element* value);
};

#pragma optimize("", off)
bool Mesh::contains(Element* value)
{
    return value >= begin && value < begin + count;
}
