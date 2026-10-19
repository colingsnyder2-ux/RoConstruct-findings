// from server: 61% by colin
// from server: 59% by colin
// roc 2008-06 0049fd90  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$TSignalDesc::TSignalInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049fd90
//
// 0049fd90  6aff                 push -1
// 0049fd92  682b787c00           push 0x7c782b
// 0049fd97  64a100000000         mov eax, dword ptr fs:[0]
// 0049fd9d  50                   push eax
// 0049fd9e  64892500000000       mov dword ptr fs:[0], esp
// 0049fda5  51                   push ecx
// 0049fda6  83ec1c               sub esp, 0x1c
// 0049fda9  8d442454             lea eax, [esp + 0x54]
// 0049fdad  8bcc                 mov ecx, esp
// 0049fdaf  8964241c             mov dword ptr [esp + 0x1c], esp
// 0049fdb3  50                   push eax
// 0049fdb4  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0049fdbc  ff155c248000         call dword ptr [0x80245c]
// 0049fdc2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0049fdc6  51                   push ecx
// 0049fdc7  83ec1c               sub esp, 0x1c
// 0049fdca  8d542454             lea edx, [esp + 0x54]



#include <string>
typedef std::string String;
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall string_copy_ctor(String*, const String*);
extern "C" void __stdcall string_dtor(String*);

struct S {
    void __cdecl f(String* a, String* b);
};

void S::f(String* a, String* b)
{
    String tmp1(*a);
    String tmp2(*b);
    operator_new(4);
    tmp2.~String();
    tmp1.~String();
}
