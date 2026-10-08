// from server: 100% by colin
// roc 2007-08 005806d0  unit: RBX::Log  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005806d0
//
// 005806d0  56                   push esi
// 005806d1  8bf1                 mov esi, ecx
// 005806d3  837e1400             cmp dword ptr [esi + 0x14], 0
// 005806d7  7509                 jne 0x5806e2
// 005806d9  56                   push esi
// 005806da  e841fcffff           call 0x580320
// 005806df  83c404               add esp, 4
// 005806e2  8bc6                 mov eax, esi
// 005806e4  5e                   pop esi
// 005806e5  c3                   ret 

struct Log {
    char pad[0x14];
    int field14;
    Log* ensure();
};

extern "C" void __cdecl sub_580320(Log*);

Log* Log::ensure() {
    if (field14 == 0) {
        sub_580320(this);
    }
    return this;
}
