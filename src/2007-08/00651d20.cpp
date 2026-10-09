// from server: 93% by colin
// roc 2007-08 00651d20  unit: CRobloxReportView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651d20
//
// 00651d20  53                   push ebx
// 00651d21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00651d25  55                   push ebp
// 00651d26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00651d2a  56                   push esi
// 00651d2b  8bf1                 mov esi, ecx
// 00651d2d  8b86b8020000         mov eax, dword ptr [esi + 0x2b8]
// 00651d33  85c0                 test eax, eax
// 00651d35  57                   push edi
// 00651d36  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00651d3a  7419                 je 0x651d55
// 00651d3c  3be8                 cmp ebp, eax
// 00651d3e  7515                 jne 0x651d55
// 00651d40  8b06                 mov eax, dword ptr [esi]
// 00651d42  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651d48  6a00                 push 0
// 00651d4a  57                   push edi
// 00651d4b  53                   push ebx
// 00651d4c  ffd2                 call edx
// 00651d4e  8bc8                 mov ecx, eax
// 00651d50  e8cb450000           call 0x656320
// 00651d55  55                   push ebp
// 00651d56  57                   push edi
// 00651d57  53                   push ebx
// 00651d58  8bce                 mov ecx, esi
// 00651d5a  e855670e00           call 0x7384b4
// 00651d5f  5f                   pop edi
// 00651d60  5e                   pop esi
// 00651d61  5d                   pop ebp
// 00651d62  5b                   pop ebx
// 00651d63  c20c00               ret 0xc

struct CRobloxReportView {
    char pad[0x2b8];
    int field_2b8;
    void Method(int a, int b, int c);
};

struct CRobloxReportViewVtbl {
    char pad[0x18c];
    void* (__stdcall* fn_18c)(int, int, int);
};

void __fastcall sub_656320(void* p);
void __fastcall sub_7384b4(CRobloxReportView* self, int a, int b, int c);

void CRobloxReportView::Method(int a, int b, int c)
{
    if (field_2b8 != 0 && c == field_2b8)
    {
        CRobloxReportViewVtbl* vtbl = *(CRobloxReportViewVtbl**)this;
        void* r = vtbl->fn_18c(a, b, 0);
        sub_656320(r);
    }
    sub_7384b4(this, a, b, c);
}
