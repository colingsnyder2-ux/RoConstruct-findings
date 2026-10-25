// from server: 100% by king_originala
// roc 2008-06 00552720  unit: RBX::RenderBase::AggregateChunk  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552720
//
// 00552720  55                   push ebp
// 00552721  8bec                 mov ebp, esp
// 00552723  83ec08               sub esp, 8
// 00552726  894df8               mov dword ptr [ebp - 8], ecx
// 00552729  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00552730  8b45f8               mov eax, dword ptr [ebp - 8]
// 00552733  83c02c               add eax, 0x2c
// 00552736  50                   push eax
// 00552737  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0055273a  e8e1e0f9ff           call 0x4f0820
// 0055273f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552742  83c901               or ecx, 1
// 00552745  894dfc               mov dword ptr [ebp - 4], ecx
// 00552748  8b4508               mov eax, dword ptr [ebp + 8]
// 0055274b  8be5                 mov esp, ebp
// 0055274d  5d                   pop ebp
// 0055274e  c20400               ret 4

struct Texture {
    unsigned int value;
    Texture(const Texture&);
    ~Texture();
};

struct AggregateChunk {
    char padding[44];
    Texture texture;
    Texture getTexture();
};

#pragma optimize("", off)
Texture AggregateChunk::getTexture()
{
    return texture;
}
#pragma optimize("", on)
