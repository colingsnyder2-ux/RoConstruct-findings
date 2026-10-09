// from server: 81% by colin
// roc 2007-08 00639d00  unit: CXTPControlAction  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639d00
//
// 00639d00  56                   push esi
// 00639d01  8b742408             mov esi, dword ptr [esp + 8]
// 00639d05  85f6                 test esi, esi
// 00639d07  57                   push edi
// 00639d08  8bf9                 mov edi, ecx
// 00639d0a  744a                 je 0x639d56
// 00639d0c  803e00               cmp byte ptr [esi], 0
// 00639d0f  7445                 je 0x639d56
// 00639d11  6a0a                 push 0xa
// 00639d13  56                   push esi
// 00639d14  ff1524e77700         call dword ptr [0x77e724]
// 00639d1a  83c408               add esp, 8
// 00639d1d  85c0                 test eax, eax
// 00639d1f  7421                 je 0x639d42
// 00639d21  6a0a                 push 0xa
// 00639d23  6a01                 push 1
// 00639d25  56                   push esi
// 00639d26  8d4744               lea eax, [edi + 0x44]
// 00639d29  50                   push eax
// 00639d2a  e889e60f00           call 0x7383b8
// 00639d2f  6a0a                 push 0xa
// 00639d31  6a00                 push 0
// 00639d33  56                   push esi
// 00639d34  83c748               add edi, 0x48
// 00639d37  57                   push edi
// 00639d38  e87be60f00           call 0x7383b8
// 00639d3d  5f                   pop edi
// 00639d3e  5e                   pop esi
// 00639d3f  c20400               ret 4
// 00639d42  56                   push esi
// 00639d43  8d4f44               lea ecx, [edi + 0x44]
// 00639d46  ff156cdd7700         call dword ptr [0x77dd6c]
// 00639d4c  50                   push eax
// 00639d4d  8d4f48               lea ecx, [edi + 0x48]
// 00639d50  ff1534d47700         call dword ptr [0x77d434]
// 00639d56  5f                   pop edi
// 00639d57  5e                   pop esi
// 00639d58  c20400               ret 4

struct CXTPControlAction {
    char pad[0x44];
    char field_44[4];
    char field_48[4];
    void func_00639d00(const char*);
};

extern "C" char* __cdecl _mbschr(const char*, int);
extern "C" int __stdcall func_007383b8(char*, int, int, const char*);
extern "C" char* __stdcall func_0077dd6c(const char*);
extern "C" int __stdcall func_0077d434(char*, const char*);

void CXTPControlAction::func_00639d00(const char* arg)
{
    if (arg != 0 && *arg != 0) {
        if (_mbschr(arg, 0x0a) != 0) {
            func_007383b8(field_44, 1, 0x0a, arg);
            func_007383b8(field_48, 0, 0x0a, arg);
        } else {
            func_0077d434(field_48, func_0077dd6c(arg));
        }
    }
}
