// from server: 100% by king_originala
// roc 2008-06 0061edb0  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061edb0
//
// 0061edb0  6aff                 push -1
// 0061edb2  68b9fe7c00           push 0x7cfeb9
// 0061edb7  64a100000000         mov eax, dword ptr fs:[0]
// 0061edbd  50                   push eax
// 0061edbe  64892500000000       mov dword ptr fs:[0], esp
// 0061edc5  83ec44               sub esp, 0x44
// 0061edc8  8d0424               lea eax, [esp]
// 0061edcb  68a0458400           push 0x8445a0
// 0061edd0  50                   push eax
// 0061edd1  e83aadeeff           call 0x509b10
// 0061edd6  83c408               add esp, 8
// 0061edd9  50                   push eax
// 0061edda  8d4c2420             lea ecx, [esp + 0x20]
// 0061edde  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061ede6  e865afdeff           call 0x409d50
// 0061edeb  68c81b8d00           push 0x8d1bc8
// 0061edf0  8d4c2420             lea ecx, [esp + 0x20]
// 0061edf4  51                   push ecx
// 0061edf5  e892270800           call 0x6a158c

struct String {
    char storage[28];
    ~String();
};

String __cdecl makeString(const char *);

struct RuntimeError {
    char storage[40];
    RuntimeError(const String &);
    RuntimeError(const RuntimeError &);
    ~RuntimeError();
};

void __cdecl rejectEnumModification()
{
    throw RuntimeError(makeString("Enums cannot be modified"));
}
