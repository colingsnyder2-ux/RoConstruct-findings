// from server: 81% by colin
// roc 2007-08 006b38a0  unit: CXTPControlGallery  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b38a0
//
// 006b38a0  8b8124ffffff         mov eax, dword ptr [ecx - 0xdc]
// 006b38a6  83f8ff               cmp eax, -1
// 006b38a9  750c                 jne 0x6b38b7
// 006b38ab  8b49e0               mov ecx, dword ptr [ecx - 0x20]
// 006b38ae  85c9                 test ecx, ecx
// 006b38b0  7405                 je 0x6b38b7
// 006b38b2  e9c96cf8ff           jmp 0x63a580
// 006b38b7  c3                   ret 

struct CXTPControlGallery
{
    int GetSelected();
};

extern int __stdcall sub_63a580(int);

int CXTPControlGallery::GetSelected()
{
    int result = *(int *)((char *)this - 0xdc);
    if (result == -1)
    {
        int p = *(int *)((char *)this - 0x20);
        if (p != 0)
        {
            return sub_63a580(p);
        }
    }
    return result;
}
