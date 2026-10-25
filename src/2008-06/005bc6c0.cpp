// from server: 100% by king_originala
// roc 2008-06 005bc6c0  unit: RBX::Soundscape::SoundService  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc6c0
//
// 005bc6c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bc6c4  8d442404             lea eax, [esp + 4]
// 005bc6c8  50                   push eax
// 005bc6c9  51                   push ecx
// 005bc6ca  e87f350e00           call 0x69fc4e
// 005bc6cf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bc6d3  85c9                 test ecx, ecx
// 005bc6d5  7405                 je 0x5bc6dc
// 005bc6d7  e894ffffff           call 0x5bc670
// 005bc6dc  33c0                 xor eax, eax
// 005bc6de  c21400               ret 0x14

struct ResourcePair {
    void clear();
};

extern "C" void __stdcall prepare(ResourcePair* pair, ResourcePair** slot);

extern "C" int __stdcall callback(ResourcePair* pair, int, int, int, int)
{
    prepare(pair, &pair);
    if (pair)
        pair->clear();
    return 0;
}
