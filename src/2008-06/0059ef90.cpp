// from server: 100% by king_originala
// roc 2008-06 0059ef90  unit: RBX::VMeshId::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ef90
//
// 0059ef90  6aff                 push -1
// 0059ef92  683bf47b00           push 0x7bf43b
// 0059ef97  64a100000000         mov eax, dword ptr fs:[0]
// 0059ef9d  50                   push eax
// 0059ef9e  64892500000000       mov dword ptr fs:[0], esp
// 0059efa5  51                   push ecx
// 0059efa6  56                   push esi
// 0059efa7  6a24                 push 0x24
// 0059efa9  8bf1                 mov esi, ecx
// 0059efab  e870191000           call 0x6a0920
// 0059efb0  83c404               add esp, 4
// 0059efb3  89442404             mov dword ptr [esp + 4], eax
// 0059efb7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059efbf  85c0                 test eax, eax
// 0059efc1  740e                 je 0x59efd1
// 0059efc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059efc7  51                   push ecx
// 0059efc8  8bc8                 mov ecx, eax
// 0059efca  e8f1feffff           call 0x59eec0
// 0059efcf  eb02                 jmp 0x59efd3
// 0059efd1  33c0                 xor eax, eax
// 0059efd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059efd7  8906                 mov dword ptr [esi], eax
// 0059efd9  8bc6                 mov eax, esi
// 0059efdb  5e                   pop esi
// 0059efdc  64890d00000000       mov dword ptr fs:[0], ecx
// 0059efe3  83c410               add esp, 0x10
// 0059efe6  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value
{
    char data[0x24];
    Value(const Value&);
};

struct Holder
{
    Value* value;
    Holder(const Value&);
};

Holder::Holder(const Value& source)
{
    value = new Value(source);
}
