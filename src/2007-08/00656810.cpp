// from server: 100% by colin
// roc 2007-08 00656810  unit: CXTPReportRow_Batch  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656810
//
// 00656810  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 00656816  33c9                 xor ecx, ecx
// 00656818  394834               cmp dword ptr [eax + 0x34], ecx
// 0065681b  0f95c1               setne cl
// 0065681e  8bc1                 mov eax, ecx
// 00656820  c3                   ret 

struct Inner {
    char pad[0x34];
    int value;
};

struct Outer {
    char pad[0xa8];
    Inner* ptr;
    int func();
};

int Outer::func() {
    return ptr->value != 0;
}
