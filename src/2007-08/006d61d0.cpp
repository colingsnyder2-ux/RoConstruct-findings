// from server: 76% by colin
// roc 2007-08 006d61d0  unit: CXTPReportGroupRow_Batch  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d61d0
//
// 006d61d0  53                   push ebx
// 006d61d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006d61d5  55                   push ebp
// 006d61d6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006d61da  56                   push esi
// 006d61db  53                   push ebx
// 006d61dc  8bf1                 mov esi, ecx
// 006d61de  55                   push ebp
// 006d61df  8d463c               lea eax, [esi + 0x3c]
// 006d61e2  50                   push eax
// 006d61e3  ff1594ed7700         call dword ptr [0x77ed94]
// 006d61e9  85c0                 test eax, eax
// 006d61eb  751a                 jne 0x6d6207
// 006d61ed  57                   push edi
// 006d61ee  8b3e                 mov edi, dword ptr [esi]
// 006d61f0  8b5778               mov edx, dword ptr [edi + 0x78]
// 006d61f3  8bce                 mov ecx, esi
// 006d61f5  ffd2                 call edx
// 006d61f7  f7d8                 neg eax
// 006d61f9  1bc0                 sbb eax, eax
// 006d61fb  83c001               add eax, 1
// 006d61fe  50                   push eax
// 006d61ff  8b477c               mov eax, dword ptr [edi + 0x7c]
// 006d6202  8bce                 mov ecx, esi
// 006d6204  ffd0                 call eax
// 006d6206  5f                   pop edi
// 006d6207  53                   push ebx
// 006d6208  55                   push ebp
// 006d6209  8bce                 mov ecx, esi
// 006d620b  e860ebffff           call 0x6d4d70
// 006d6210  5e                   pop esi
// 006d6211  5d                   pop ebp
// 006d6212  5b                   pop ebx
// 006d6213  c20800               ret 8

struct CXTPReportGroupRow_Batch {
    int field0;
    char pad[0x38];
    int field3c;
    int method1();
    int method2(int);
    int method3(int, int);
    int method4(int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);

int CXTPReportGroupRow_Batch::method4(int a, int b) {
    if (PtInRect(&field3c, a, b) == 0) {
        int (*fn1)(void) = *(int (**)(void))((*(int*)this) + 0x78);
        int (*fn2)(int) = *(int (**)(int))((*(int*)this) + 0x7c);
        int v = fn1();
        int flag = (v == 0) ? 1 : 0;
        fn2(flag);
    }
    return method3(a, b);
}
