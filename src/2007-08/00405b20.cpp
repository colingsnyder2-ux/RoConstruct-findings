// from server: 96% by colin
// roc 2007-08 00405b20  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405b20
//
// 00405b20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00405b24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00405b28  8b542404             mov edx, dword ptr [esp + 4]
// 00405b2c  50                   push eax
// 00405b2d  51                   push ecx
// 00405b2e  68c84f7800           push 0x784fc8
// 00405b33  52                   push edx
// 00405b34  e867c7ffff           call 0x4022a0
// 00405b39  c20c00               ret 0xc

struct S {
    void f(int a, int b, int c);
};

extern "C" void __stdcall helper(int a, int b, const void* p, int c);

void S::f(int a, int b, int c)
{
    helper(a, b, (const void*)0x784fc8, c);
}
