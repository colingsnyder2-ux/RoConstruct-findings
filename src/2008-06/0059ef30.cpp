// from server: 100% by tester
// roc 2008-06 0059ef30  unit: RBX::VMeshId::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ef30
//
// 0059ef30  6aff                 push -1
// 0059ef32  683bf47b00           push 0x7bf43b
// 0059ef37  64a100000000         mov eax, dword ptr fs:[0]
// 0059ef3d  50                   push eax
// 0059ef3e  64892500000000       mov dword ptr fs:[0], esp
// 0059ef45  51                   push ecx
// 0059ef46  56                   push esi
// 0059ef47  6a24                 push 0x24
// 0059ef49  8bf1                 mov esi, ecx
// 0059ef4b  e8d0191000           call 0x6a0920
// 0059ef50  83c404               add esp, 4
// 0059ef53  89442404             mov dword ptr [esp + 4], eax
// 0059ef57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059ef5f  85c0                 test eax, eax
// 0059ef61  741b                 je 0x59ef7e
// 0059ef63  83c604               add esi, 4
// 0059ef66  56                   push esi
// 0059ef67  8bc8                 mov ecx, eax
// 0059ef69  e852ffffff           call 0x59eec0
// 0059ef6e  5e                   pop esi
// 0059ef6f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ef73  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ef7a  83c410               add esp, 0x10
// 0059ef7d  c3                   ret 
// 0059ef7e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ef82  33c0                 xor eax, eax
// 0059ef84  5e                   pop esi
// 0059ef85  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ef8c  83c410               add esp, 0x10
// 0059ef8f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    int data;
};

struct Holder {
    char storage[0x24];
    Holder(const Value* value);
};

struct Source {
    virtual ~Source();
    Value value;
    Holder* clone() const;
};

Holder* Source::clone() const
{
    return new Holder(&value);
}
