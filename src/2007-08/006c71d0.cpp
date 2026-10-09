// from server: 95% by colin
// roc 2007-08 006c71d0  unit: CXTPControlEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c71d0
//
// 006c71d0  56                   push esi
// 006c71d1  57                   push edi
// 006c71d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c71d6  57                   push edi
// 006c71d7  8bf1                 mov esi, ecx
// 006c71d9  e8724ef7ff           call 0x63c050
// 006c71de  85c0                 test eax, eax
// 006c71e0  7505                 jne 0x6c71e7
// 006c71e2  5f                   pop edi
// 006c71e3  5e                   pop esi
// 006c71e4  c20400               ret 4
// 006c71e7  85ff                 test edi, edi
// 006c71e9  750a                 jne 0x6c71f5
// 006c71eb  8b06                 mov eax, dword ptr [esi]
// 006c71ed  8b5070               mov edx, dword ptr [eax + 0x70]
// 006c71f0  57                   push edi
// 006c71f1  8bce                 mov ecx, esi
// 006c71f3  ffd2                 call edx
// 006c71f5  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 006c71fb  85c9                 test ecx, ecx
// 006c71fd  740b                 je 0x6c720a
// 006c71ff  83792000             cmp dword ptr [ecx + 0x20], 0
// 006c7203  7405                 je 0x6c720a
// 006c7205  e836faffff           call 0x6c6c40
// 006c720a  5f                   pop edi
// 006c720b  b801000000           mov eax, 1
// 006c7210  5e                   pop esi
// 006c7211  c20400               ret 4

struct CXTPControlEdit {
    char pad_0000[0x168];
    int m_field_168;
    int OnSetFocus(void* pWnd);
};

extern "C" int __stdcall sub_63C050(void* pWnd);
extern "C" void __stdcall sub_6C6C40();

int CXTPControlEdit::OnSetFocus(void* pWnd)
{
    if (sub_63C050(pWnd) == 0)
        return 0;

    if (pWnd == 0) {
        int* vtbl = *(int**)this;
        typedef void (__thiscall *Fn)(void*, void*);
        Fn f = (Fn)vtbl[0x70 / 4];
        f(this, pWnd);
    }

    int* p = (int*)m_field_168;
    if (p != 0) {
        if (p[0x20 / 4] != 0)
            sub_6C6C40();
    }

    return 1;
}
