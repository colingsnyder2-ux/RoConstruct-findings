// from server: 85% by colin
struct CXTPControlAction {
    char pad[0x44];
    char field_44[4];
    char field_48[4];
    void func_00639d00(const char*);
};

extern "C" char* __cdecl _mbschr(const char*, int);
extern "C" int __stdcall func_007383b8(char*, int, int, const char*);
extern "C" char* __stdcall func_0077dd6c(char*);
extern "C" int __stdcall func_0077d434(char*, const char*);

void CXTPControlAction::func_00639d00(const char* arg)
{
    if (arg != 0 && *arg != 0) {
        if (_mbschr(arg, 0x0a) != 0) {
            func_007383b8(field_44, 1, 0x0a, arg);
            func_007383b8(field_48, 0, 0x0a, arg);
        } else {
            func_0077d434(field_48, func_0077dd6c(field_44));
        }
    }
}
