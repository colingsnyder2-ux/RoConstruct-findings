// from server: 100% by tester
// roc 2008-06 00459210  unit: CRobloxView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459210
//
// 00459210  8b442404             mov eax, dword ptr [esp + 4]
// 00459214  56                   push esi
// 00459215  50                   push eax
// 00459216  8bf1                 mov esi, ecx
// 00459218  e8ad812400           call 0x6a13ca
// 0045921d  6a00                 push 0
// 0045921f  56                   push esi
// 00459220  8bce                 mov ecx, esi
// 00459222  e84d772400           call 0x6a0974
// 00459227  8bc8                 mov ecx, eax
// 00459229  e896812400           call 0x6a13c4
// 0045922e  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00459234  e8ef772400           call 0x6a0a28
// 00459239  5e                   pop esi
// 0045923a  c20400               ret 4

struct CRobloxView {
    char pad[0xb0];
    void sub_630004();
    void sub_630922(int);
    void sub_63091c();
    CRobloxView* sub_62ff50(CRobloxView*, int);
    void func(int);
};

void CRobloxView::func(int a) {
    sub_630922(a);
    CRobloxView* r = sub_62ff50(this, 0);
    r->sub_63091c();
    ((CRobloxView*)((char*)this + 0xb0))->sub_630004();
}
