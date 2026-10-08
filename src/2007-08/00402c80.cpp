// from server: 81% by colin
// roc 2007-08 00402c80  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402c80
//
// 00402c80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00402c84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00402c88  8b542404             mov edx, dword ptr [esp + 4]
// 00402c8c  50                   push eax
// 00402c8d  51                   push ecx
// 00402c8e  68884b7800           push 0x784b88
// 00402c93  52                   push edx
// 00402c94  e807f6ffff           call 0x4022a0
// 00402c99  c20c00               ret 0xc

struct S {
    void f(int a, int b, int c);
};

extern "C" void __cdecl helper(int, int, int);

void S::f(int a, int b, int c)
{
    helper(a, b, c);
}
