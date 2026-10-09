// from server: 65% by colin
// roc 2007-08 006f6380  unit: CXTPPropertyGridInplaceEdit  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6380
//
// 006f6380  56                   push esi
// 006f6381  8bf1                 mov esi, ecx
// 006f6383  8d8e8c000000         lea ecx, [esi + 0x8c]
// 006f6389  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 006f6393  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 006f639d  ff1558d57700         call dword ptr [0x77d558]
// 006f63a3  8d8e90000000         lea ecx, [esi + 0x90]
// 006f63a9  e87e9ef3ff           call 0x63022c
// 006f63ae  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f63b1  50                   push eax
// 006f63b2  ff15bced7700         call dword ptr [0x77edbc]
// 006f63b8  85c0                 test eax, eax
// 006f63ba  7409                 je 0x6f63c5
// 006f63bc  6a00                 push 0
// 006f63be  8bce                 mov ecx, esi
// 006f63c0  e8859bf3ff           call 0x62ff4a
// 006f63c5  5e                   pop esi
// 006f63c6  c3                   ret 

struct CXTPPropertyGridInplaceEdit {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0x8c - 0x24];
    int m_field8c;
    int m_field90;
    int m_field94;
    int m_field98;
    int m_field9c;
    int m_fielda0;
    void OnFocus();
};

extern "C" int __stdcall IsWindow(void*);
extern "C" void __stdcall sub_77d558();
extern "C" void __stdcall sub_63022c();
extern "C" void __stdcall sub_62ff4a(int);

void CXTPPropertyGridInplaceEdit::OnFocus()
{
    m_fielda0 = 0;
    m_field9c = 0;
    sub_77d558();
    sub_63022c();
    if (IsWindow(m_hWnd))
        sub_62ff4a(0);
}
