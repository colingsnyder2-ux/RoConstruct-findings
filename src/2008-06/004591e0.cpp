// from server: 100% by king_originala
// roc 2008-06 004591e0  unit: CRobloxView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004591e0
//
// 004591e0  56                   push esi
// 004591e1  57                   push edi
// 004591e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004591e6  8bf1                 mov esi, ecx
// 004591e8  8d8eb0000000         lea ecx, [esi + 0xb0]
// 004591ee  85ff                 test edi, edi
// 004591f0  7404                 je 0x4591f6
// 004591f2  6a01                 push 1
// 004591f4  eb02                 jmp 0x4591f8
// 004591f6  6a00                 push 0
// 004591f8  e8f32b2b00           call 0x70bdf0
// 004591fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00459201  50                   push eax
// 00459202  57                   push edi
// 00459203  8bce                 mov ecx, esi
// 00459205  e8c47a2400           call 0x6a0cce
// 0045920a  5f                   pop edi
// 0045920b  5e                   pop esi
// 0045920c  c20800               ret 8

struct S_func_0070bdf0 {
    void f(int);
};

struct CRobloxView {
    char pad[0xb0];
    S_func_0070bdf0 field_b0;

    void sub_6A0CCE(int, int);
    void sub_4591E0(int, int);
};

void CRobloxView::sub_4591E0(int a1, int a2)
{
    if (a1)
        field_b0.f(1);
    else
        field_b0.f(0);
    sub_6A0CCE(a1, a2);
}
