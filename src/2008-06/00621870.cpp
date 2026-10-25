// from server: 100% by king_originala
// roc 2008-06 00621870  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621870
//
// 00621870  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00621873  6a00                 push 0
// 00621875  6aff                 push -1
// 00621877  50                   push eax
// 00621878  e89307ffff           call 0x612010
// 0062187d  83c40c               add esp, 0xc
// 00621880  c3                   ret 

extern "C" const char* __cdecl lua_tolstring(void*, int, unsigned int*);

struct lua_exception {
    char padding[12];
    void* state;
    const char* what() const;
};

const char* lua_exception::what() const {
    return lua_tolstring(state, -1, 0);
}
