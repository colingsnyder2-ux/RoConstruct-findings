// from server: 52% by colin
// roc 2007-08 00644720  unit: CXTPCommandBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644720
//
// 00644720  8b542404             mov edx, dword ptr [esp + 4]
// 00644724  85d2                 test edx, edx
// 00644726  7c1d                 jl 0x644745
// 00644728  e8e3ffffff           call 0x644710
// 0064472d  3bd0                 cmp edx, eax
// 0064472f  7d14                 jge 0x644745
// 00644731  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00644737  3b502c               cmp edx, dword ptr [eax + 0x2c]
// 0064473a  7d09                 jge 0x644745
// 0064473c  8b4028               mov eax, dword ptr [eax + 0x28]
// 0064473f  8b0490               mov eax, dword ptr [eax + edx*4]
// 00644742  c20400               ret 4
// 00644745  33c0                 xor eax, eax
// 00644747  c20400               ret 4

struct CXTPCommandBar
{
    int GetCount();
    int GetAt(int nIndex);
};

int CXTPCommandBar::GetAt(int nIndex)
{
    if (nIndex < 0)
        goto fail;
    if (nIndex >= GetCount())
        goto fail;
    {
        int* pArray = *(int**)((char*)this + 0xf8);
        if (nIndex >= pArray[0x2c / 4])
            goto fail;
        int* pItems = (int*)pArray[0x28 / 4];
        return pItems[nIndex];
    }
fail:
    return 0;
}
