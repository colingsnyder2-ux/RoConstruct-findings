// from server: 100% by tester
// roc 2008-06 0056d340  unit: G3D::VCoordinateFrame::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d340
//
// 0056d340  6aff                 push -1
// 0056d342  683bf47b00           push 0x7bf43b
// 0056d347  64a100000000         mov eax, dword ptr fs:[0]
// 0056d34d  50                   push eax
// 0056d34e  64892500000000       mov dword ptr fs:[0], esp
// 0056d355  51                   push ecx
// 0056d356  56                   push esi
// 0056d357  6a34                 push 0x34
// 0056d359  8bf1                 mov esi, ecx
// 0056d35b  e8c0351300           call 0x6a0920
// 0056d360  83c404               add esp, 4
// 0056d363  89442404             mov dword ptr [esp + 4], eax
// 0056d367  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d36f  85c0                 test eax, eax
// 0056d371  741b                 je 0x56d38e
// 0056d373  83c604               add esi, 4
// 0056d376  56                   push esi
// 0056d377  8bc8                 mov ecx, eax
// 0056d379  e872f5ffff           call 0x56c8f0
// 0056d37e  5e                   pop esi
// 0056d37f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d383  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d38a  83c410               add esp, 0x10
// 0056d38d  c3                   ret 
// 0056d38e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d392  33c0                 xor eax, eax
// 0056d394  5e                   pop esi
// 0056d395  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d39c  83c410               add esp, 0x10
// 0056d39f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    int data;
};

struct Holder {
    char storage[0x34];
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
