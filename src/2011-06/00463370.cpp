// from server: 88% by atomic.potato
// roc 2011-06 00463370  unit: VCRoblox3D::?$CComObject  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00463370
//
// 00463370  8a81b2000000         mov al, byte ptr [ecx + 0xb2]
// 00463376  84c0                 test al, al
// 00463378  750f                 jne 0x463389
// 0046337a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046337e  c70100000000         mov dword ptr [ecx], 0
// 00463384  33c0                 xor eax, eax
// 00463386  c21000               ret 0x10
// 00463389  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046338d  c70200000000         mov dword ptr [edx], 0
// 00463393  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 00463399  85c9                 test ecx, ecx
// 0046339b  7407                 je 0x4633a4
// 0046339d  6a00                 push 0
// 0046339f  e88c2d0300           call 0x496130
// 004633a4  33c0                 xor eax, eax
// 004633a6  c21000               ret 0x10

struct SInner_00463370 {
    void release(int);
};

struct S_func_00463370 {
    unsigned char _pad0[0xb2];
    unsigned char flag;
    unsigned char _pad1[0x59];
    SInner_00463370* inner;
    int f(int a1, int a2, int a3, int* a4);
};

int S_func_00463370::f(int a1, int a2, int a3, int* a4)
{
    if (flag == 0) {
        *a4 = 0;
        return 0;
    }
    *a4 = 0;
    SInner_00463370* p = inner;
    if (p != 0) {
        p->release(0);
    }
    return 0;
}
