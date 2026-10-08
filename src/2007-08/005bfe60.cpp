// from server: 94% by colin
// roc 2007-08 005bfe60  unit: RBX::Lua::LuaArguments  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bfe60
//
// 005bfe60  53                   push ebx
// 005bfe61  56                   push esi
// 005bfe62  57                   push edi
// 005bfe63  8bf9                 mov edi, ecx
// 005bfe65  8b7708               mov esi, dword ptr [edi + 8]
// 005bfe68  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 005bfe6b  83c62c               add esi, 0x2c
// 005bfe6e  395e04               cmp dword ptr [esi + 4], ebx
// 005bfe71  7606                 jbe 0x5bfe79
// 005bfe73  ff15d8e67700         call dword ptr [0x77e6d8]
// 005bfe79  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bfe7d  897804               mov dword ptr [eax + 4], edi
// 005bfe80  5f                   pop edi
// 005bfe81  897008               mov dword ptr [eax + 8], esi
// 005bfe84  5e                   pop esi
// 005bfe85  89580c               mov dword ptr [eax + 0xc], ebx
// 005bfe88  c70000000000         mov dword ptr [eax], 0
// 005bfe8e  5b                   pop ebx
// 005bfe8f  c20400               ret 4

struct LuaArguments {
    char pad[8];
    void* state;
    void construct(void* out);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void LuaArguments::construct(void* out) {
    char* s = reinterpret_cast<char*>(state);
    void* ebx = *reinterpret_cast<void**>(s + 0x34);
    s += 0x2c;
    if (*reinterpret_cast<unsigned int*>(s + 4) > reinterpret_cast<unsigned int>(ebx)) {
        _invalid_parameter_noinfo();
    }
    *reinterpret_cast<void**>(reinterpret_cast<char*>(out) + 4) = this;
    *reinterpret_cast<void**>(reinterpret_cast<char*>(out) + 8) = s;
    *reinterpret_cast<void**>(reinterpret_cast<char*>(out) + 0xc) = ebx;
    *reinterpret_cast<int*>(out) = 0;
}
