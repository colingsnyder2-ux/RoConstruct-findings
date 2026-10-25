// from server: 100% by tester
// roc 2008-06 00597420  unit: RBX::VTextureId::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597420
//
// 00597420  6aff                 push -1
// 00597422  683bf47b00           push 0x7bf43b
// 00597427  64a100000000         mov eax, dword ptr fs:[0]
// 0059742d  50                   push eax
// 0059742e  64892500000000       mov dword ptr fs:[0], esp
// 00597435  51                   push ecx
// 00597436  56                   push esi
// 00597437  6a24                 push 0x24
// 00597439  8bf1                 mov esi, ecx
// 0059743b  e8e0941000           call 0x6a0920
// 00597440  83c404               add esp, 4
// 00597443  89442404             mov dword ptr [esp + 4], eax
// 00597447  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059744f  85c0                 test eax, eax
// 00597451  741b                 je 0x59746e
// 00597453  83c604               add esi, 4
// 00597456  56                   push esi
// 00597457  8bc8                 mov ecx, eax
// 00597459  e852ffffff           call 0x5973b0
// 0059745e  5e                   pop esi
// 0059745f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00597463  64890d00000000       mov dword ptr fs:[0], ecx
// 0059746a  83c410               add esp, 0x10
// 0059746d  c3                   ret 
// 0059746e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597472  33c0                 xor eax, eax
// 00597474  5e                   pop esi
// 00597475  64890d00000000       mov dword ptr fs:[0], ecx
// 0059747c  83c410               add esp, 0x10
// 0059747f  c3                   ret 

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
