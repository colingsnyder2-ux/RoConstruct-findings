// from server: 6% by colin
// roc 2007-08 00618330  unit: seg_00610000  size: 1728 bytes
// lua-5.1.4/llex.c (function llex)

extern "C" {
int __cdecl isalpha(int);
int __cdecl isdigit(int);
int __cdecl isspace(int);
int __cdecl isalnum(int);
char* __cdecl strchr(const char*, int);
}

struct LexState;

struct ZIO {
    int n;
    char* p;
};

struct Mbuffer {
    char* buffer;
    int n;
    int buffsize;
};

struct lua_State;

struct LexState {
    int current;
    int linenumber;
    int lastline;
    void* fs;
    void* L;
    ZIO* z;
    Mbuffer* buff;
    void* h;
    int f();

    int f2();
};

int LexState::f()
{
    int c;
    for (;;) {
        c = this->current;
        if ((unsigned)(c + 1) > 0x7f) {
            if (isalpha(c)) {
                goto read_next;
            }
            if (isdigit(c)) {
                goto read_next;
            }
            if (c == '_') {
                goto read_next;
            }
            if (isspace(c)) {
                goto read_next;
            }
            if (c == -1) {
                return 0x11f;
            }
            if (c == 0x2d) {
                goto read_next;
            }
            if (c == 0x5b) {
                goto read_next;
            }
            if (c == 0x3d) {
                goto read_next;
            }
            if (c == 0x3c) {
                goto read_next;
            }
            if (c == 0x3e) {
                goto read_next;
            }
            if (c == 0x7e) {
                goto read_next;
            }
            return c;
        }
        switch (c) {
        case 0x0a:
        case 0x0d:
            goto read_next;
        case 0x2d:
            goto read_next;
        case 0x5b:
            goto read_next;
        case 0x3d:
            goto read_next;
        case 0x3c:
            goto read_next;
        case 0x3e:
            goto read_next;
        case 0x7e:
            goto read_next;
        default:
            return c;
        }
    read_next:
        {
            ZIO* z = this->z;
            int n = z->n;
            z->n = n - 1;
            if (n > 0) {
                c = (unsigned char)*z->p;
                z->p = z->p + 1;
            } else {
                c = 0;
            }
        }
        this->current = c;
    }
}

int LexState::f2()
{
    return 0;
}
