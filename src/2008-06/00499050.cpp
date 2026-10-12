// from server: 100% by colin
// roc 2008-06 00499050  unit: RBX::Network::VPlayers::?$SignalDesc  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499050
//
// 00499050  6aff                 push -1
// 00499052  6811e87c00           push 0x7ce811
// 00499057  64a100000000         mov eax, dword ptr fs:[0]
// 0049905d  50                   push eax
// 0049905e  64892500000000       mov dword ptr fs:[0], esp
// 00499065  51                   push ecx
// 00499066  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049906a  89442414             mov dword ptr [esp + 0x14], eax
// 0049906e  890424               mov dword ptr [esp], eax
// 00499071  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00499079  85c0                 test eax, eax
// 0049907b  7414                 je 0x499091
// 0049907d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00499081  8b11                 mov edx, dword ptr [ecx]
// 00499083  83c104               add ecx, 4
// 00499086  51                   push ecx
// 00499087  8d4804               lea ecx, [eax + 4]
// 0049908a  8910                 mov dword ptr [eax], edx
// 0049908c  e8cfe5f7ff           call 0x417660
// 00499091  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00499095  64890d00000000       mov dword ptr fs:[0], ecx
// 0049909c  83c410               add esp, 0x10
// 0049909f  c3                   ret 

inline void* __cdecl operator new(unsigned int, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct StringPair {
    char storage[56];
    StringPair(const StringPair&);
};

struct Value {
    int first;
    StringPair second;
};

void __cdecl construct(Value* volatile destination, const Value& source)
{
    new (static_cast<void*>(destination)) Value(source);
}
