// roc 2007-03 0069ffd0  unit: seg_00690000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069ffd0
//
// 0069ffd0  56                   push esi
// 0069ffd1  8bf1                 mov esi, ecx
// 0069ffd3  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 0069ffda  741f                 je 0x69fffb
// 0069ffdc  6a01                 push 1
// 0069ffde  6a00                 push 0
// 0069ffe0  c786ec01000000000000 mov dword ptr [esi + 0x1ec], 0
// 0069ffea  e851ffffff           call 0x69ff40
// 0069ffef  8b06                 mov eax, dword ptr [esi]
// 0069fff1  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0069fff7  8bce                 mov ecx, esi
// 0069fff9  ffd2                 call edx
// 0069fffb  5e                   pop esi
// 0069fffc  c20800               ret 8
// copied from an identical function in another client (function ?OnGalleryChanged@CXTPControlGallery@ns_ROCX000002@@QAEXHH@Z)

namespace ns_ROCX000002 {
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
}
