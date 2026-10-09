// from server: 79% by colin
// roc 2007-08 00697a10  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697a10
//
// 00697a10  8b442404             mov eax, dword ptr [esp + 4]
// 00697a14  56                   push esi
// 00697a15  8bf1                 mov esi, ecx
// 00697a17  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00697a1d  6a64                 push 0x64
// 00697a1f  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00697a25  e8a6e60500           call 0x6f60d0
// 00697a2a  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00697a30  6a65                 push 0x65
// 00697a32  e899e60500           call 0x6f60d0
// 00697a37  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 00697a3e  740b                 je 0x697a4b
// 00697a40  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00697a46  e865e70500           call 0x6f61b0
// 00697a4b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00697a52  740b                 je 0x697a5f
// 00697a54  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00697a5a  e8d1e60500           call 0x6f6130
// 00697a5f  5e                   pop esi
// 00697a60  c20400               ret 4

struct CXTPPropertyGridItem
{
    char pad[0x8c];
    unsigned int m_flags;
    char pad2[0xc8 - 0x90];
    void* m_pInplaceEdit;
    void SetValue(int);
};

extern "C" void __fastcall sub_006f60d0(void*, int, int);
extern "C" void __fastcall sub_006f61b0(void*, int);
extern "C" void __fastcall sub_006f6130(void*, int);

void CXTPPropertyGridItem::SetValue(int value)
{
    m_flags = value;
    sub_006f60d0(m_pInplaceEdit, 0, 0x64);
    sub_006f60d0(m_pInplaceEdit, 0, 0x65);
    if (m_flags & 2)
        sub_006f61b0(m_pInplaceEdit, 0);
    if (m_flags & 4)
        sub_006f6130(m_pInplaceEdit, 0);
}
