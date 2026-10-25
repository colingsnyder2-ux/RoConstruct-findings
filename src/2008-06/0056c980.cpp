// from server: 100% by king_originala
// roc 2008-06 0056c980  unit: G3D::VColor3::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c980
//
// 0056c980  6aff                 push -1
// 0056c982  683bf47b00           push 0x7bf43b
// 0056c987  64a100000000         mov eax, dword ptr fs:[0]
// 0056c98d  50                   push eax
// 0056c98e  64892500000000       mov dword ptr fs:[0], esp
// 0056c995  51                   push ecx
// 0056c996  56                   push esi
// 0056c997  6a34                 push 0x34
// 0056c999  8bf1                 mov esi, ecx
// 0056c99b  e8803f1300           call 0x6a0920
// 0056c9a0  83c404               add esp, 4
// 0056c9a3  89442404             mov dword ptr [esp + 4], eax
// 0056c9a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c9af  85c0                 test eax, eax
// 0056c9b1  740e                 je 0x56c9c1
// 0056c9b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056c9b7  51                   push ecx
// 0056c9b8  8bc8                 mov ecx, eax
// 0056c9ba  e831ffffff           call 0x56c8f0
// 0056c9bf  eb02                 jmp 0x56c9c3
// 0056c9c1  33c0                 xor eax, eax
// 0056c9c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056c9c7  8906                 mov dword ptr [esi], eax
// 0056c9c9  8bc6                 mov eax, esi
// 0056c9cb  5e                   pop esi
// 0056c9cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c9d3  83c410               add esp, 0x10
// 0056c9d6  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value
{
    char storage[0x34];
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
