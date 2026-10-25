// from server: 100% by king_originala
// roc 2008-06 00598c70  unit: RBX::PartInstance  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598c70
//
// 00598c70  56                   push esi
// 00598c71  8bf1                 mov esi, ecx
// 00598c73  56                   push esi
// 00598c74  e817a70000           call 0x5a3390
// 00598c79  83c404               add esp, 4
// 00598c7c  85c0                 test eax, eax
// 00598c7e  740e                 je 0x598c8e
// 00598c80  81c628020000         add esi, 0x228
// 00598c86  56                   push esi
// 00598c87  8bc8                 mov ecx, eax
// 00598c89  e832180500           call 0x5ea4c0
// 00598c8e  5e                   pop esi
// 00598c8f  c3                   ret 

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
