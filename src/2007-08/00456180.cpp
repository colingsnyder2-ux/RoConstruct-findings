// from server: 65% by colin
// roc 2007-08 00456180  unit: CRobloxView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456180
//
// 00456180  56                   push esi
// 00456181  57                   push edi
// 00456182  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00456186  85ff                 test edi, edi
// 00456188  8bf1                 mov esi, ecx
// 0045618a  8d8e88000000         lea ecx, [esi + 0x88]
// 00456190  7404                 je 0x456196
// 00456192  6a01                 push 1
// 00456194  eb02                 jmp 0x456198
// 00456196  6a00                 push 0
// 00456198  e8a3230000           call 0x458540
// 0045619d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004561a1  50                   push eax
// 004561a2  57                   push edi
// 004561a3  8bce                 mov ecx, esi
// 004561a5  e8faa01d00           call 0x6302a4
// 004561aa  5f                   pop edi
// 004561ab  5e                   pop esi
// 004561ac  c20800               ret 8

struct CRobloxView {
    char pad[0x88];
    int field88;
    void sub_458540(int);
    void sub_6302A4(int, int);
    void func(int, int);
};

void CRobloxView::func(int a, int b) {
    if (a != 0) {
        sub_458540(1);
    } else {
        sub_458540(0);
    }
    sub_6302A4(a, b);
}
