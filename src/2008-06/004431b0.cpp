// from server: 100% by king_originala
// roc 2008-06 004431b0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004431b0
//
// 004431b0  51                   push ecx
// 004431b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004431b5  c7042400000000       mov dword ptr [esp], 0
// 004431bc  85c0                 test eax, eax
// 004431be  7405                 je 0x4431c5
// 004431c0  83c0ec               add eax, -0x14
// 004431c3  eb02                 jmp 0x4431c7
// 004431c5  33c0                 xor eax, eax
// 004431c7  8b4908               mov ecx, dword ptr [ecx + 8]
// 004431ca  56                   push esi
// 004431cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004431cf  03c8                 add ecx, eax
// 004431d1  51                   push ecx
// 004431d2  8bce                 mov ecx, esi
// 004431d4  ff155c248000         call dword ptr [0x80245c]
// 004431da  8bc6                 mov eax, esi
// 004431dc  5e                   pop esi
// 004431dd  59                   pop ecx
// 004431de  c20800               ret 8

struct String {};

extern String* (__thiscall *copyString)(String*, const String&);

struct S {
    unsigned char padding[8];
    int offset;
    String* f(String* result, void* object);
};

String* S::f(String* result, void* object)
{
    volatile int state = 0;
    char* base = object ? static_cast<char*>(object) - 20 : 0;
    copyString(result, *reinterpret_cast<const String*>(base + offset));
    return result;
}
