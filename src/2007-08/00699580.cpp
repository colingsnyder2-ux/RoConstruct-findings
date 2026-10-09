// from server: 100% by colin
// roc 2007-08 00699580  unit: CXTPPropertyGridItem  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699580
//
// 00699580  53                   push ebx
// 00699581  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00699585  56                   push esi
// 00699586  57                   push edi
// 00699587  53                   push ebx
// 00699588  8bf9                 mov edi, ecx
// 0069958a  e831ffffff           call 0x6994c0
// 0069958f  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00699595  e8a6b7f1ff           call 0x5b4d40
// 0069959a  8bf0                 mov esi, eax
// 0069959c  83ee01               sub esi, 1
// 0069959f  781e                 js 0x6995bf
// 006995a1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 006995a7  56                   push esi
// 006995a8  e8e3db0500           call 0x6f7190
// 006995ad  8b10                 mov edx, dword ptr [eax]
// 006995af  8bc8                 mov ecx, eax
// 006995b1  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006995b7  53                   push ebx
// 006995b8  ffd0                 call eax
// 006995ba  83ee01               sub esi, 1
// 006995bd  79e2                 jns 0x6995a1
// 006995bf  5f                   pop edi
// 006995c0  5e                   pop esi
// 006995c1  8bc3                 mov eax, ebx
// 006995c3  5b                   pop ebx
// 006995c4  c20400               ret 4

struct CXTPPropertyGridItem
{
    void sub_6994C0(CXTPPropertyGridItem*);
    int sub_5B4D40();
    void* sub_6F7190(int);
    CXTPPropertyGridItem* sub_699580(CXTPPropertyGridItem*);
    char pad[0xcc];
    void* m_pItems;
};

CXTPPropertyGridItem* CXTPPropertyGridItem::sub_699580(CXTPPropertyGridItem* param)
{
    sub_6994C0(param);
    int count = ((CXTPPropertyGridItem*)m_pItems)->sub_5B4D40();
    int i = count - 1;
    if (i >= 0)
    {
        do
        {
            void* item = ((CXTPPropertyGridItem*)m_pItems)->sub_6F7190(i);
            void** vtbl = *(void***)item;
            void (__thiscall *fn)(void*, CXTPPropertyGridItem*) = (void (__thiscall *)(void*, CXTPPropertyGridItem*))vtbl[0x144 / 4];
            fn(item, param);
            i--;
        } while (i >= 0);
    }
    return param;
}
