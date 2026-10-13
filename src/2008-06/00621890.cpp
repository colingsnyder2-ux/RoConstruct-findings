// from server: 55% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 liolib.c

extern "C" void luaD_realloc(void* L, int n, int osize);

namespace std {
    class __declspec(dllimport) exception {
    public:
        virtual ~exception();
    };
}

struct lua_exception : std::exception {
    void* vptr;            // 0x00
    char padding[8];       // 0x04-0x0b
    void* L;               // 0x0c
    void* field_10;        // 0x10
    char flag_14;          // 0x14
    
    virtual const char* what() const;
    virtual ~lua_exception();
};

lua_exception::~lua_exception() {
    if (flag_14) {
        if (field_10) {
            *(unsigned long*)((char*)field_10 + 8) = 0;
        }
        luaD_realloc(L, -2, 0);
    }
}