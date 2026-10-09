// from server: 86% by colin
// roc 2007-08 006983c0  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006983c0
//
// 006983c0  56                   push esi
// 006983c1  8bf1                 mov esi, ecx
// 006983c3  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 006983ca  744b                 je 0x698417
// 006983cc  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006983d2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 006983d9  7524                 jne 0x6983ff
// 006983db  85c9                 test ecx, ecx
// 006983dd  7420                 je 0x6983ff
// 006983df  83792000             cmp dword ptr [ecx + 0x20], 0
// 006983e3  741a                 je 0x6983ff
// 006983e5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 006983ec  7411                 je 0x6983ff
// 006983ee  56                   push esi
// 006983ef  e88c370000           call 0x69bb80
// 006983f4  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006983fa  e8e13d0000           call 0x69c1e0
// 006983ff  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00698405  56                   push esi
// 00698406  6a07                 push 7
// 00698408  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00698412  e8d9260000           call 0x69aaf0
// 00698417  5e                   pop esi
// 00698418  c3                   ret 

struct CXTPPropertyGridItem
{
    void OnUpdate();
};

struct CXTPPropertyGridItem_Helper
{
    void sub_69BB80(CXTPPropertyGridItem*);
    void sub_69C1E0();
    void sub_69AAF0(CXTPPropertyGridItem*, int);
};

void CXTPPropertyGridItem::OnUpdate()
{
    if (*(int*)((char*)this + 0x9c) != 0)
    {
        CXTPPropertyGridItem_Helper* helper = *(CXTPPropertyGridItem_Helper**)((char*)this + 0xb4);
        if (*(int*)((char*)helper + 0x148) == 0)
        {
            if (helper != 0)
            {
                if (*(int*)((char*)helper + 0x20) != 0)
                {
                    if (*(int*)((char*)this + 0x94) != 0)
                    {
                        helper->sub_69BB80(this);
                        helper = *(CXTPPropertyGridItem_Helper**)((char*)this + 0xb4);
                        helper->sub_69C1E0();
                    }
                }
            }
        }
        helper = *(CXTPPropertyGridItem_Helper**)((char*)this + 0xb4);
        *(int*)((char*)this + 0x9c) = 0;
        helper->sub_69AAF0(this, 7);
    }
}
