// from server: 100% by colin
// roc 2007-08 00405ff0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405ff0
//
// 00405ff0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00405ff4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00405ff8  8b542404             mov edx, dword ptr [esp + 4]
// 00405ffc  50                   push eax
// 00405ffd  51                   push ecx
// 00405ffe  68284e7800           push 0x784e28
// 00406003  52                   push edx
// 00406004  e897c2ffff           call 0x4022a0
// 00406009  c20c00               ret 0xc

extern "C" int __stdcall sub_4022A0(int, int, int, int);

struct S {
    int f(int, int, int);
};

int S::f(int a, int b, int c) {
    return sub_4022A0(a, 0x784e28, b, c);
}
