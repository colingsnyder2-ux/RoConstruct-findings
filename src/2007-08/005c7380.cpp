// from server: 74% by colin
// roc 2007-08 005c7380  unit: lua_exception  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7380
//
// 005c7380  ff1550e87700         call dword ptr [0x77e850]
// 005c7386  8b00                 mov eax, dword ptr [eax]
// 005c7388  50                   push eax
// 005c7389  ff1540e87700         call dword ptr [0x77e840]
// 005c738f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7393  50                   push eax
// 005c7394  51                   push ecx
// 005c7395  6830997b00           push 0x7b9930
// 005c739a  56                   push esi
// 005c739b  e8f068ffff           call 0x5bdc90
// 005c73a0  6a00                 push 0
// 005c73a2  6aff                 push -1
// 005c73a4  56                   push esi
// 005c73a5  e8d665ffff           call 0x5bd980
// 005c73aa  8b542424             mov edx, dword ptr [esp + 0x24]
// 005c73ae  50                   push eax
// 005c73af  52                   push edx
// 005c73b0  56                   push esi
// 005c73b1  e8ca7dffff           call 0x5bf180
// 005c73b6  83c42c               add esp, 0x2c
// 005c73b9  c3                   ret 

extern "C" __declspec(dllimport) int* __stdcall _errno();
extern "C" __declspec(dllimport) char* __stdcall strerror(int);

extern "C" int __cdecl sub_5bdc90(int, const char*, char*, int);
extern "C" int __cdecl sub_5bd980(int, int, int);
extern "C" int __cdecl sub_5bf180(int, int, int);

struct lua_exception {
    int method(int a, int b);
};

int lua_exception::method(int a, int b)
{
    int err = *_errno();
    char* msg = strerror(err);
    sub_5bdc90(0, "%s: %s", msg, a);
    int r = sub_5bd980(0, -1, 0);
    return sub_5bf180(0, b, r);
}
