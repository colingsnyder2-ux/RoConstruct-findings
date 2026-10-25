// from server: 100% by tester
// roc 2008-06 0061ef70  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ef70
//
// 0061ef70  6aff                 push -1
// 0061ef72  68b9fe7c00           push 0x7cfeb9
// 0061ef77  64a100000000         mov eax, dword ptr fs:[0]
// 0061ef7d  50                   push eax
// 0061ef7e  64892500000000       mov dword ptr fs:[0], esp
// 0061ef85  83ec44               sub esp, 0x44
// 0061ef88  8d0424               lea eax, [esp]
// 0061ef8b  68d4458400           push 0x8445d4
// 0061ef90  50                   push eax
// 0061ef91  e87aabeeff           call 0x509b10
// 0061ef96  83c408               add esp, 8
// 0061ef99  50                   push eax
// 0061ef9a  8d4c2420             lea ecx, [esp + 0x20]
// 0061ef9e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061efa6  e8a5addeff           call 0x409d50
// 0061efab  68c81b8d00           push 0x8d1bc8
// 0061efb0  8d4c2420             lea ecx, [esp + 0x20]
// 0061efb4  51                   push ecx
// 0061efb5  e8d2250800           call 0x6a158c

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
    throw RuntimeError(makeString("EnumItem cannot be modified"));
}
