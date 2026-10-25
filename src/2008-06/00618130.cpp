// from server: 100% by king_originala
// roc 2008-06 00618130  unit: RBX::NullTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618130
//
// 00618130  56                   push esi
// 00618131  8bf1                 mov esi, ecx
// 00618133  c706d43b8400         mov dword ptr [esi], 0x843bd4
// 00618139  c74604bc3b8400       mov dword ptr [esi + 4], 0x843bbc
// 00618140  e83bd6ffff           call 0x615780
// 00618145  f644240801           test byte ptr [esp + 8], 1
// 0061814a  7409                 je 0x618155
// 0061814c  56                   push esi
// 0061814d  e828850800           call 0x6a067a
// 00618152  83c404               add esp, 4
// 00618155  8bc6                 mov eax, esi
// 00618157  5e                   pop esi
// 00618158  c20400               ret 4

extern "C" void __cdecl release(void *);

struct S {
    unsigned long primary;
    unsigned long secondary;

    void cleanup();
    void *destroy(unsigned int flags);
};

void *S::destroy(unsigned int flags)
{
    primary = 0x843bd4;
    secondary = 0x843bbc;
    cleanup();
    if (flags & 1)
        release(this);
    return this;
}
