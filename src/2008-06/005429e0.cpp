// from server: 100% by king_originala
// roc 2008-06 005429e0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005429e0
//
// 005429e0  55                   push ebp
// 005429e1  8bec                 mov ebp, esp
// 005429e3  51                   push ecx
// 005429e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005429e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005429ea  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005429ed  8a11                 mov dl, byte ptr [ecx]
// 005429ef  8810                 mov byte ptr [eax], dl
// 005429f1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005429f4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005429f7  8a5101               mov dl, byte ptr [ecx + 1]
// 005429fa  885001               mov byte ptr [eax + 1], dl
// 005429fd  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542a00  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00542a03  d94104               fld dword ptr [ecx + 4]
// 00542a06  d95804               fstp dword ptr [eax + 4]
// 00542a09  8b5508               mov edx, dword ptr [ebp + 8]
// 00542a0c  83c208               add edx, 8
// 00542a0f  52                   push edx
// 00542a10  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542a13  83c108               add ecx, 8
// 00542a16  e805defaff           call 0x4f0820
// 00542a1b  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542a1e  8be5                 mov esp, ebp
// 00542a20  5d                   pop ebp
// 00542a21  c20400               ret 4

struct Texture {
    unsigned long value;
    Texture(const Texture& other);
};

struct S {
    unsigned char first;
    unsigned char second;
    float scalar;
    Texture texture;

    S(const S& other);
};

#pragma optimize("", off)
S::S(const S& other)
    : first(other.first),
      second(other.second),
      scalar(other.scalar),
      texture(other.texture)
{
}
#pragma optimize("", on)
