// from server: 66% by colin
// from server: 66% match (improved from 55%)
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /EHsc

extern "C" void luaD_realloc(void* L, int n);

namespace std {
    class __declspec(dllimport) exception {
    public:
        virtual ~exception();
    };
}

struct lua_exception : std::exception {
    char padding[8];
    void* L;
    void* field_10;
    char flag_14;
    
    virtual const char* what() const;
    virtual ~lua_exception();
};

struct Helper {
    ~Helper();
};

lua_exception::~lua_exception() {
    Helper h;
    if (flag_14) {
        if (field_10) {
            *(unsigned long*)((char*)field_10 + 8) = 0;
        }
        luaD_realloc(L, -2);
    }
}