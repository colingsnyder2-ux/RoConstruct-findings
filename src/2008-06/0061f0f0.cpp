// from server: 100% by king_originala
// roc 2008-06 0061f0f0  unit: RBX::Lua::LuaArguments  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f0f0
//
// 0061f0f0  64a100000000         mov eax, dword ptr fs:[0]
// 0061f0f6  6aff                 push -1
// 0061f0f8  68b9fe7c00           push 0x7cfeb9
// 0061f0fd  50                   push eax
// 0061f0fe  64892500000000       mov dword ptr fs:[0], esp
// 0061f105  83ec44               sub esp, 0x44
// 0061f108  56                   push esi
// 0061f109  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0061f10d  56                   push esi
// 0061f10e  e87d51f3ff           call 0x554290
// 0061f113  50                   push eax
// 0061f114  e867ffffff           call 0x61f080
// 0061f119  83c408               add esp, 8
// 0061f11c  85c0                 test eax, eax
// 0061f11e  7423                 je 0x61f143
// 0061f120  50                   push eax
// 0061f121  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061f125  50                   push eax
// 0061f126  e805aaf8ff           call 0x5a9b30
// 0061f12b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061f12f  83c408               add esp, 8
// 0061f132  b801000000           mov eax, 1
// 0061f137  5e                   pop esi
// 0061f138  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f13f  83c450               add esp, 0x50
// 0061f142  c3                   ret 
// 0061f143  56                   push esi
// 0061f144  8d4c2408             lea ecx, [esp + 8]
// 0061f148  68f0458400           push 0x8445f0
// 0061f14d  51                   push ecx
// 0061f14e  e8bda9eeff           call 0x509b10
// 0061f153  83c40c               add esp, 0xc
// 0061f156  50                   push eax
// 0061f157  8d4c2424             lea ecx, [esp + 0x24]
// 0061f15b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061f163  e8e8abdeff           call 0x409d50
// 0061f168  68c81b8d00           push 0x8d1bc8
// 0061f16d  8d542424             lea edx, [esp + 0x24]
// 0061f171  52                   push edx
// 0061f172  e815240800           call 0x6a158c

struct String {
    char storage[28];
    ~String();
};

struct RuntimeError {
    char storage[40];
    RuntimeError(const String&);
    RuntimeError(const RuntimeError&);
    ~RuntimeError();
};

extern const char invalidEnumFormat[];
extern "C" const char* __cdecl sub_554290(int);
extern "C" void* __cdecl sub_61f080(const char*);
extern "C" void __cdecl sub_5a9b30(int, void*);
String __cdecl sub_509b10(const char*, ...);

int __cdecl sub_61f0f0(int, int value, int destination)
{
    void* item = sub_61f080(sub_554290(value));
    if (item) {
        sub_5a9b30(destination, item);
        return 1;
    }
    throw RuntimeError(sub_509b10(invalidEnumFormat, value));
}
