// from server: 55% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 liolib.c

struct lua_State;

extern "C" void luaD_realloc(void* L, int n, int osize); // 0x611c20

// MSVCR90.dll std::exception::~exception() - thiscall (ecx = this)
extern "C" void __thiscall std_exception_dtor(void* thisptr);

struct lua_exception {
    void* vptr;            // 0x00 - vtable pointer
    char padding[8];       // 0x04-0x0b
    lua_State* L;          // 0x0c
    void* field_10;        // 0x10
    char flag_14;          // 0x14
    
    virtual const char* what() const;
    virtual ~lua_exception();
};

lua_exception::~lua_exception() {
    // vtable already set by constructor
    if (flag_14) {
        if (field_10) {
            *(unsigned long*)((char*)field_10 + 8) = 0;
        }
        luaD_realloc(L, -2, 0); // shrink/cleanup
    }
    std_exception_dtor(this);
}