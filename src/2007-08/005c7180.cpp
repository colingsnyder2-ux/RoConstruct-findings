// from server: 46% by colin
// roc 2007-08 005c7180  unit: lua_exception  size: 167 bytes
// library lua-5.1.4/lparser.c (function _luaX_lex)

extern "C" char* __cdecl strchr(const char*, int);

struct LexState;

struct Mbuffer {
    char* buffer;
    char* p;
    char* buffer_end;
};

struct Token {
    int token;
    int seminfo;
};

struct FuncState;

struct LexState {
    int current;
    int linenumber;
    int lastline;
    Token t;
    Token lookahead;
    Mbuffer buff;
    void* fs;
    void* L;
    void* z;
    void* source;
    int envn;
    void* env;
};

struct Zio;

struct lua_State;

struct expdesc {
    int k;
    int u;
    int t;
    int f;
};

struct FuncState {
    void* f;
    void* prev;
    void* ls;
    void* bl;
    int pc;
    int lasttarget;
    int nk;
    int np;
    int nlocvars;
    int nactvar;
    int nups;
    int freereg;
    void* k;
    void* proto;
    void* upvalues;
    void* h;
    void* f_2;
    int nk_2;
};

struct LexState2 {
    int current;
    int linenumber;
    int lastline;
    Token t;
    Token lookahead;
    Mbuffer buff;
    FuncState* fs;
    lua_State* L;
    Zio* z;
    void* source;
    int envn;
    void* env;
};

extern "C" int __cdecl luaX_lex(LexState2* ls, Token* token);

int __fastcall luaX_lex_impl(LexState2* ls, Token* token)
{
    int c;
    int t;
    int token_val;
    int result;

    c = ls->current;
    token_val = 0;
    t = 0;

    if (*(char*)&c == 0x3e) {
        token_val = *(int*)((char*)ls->buff.p - 0x10);
        ls->current = (int)((char*)ls->current + 1);
        ls->buff.p = (char*)ls->buff.p - 0x10;
    } else {
        if (ls->fs->nactvar != 0) {
            int idx = ls->fs->nactvar * 3;
            int* p = (int*)((char*)ls->fs->h + idx * 8);
            token_val = *(int*)p;
            t = (int)((char*)ls->fs->h + idx * 8);
        }
    }

    result = luaX_lex(ls, token);

    if (strchr((char*)&c, 0x66) != 0) {
        if (token_val == 0) {
            *(int*)((char*)ls->buff.p + 8) = token_val;
        } else {
            *(int*)ls->buff.p = token_val;
            *(int*)((char*)ls->buff.p + 8) = 6;
        }
        if ((int)((char*)ls->buff.buffer_end - (char*)ls->buff.p) <= 0x10) {
            luaX_lex(ls, token);
        }
        ls->buff.p = (char*)ls->buff.p + 0x10;
    }

    if (strchr((char*)&c, 0x4c) != 0) {
        luaX_lex(ls, token);
    }

    return result;
}
