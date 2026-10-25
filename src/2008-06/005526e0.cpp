// from server: 100% by tester
// roc 2008-06 005526e0  unit: RBX::RenderBase::AggregateChunk  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005526e0
//
// 005526e0  55                   push ebp
// 005526e1  8bec                 mov ebp, esp
// 005526e3  83ec08               sub esp, 8
// 005526e6  894df8               mov dword ptr [ebp - 8], ecx
// 005526e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005526f0  8b45f8               mov eax, dword ptr [ebp - 8]
// 005526f3  83c028               add eax, 0x28
// 005526f6  50                   push eax
// 005526f7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005526fa  e821e1f9ff           call 0x4f0820
// 005526ff  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552702  83c901               or ecx, 1
// 00552705  894dfc               mov dword ptr [ebp - 4], ecx
// 00552708  8b4508               mov eax, dword ptr [ebp + 8]
// 0055270b  8be5                 mov esp, ebp
// 0055270d  5d                   pop ebp
// 0055270e  c20400               ret 4

struct Texture {
    unsigned int value;
    Texture(const Texture&);
    ~Texture();
};

struct AggregateChunk {
    char padding[40];
    Texture texture;
    Texture getTexture();
};

#pragma optimize("", off)
Texture AggregateChunk::getTexture()
{
    return texture;
}
#pragma optimize("", on)
