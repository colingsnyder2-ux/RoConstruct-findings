// from server: 72% by colin
extern "C" {
int __cdecl _errno();
char* __cdecl strerror(int);
void* __cdecl fopen(const char*, const char*);
}

extern int __stdcall sub_5bd770(int, int);
extern int __stdcall sub_5bdea0(int, int, int);
extern int __stdcall sub_5c8450(int);
extern int __stdcall sub_5bf350(int, int, int);
extern int __stdcall sub_5be5b0(int, int);
extern int __stdcall sub_5bde00(int, int, int);
extern int __stdcall sub_5be160(int, int);
extern int __stdcall sub_5bdc90(int, int, int, int);
extern int __stdcall sub_5bd980(int, int, int);
extern int __stdcall sub_5bf180(int, int, int);
extern int __stdcall sub_5bd580(int);
extern int __stdcall sub_5bd740(int, int);
extern int __stdcall sub_5bdd60(int, int);
extern int __stdcall sub_5bdcc0(int, int, int);
extern int __stdcall sub_5c7dc0(int, int);

struct lua_exception {
    int f(int);
};

int lua_exception::f(int a) {
    int* p;
    int r;
    if (sub_5bd770(a, 1) <= 0) {
        sub_5bdea0(a, -10001, 1);
        sub_5c8450(a);
        return 0;
    }
    r = sub_5bf350(a, 1, 0);
    p = (int*)sub_5be5b0(a, 4);
    *p = 0;
    sub_5bde00(a, -10000, (int)"HD;H@Wr");
    sub_5be160(a, -2);
    *p = (int)fopen((const char*)r, (const char*)"HD;H@r");
    if (*p == 0) {
        sub_5bdc90(a, (int)"%s: %s", r, (int)strerror(_errno()));
        sub_5bf180(a, 1, sub_5bd980(a, -1, 0));
    }
    sub_5bd740(a, sub_5bd580(a));
    sub_5bdd60(a, 1);
    sub_5bdcc0(a, (int)sub_5c7dc0, 2);
    return 1;
}
