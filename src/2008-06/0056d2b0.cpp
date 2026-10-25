// from server: 100% by tester
// roc 2008-06 0056d2b0  unit: G3D::VColor3::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d2b0
//
// 0056d2b0  6aff                 push -1
// 0056d2b2  683bf47b00           push 0x7bf43b
// 0056d2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0056d2bd  50                   push eax
// 0056d2be  64892500000000       mov dword ptr fs:[0], esp
// 0056d2c5  51                   push ecx
// 0056d2c6  56                   push esi
// 0056d2c7  6a24                 push 0x24
// 0056d2c9  8bf1                 mov esi, ecx
// 0056d2cb  e850361300           call 0x6a0920
// 0056d2d0  83c404               add esp, 4
// 0056d2d3  89442404             mov dword ptr [esp + 4], eax
// 0056d2d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d2df  85c0                 test eax, eax
// 0056d2e1  740e                 je 0x56d2f1
// 0056d2e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056d2e7  51                   push ecx
// 0056d2e8  8bc8                 mov ecx, eax
// 0056d2ea  e821f5ffff           call 0x56c810
// 0056d2ef  eb02                 jmp 0x56d2f3
// 0056d2f1  33c0                 xor eax, eax
// 0056d2f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d2f7  8906                 mov dword ptr [esi], eax
// 0056d2f9  8bc6                 mov eax, esi
// 0056d2fb  5e                   pop esi
// 0056d2fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d303  83c410               add esp, 0x10
// 0056d306  c20400               ret 4

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
