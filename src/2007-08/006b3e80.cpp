// from server: 100% by colin
// roc 2007-08 006b3e80  unit: CXTPControlGallery  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3e80
//
// 006b3e80  56                   push esi
// 006b3e81  8bf1                 mov esi, ecx
// 006b3e83  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 006b3e8a  741f                 je 0x6b3eab
// 006b3e8c  6a01                 push 1
// 006b3e8e  6a00                 push 0
// 006b3e90  c786ec01000000000000 mov dword ptr [esi + 0x1ec], 0
// 006b3e9a  e8f1feffff           call 0x6b3d90
// 006b3e9f  8b06                 mov eax, dword ptr [esi]
// 006b3ea1  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006b3ea7  8bce                 mov ecx, esi
// 006b3ea9  ffd2                 call edx
// 006b3eab  5e                   pop esi
// 006b3eac  c20800               ret 8

struct CXTPControlGallery {
    void sub_6B3D90(int, int);
    void OnGalleryChanged(int, int);
    char pad[0x1ec];
    int m_nGallery;
};

void CXTPControlGallery::OnGalleryChanged(int, int)
{
    if (m_nGallery != 0)
    {
        m_nGallery = 0;
        sub_6B3D90(0, 1);
        (*(void (__thiscall **)(CXTPControlGallery *))(*(int *)this + 0x98))(this);
    }
}
