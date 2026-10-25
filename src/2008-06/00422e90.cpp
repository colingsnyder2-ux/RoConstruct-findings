// from server: 100% by king_originala
// roc 2008-06 00422e90  unit: CRobloxTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422e90
//
// 00422e90  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00422e93  56                   push esi
// 00422e94  8b35142e8000         mov esi, dword ptr [0x802e14]
// 00422e9a  6a00                 push 0
// 00422e9c  6a00                 push 0
// 00422e9e  680f110000           push 0x110f
// 00422ea3  50                   push eax
// 00422ea4  ffd6                 call esi
// 00422ea6  50                   push eax
// 00422ea7  e832dd2700           call 0x6a0bde
// 00422eac  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00422eaf  6a00                 push 0
// 00422eb1  6a20                 push 0x20
// 00422eb3  68c5000000           push 0xc5
// 00422eb8  51                   push ecx
// 00422eb9  ffd6                 call esi
// 00422ebb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00422ebf  c70200000000         mov dword ptr [edx], 0
// 00422ec5  5e                   pop esi
// 00422ec6  c20800               ret 8

struct S {
    char padding[32];
    void* handle;
    void f(void* unused, long* result);
};

extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);
extern "C" S* __stdcall FromHandle(void*);

void S::f(void* unused, long* result)
{
    long (__stdcall *send)(void*, unsigned int, unsigned int, long) = SendMessageA;
    S* control = FromHandle((void*)send(handle, 0x110F, 0, 0));
    send(control->handle, 0xC5, 0x20, 0);
    *result = 0;
}
