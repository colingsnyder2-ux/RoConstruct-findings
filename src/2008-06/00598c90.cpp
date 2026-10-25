// from server: 100% by king_originala
// roc 2008-06 00598c90  unit: RBX::PartInstance  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598c90
//
// 00598c90  56                   push esi
// 00598c91  8bf1                 mov esi, ecx
// 00598c93  56                   push esi
// 00598c94  e8f7a60000           call 0x5a3390
// 00598c99  83c404               add esp, 4
// 00598c9c  85c0                 test eax, eax
// 00598c9e  740e                 je 0x598cae
// 00598ca0  81c628020000         add esi, 0x228
// 00598ca6  56                   push esi
// 00598ca7  8bc8                 mov ecx, eax
// 00598ca9  e822190500           call 0x5ea5d0
// 00598cae  5e                   pop esi
// 00598caf  c3                   ret 

struct S;

struct Receiver
{
    void func_005ea4c0(unsigned int value);
};

extern Receiver* __cdecl func_005a3390(S* object);

struct S
{
    void func_00598c70();
};

void S::func_00598c70()
{
    Receiver* receiver = func_005a3390(this);
    if (receiver)
        receiver->func_005ea4c0(
            reinterpret_cast<unsigned int>(reinterpret_cast<char*>(this) + 0x228));
}
