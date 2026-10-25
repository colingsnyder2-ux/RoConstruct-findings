// from server: 100% by tester
// roc 2008-06 0056c880  unit: RBX::VContentId::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c880
//
// 0056c880  6aff                 push -1
// 0056c882  683bf47b00           push 0x7bf43b
// 0056c887  64a100000000         mov eax, dword ptr fs:[0]
// 0056c88d  50                   push eax
// 0056c88e  64892500000000       mov dword ptr fs:[0], esp
// 0056c895  51                   push ecx
// 0056c896  56                   push esi
// 0056c897  6a24                 push 0x24
// 0056c899  8bf1                 mov esi, ecx
// 0056c89b  e880401300           call 0x6a0920
// 0056c8a0  83c404               add esp, 4
// 0056c8a3  89442404             mov dword ptr [esp + 4], eax
// 0056c8a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c8af  85c0                 test eax, eax
// 0056c8b1  741b                 je 0x56c8ce
// 0056c8b3  83c604               add esi, 4
// 0056c8b6  56                   push esi
// 0056c8b7  8bc8                 mov ecx, eax
// 0056c8b9  e852ffffff           call 0x56c810
// 0056c8be  5e                   pop esi
// 0056c8bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056c8c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c8ca  83c410               add esp, 0x10
// 0056c8cd  c3                   ret 
// 0056c8ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056c8d2  33c0                 xor eax, eax
// 0056c8d4  5e                   pop esi
// 0056c8d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c8dc  83c410               add esp, 0x10
// 0056c8df  c3                   ret 

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
