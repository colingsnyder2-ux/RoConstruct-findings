// from server: 100% by king_originala
// roc 2008-06 00577370  unit: RBX::DataModel  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577370
//
// 00577370  6aff                 push -1
// 00577372  6811e87c00           push 0x7ce811
// 00577377  64a100000000         mov eax, dword ptr fs:[0]
// 0057737d  50                   push eax
// 0057737e  64892500000000       mov dword ptr fs:[0], esp
// 00577385  51                   push ecx
// 00577386  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057738a  89442414             mov dword ptr [esp + 0x14], eax
// 0057738e  890424               mov dword ptr [esp], eax
// 00577391  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00577399  85c0                 test eax, eax
// 0057739b  7414                 je 0x5773b1
// 0057739d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005773a1  8b11                 mov edx, dword ptr [ecx]
// 005773a3  83c104               add ecx, 4
// 005773a6  51                   push ecx
// 005773a7  8d4804               lea ecx, [eax + 4]
// 005773aa  8910                 mov dword ptr [eax], edx
// 005773ac  e85ff1ffff           call 0x576510
// 005773b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005773b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005773bc  83c410               add esp, 0x10
// 005773bf  c3                   ret 

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
