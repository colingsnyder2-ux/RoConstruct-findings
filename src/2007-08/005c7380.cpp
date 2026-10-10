// from server: 77% by tester
extern "C" __declspec(dllimport) int* __stdcall _errno();
extern "C" __declspec(dllimport) char* __stdcall strerror(int);

extern "C" int __cdecl sub_5bdc90(int, const char*, char*, int);
extern "C" int __cdecl sub_5bd980(int, int, int);
extern "C" int __cdecl sub_5bf180(int, int, int);

struct lua_exception {
};

int __cdecl method(int a, int b)
{
    int err = *_errno();
    char* msg = strerror(err);
    sub_5bdc90(0, "%s: %s", msg, a);
    int r = sub_5bd980(0, -1, 0);
    return sub_5bf180(0, b, r);
}
