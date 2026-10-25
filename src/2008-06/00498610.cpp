// from server: 100% by king_originala
// roc 2008-06 00498610  unit: RBX::VInstance::?$NonFactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498610
//
// 00498610  64a100000000         mov eax, dword ptr fs:[0]
// 00498616  6aff                 push -1
// 00498618  68b86d7c00           push 0x7c6db8
// 0049861d  50                   push eax
// 0049861e  64892500000000       mov dword ptr fs:[0], esp
// 00498625  56                   push esi
// 00498626  57                   push edi
// 00498627  8bf1                 mov esi, ecx
// 00498629  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049862d  8d4c2420             lea ecx, [esp + 0x20]
// 00498631  8d7e04               lea edi, [esi + 4]
// 00498634  51                   push ecx
// 00498635  8bcf                 mov ecx, edi
// 00498637  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049863f  8906                 mov dword ptr [esi], eax
// 00498641  e8aae8ffff           call 0x496ef0
// 00498646  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049864a  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0049864e  8a44242d             mov al, byte ptr [esp + 0x2d]
// 00498652  51                   push ecx
// 00498653  88570c               mov byte ptr [edi + 0xc], dl
// 00498656  88470d               mov byte ptr [edi + 0xd], al
// 00498659  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00498661  e8baf60600           call 0x507d20
// 00498666  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049866a  83c404               add esp, 4
// 0049866d  5f                   pop edi
// 0049866e  8bc6                 mov eax, esi
// 00498670  64890d00000000       mov dword ptr fs:[0], ecx
// 00498677  5e                   pop esi
// 00498678  83c40c               add esp, 0xc
// 0049867b  c21800               ret 0x18

void __cdecl alignedFree(void*);

struct String {
    void* data;
    int length;
    int capacity;

    String(const String&);
};

struct Argument : String {
    bool first;
    bool second;

    Argument(const Argument& other)
        : String(other), first(other.first), second(other.second)
    {
    }

    ~Argument() { alignedFree(data); }
};

struct S {
    int value;
    Argument argument;

    S(int, int, Argument);
};

S::S(int v, int, Argument source)
    : value(v), argument(source)
{
}
