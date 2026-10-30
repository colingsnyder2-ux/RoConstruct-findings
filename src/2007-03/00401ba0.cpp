// from server: 100% by tester
// roc 2007-03 00401ba0  unit: seg_00400000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00401ba0
//
// 00401ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00401ba4  85c0                 test eax, eax
// 00401ba6  7418                 je 0x401bc0
// 00401ba8  8b542408             mov edx, dword ptr [esp + 8]
// 00401bac  8b48f4               mov ecx, dword ptr [eax - 0xc]
// 00401baf  83c0f4               add eax, -0xc
// 00401bb2  52                   push edx
// 00401bb3  68e43b7800           push 0x783be4
// 00401bb8  50                   push eax
// 00401bb9  8b01                 mov eax, dword ptr [ecx]
// 00401bbb  ffd0                 call eax
// 00401bbd  c20800               ret 8
// 00401bc0  8b542408             mov edx, dword ptr [esp + 8]
// 00401bc4  33c0                 xor eax, eax
// 00401bc6  8b08                 mov ecx, dword ptr [eax]
// 00401bc8  52                   push edx
// 00401bc9  68e43b7800           push 0x783be4
// 00401bce  50                   push eax
// 00401bcf  8b01                 mov eax, dword ptr [ecx]
// 00401bd1  ffd0                 call eax
// 00401bd3  c20800               ret 8

struct S {
    void method_401ba0(int, int);
};

void S::method_401ba0(int a, int b) {
    int* p;
    if (a != 0) {
        p = (int*)(a - 0xc);
    } else {
        p = 0;
    }
    int* vt = (int*)*p;
    void (__stdcall *fn)(int*, void*, int) = (void (__stdcall *)(int*, void*, int))vt[0];
    fn(p, (void*)0x783be4, b);
}
