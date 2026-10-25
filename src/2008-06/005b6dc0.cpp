// from server: 100% by tester
// roc 2008-06 005b6dc0  unit: RBX::Soundscape::VSoundId::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6dc0
//
// 005b6dc0  6aff                 push -1
// 005b6dc2  683bf47b00           push 0x7bf43b
// 005b6dc7  64a100000000         mov eax, dword ptr fs:[0]
// 005b6dcd  50                   push eax
// 005b6dce  64892500000000       mov dword ptr fs:[0], esp
// 005b6dd5  51                   push ecx
// 005b6dd6  56                   push esi
// 005b6dd7  6a24                 push 0x24
// 005b6dd9  8bf1                 mov esi, ecx
// 005b6ddb  e8409b0e00           call 0x6a0920
// 005b6de0  83c404               add esp, 4
// 005b6de3  89442404             mov dword ptr [esp + 4], eax
// 005b6de7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b6def  85c0                 test eax, eax
// 005b6df1  741b                 je 0x5b6e0e
// 005b6df3  83c604               add esi, 4
// 005b6df6  56                   push esi
// 005b6df7  8bc8                 mov ecx, eax
// 005b6df9  e852ffffff           call 0x5b6d50
// 005b6dfe  5e                   pop esi
// 005b6dff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b6e03  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6e0a  83c410               add esp, 0x10
// 005b6e0d  c3                   ret 
// 005b6e0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b6e12  33c0                 xor eax, eax
// 005b6e14  5e                   pop esi
// 005b6e15  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6e1c  83c410               add esp, 0x10
// 005b6e1f  c3                   ret 

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
