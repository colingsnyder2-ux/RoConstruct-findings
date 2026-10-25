// from server: 100% by tester
// roc 2011-06 00764fc0  unit: RBX::Lua::LuaArguments  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764fc0
//
// 00764fc0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00764fc3  50                   push eax
// 00764fc4  e897d3ffff           call 0x762360
// 00764fc9  83c404               add esp, 4
// 00764fcc  48                   dec eax
// 00764fcd  c3                   ret 

extern "C" int __cdecl sub_6b8d80(int);

struct LuaArguments {
    char pad[0x10];
    int field_0x10;
    int f();
};

int LuaArguments::f() {
    return sub_6b8d80(field_0x10) - 1;
}
