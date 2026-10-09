// from server: 100% by colin
// roc 2007-08 006b3d90  unit: CXTPControlGalleryPaintManager  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3d90
//
// 006b3d90  8b442404             mov eax, dword ptr [esp + 4]
// 006b3d94  83ec10               sub esp, 0x10
// 006b3d97  85c0                 test eax, eax
// 006b3d99  752a                 jne 0x6b3dc5
// 006b3d9b  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006b3da1  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006b3da7  890424               mov dword ptr [esp], eax
// 006b3daa  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006b3db0  89542404             mov dword ptr [esp + 4], edx
// 006b3db4  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 006b3dba  89442408             mov dword ptr [esp + 8], eax
// 006b3dbe  8954240c             mov dword ptr [esp + 0xc], edx
// 006b3dc2  8d0424               lea eax, [esp]
// 006b3dc5  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006b3dcb  8b11                 mov edx, dword ptr [ecx]
// 006b3dcd  56                   push esi
// 006b3dce  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006b3dd2  56                   push esi
// 006b3dd3  50                   push eax
// 006b3dd4  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 006b3dda  ffd0                 call eax
// 006b3ddc  5e                   pop esi
// 006b3ddd  83c410               add esp, 0x10
// 006b3de0  c20800               ret 8

struct CXTPControlGalleryPaintManager
{
    char pad[0xc0];
    int m_0xc0;
    int m_0xc4;
    int m_0xc8;
    int m_0xcc;
    char pad2[0xfc - 0xd0];
    void* m_0xfc;

    void func(int a, int b);
};

void CXTPControlGalleryPaintManager::func(int a, int b)
{
    int local[4];
    int* p;
    if (a == 0)
    {
        local[0] = m_0xc0;
        local[1] = m_0xc4;
        local[2] = m_0xc8;
        local[3] = m_0xcc;
        p = local;
    }
    else
    {
        p = (int*)a;
    }
    void** vtbl = *(void***)m_0xfc;
    typedef void (__thiscall *Fn)(void*, int*, int);
    Fn fn = (Fn)vtbl[0x19c / 4];
    fn(m_0xfc, p, b);
}
