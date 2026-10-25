// from server: 100% by tester
// roc 2008-06 00597620  unit: RBX::VDecal::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597620
//
// 00597620  6aff                 push -1
// 00597622  683bf47b00           push 0x7bf43b
// 00597627  64a100000000         mov eax, dword ptr fs:[0]
// 0059762d  50                   push eax
// 0059762e  64892500000000       mov dword ptr fs:[0], esp
// 00597635  51                   push ecx
// 00597636  56                   push esi
// 00597637  6a24                 push 0x24
// 00597639  8bf1                 mov esi, ecx
// 0059763b  e8e0921000           call 0x6a0920
// 00597640  83c404               add esp, 4
// 00597643  89442404             mov dword ptr [esp + 4], eax
// 00597647  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059764f  85c0                 test eax, eax
// 00597651  740e                 je 0x597661
// 00597653  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00597657  51                   push ecx
// 00597658  8bc8                 mov ecx, eax
// 0059765a  e851fdffff           call 0x5973b0
// 0059765f  eb02                 jmp 0x597663
// 00597661  33c0                 xor eax, eax
// 00597663  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597667  8906                 mov dword ptr [esi], eax
// 00597669  8bc6                 mov eax, esi
// 0059766b  5e                   pop esi
// 0059766c  64890d00000000       mov dword ptr fs:[0], ecx
// 00597673  83c410               add esp, 0x10
// 00597676  c20400               ret 4

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
