// from server: 66% by colin
// roc 2007-08 0065f5e0  unit: CXTPReportHeader  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065f5e0
//
// 0065f5e0  8b542404             mov edx, dword ptr [esp + 4]
// 0065f5e4  56                   push esi
// 0065f5e5  8bf1                 mov esi, ecx
// 0065f5e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f5eb  8b06                 mov eax, dword ptr [esi]
// 0065f5ed  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 0065f5f3  51                   push ecx
// 0065f5f4  52                   push edx
// 0065f5f5  8bce                 mov ecx, esi
// 0065f5f7  ffd0                 call eax
// 0065f5f9  85c0                 test eax, eax
// 0065f5fb  7c16                 jl 0x65f613
// 0065f5fd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0065f600  85c9                 test ecx, ecx
// 0065f602  740f                 je 0x65f613
// 0065f604  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0065f607  7d0a                 jge 0x65f613
// 0065f609  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0065f60c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0065f60f  5e                   pop esi
// 0065f610  c20800               ret 8
// 0065f613  33c0                 xor eax, eax
// 0065f615  5e                   pop esi
// 0065f616  c20800               ret 8

struct CXTPReportHeader {
    int m_nCount;
    int m_pArray;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int GetIndex(int, int);
};

int CXTPReportHeader::GetIndex(int a, int b)
{
    void **vtable = *(void ***)this;
    int result = ((int (__thiscall *)(CXTPReportHeader *, int, int))vtable[0x8c / 4])(this, a, b);
    if (result < 0)
        goto fail;
    {
        int p = *(int *)((char *)this + 0x20);
        if (p == 0)
            goto fail;
        if (result >= *(int *)(p + 0x30))
            goto fail;
        return *(int *)(*(int *)(p + 0x2c) + result * 4);
    }
fail:
    return 0;
}
