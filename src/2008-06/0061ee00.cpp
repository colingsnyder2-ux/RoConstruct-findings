// from server: 100% by tester
// roc 2008-06 0061ee00  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ee00
//
// 0061ee00  6aff                 push -1
// 0061ee02  68b9fe7c00           push 0x7cfeb9
// 0061ee07  64a100000000         mov eax, dword ptr fs:[0]
// 0061ee0d  50                   push eax
// 0061ee0e  64892500000000       mov dword ptr fs:[0], esp
// 0061ee15  83ec44               sub esp, 0x44
// 0061ee18  8d0424               lea eax, [esp]
// 0061ee1b  68bc458400           push 0x8445bc
// 0061ee20  50                   push eax
// 0061ee21  e8eaaceeff           call 0x509b10
// 0061ee26  83c408               add esp, 8
// 0061ee29  50                   push eax
// 0061ee2a  8d4c2420             lea ecx, [esp + 0x20]
// 0061ee2e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061ee36  e815afdeff           call 0x409d50
// 0061ee3b  68c81b8d00           push 0x8d1bc8
// 0061ee40  8d4c2420             lea ecx, [esp + 0x20]
// 0061ee44  51                   push ecx
// 0061ee45  e842270800           call 0x6a158c

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
    throw RuntimeError(makeString("Enum cannot be modified"));
}
