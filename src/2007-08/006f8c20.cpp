// from server: 74% by colin
// roc 2007-08 006f8c20  unit: CXTPPropertyGridInplaceEdit  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8c20
//
// 006f8c20  56                   push esi
// 006f8c21  57                   push edi
// 006f8c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f8c26  817f0400010000       cmp dword ptr [edi + 4], 0x100
// 006f8c2d  8bf1                 mov esi, ecx
// 006f8c2f  7514                 jne 0x6f8c45
// 006f8c31  57                   push edi
// 006f8c32  e851f70300           call 0x738388
// 006f8c37  85c0                 test eax, eax
// 006f8c39  740a                 je 0x6f8c45
// 006f8c3b  5f                   pop edi
// 006f8c3c  b801000000           mov eax, 1
// 006f8c41  5e                   pop esi
// 006f8c42  c20400               ret 4
// 006f8c45  57                   push edi
// 006f8c46  8bce                 mov ecx, esi
// 006f8c48  e853f9ffff           call 0x6f85a0
// 006f8c4d  5f                   pop edi
// 006f8c4e  5e                   pop esi
// 006f8c4f  c20400               ret 4

struct CXTPPropertyGridInplaceEdit {
    bool OnEditKeyDown(unsigned int* pMsg);
    bool sub_6f85a0(unsigned int* pMsg);
};

extern "C" int __cdecl sub_738388(unsigned int* pMsg);

bool CXTPPropertyGridInplaceEdit::OnEditKeyDown(unsigned int* pMsg)
{
    if (pMsg[1] == 0x100) {
        if (sub_738388(pMsg) != 0) {
            return true;
        }
    }
    return this->sub_6f85a0(pMsg);
}
