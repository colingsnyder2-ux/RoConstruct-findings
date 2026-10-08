// from server: 71% by colin
// roc 2007-08 0067a2d0  unit: CXTPControlComboBoxGalleryPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a2d0
//
// 0067a2d0  56                   push esi
// 0067a2d1  8bf1                 mov esi, ecx
// 0067a2d3  e8b8feffff           call 0x67a190
// 0067a2d8  c70604d67c00         mov dword ptr [esi], 0x7cd604
// 0067a2de  c74654f4d57c00       mov dword ptr [esi + 0x54], 0x7cd5f4
// 0067a2e5  c7465c94d57c00       mov dword ptr [esi + 0x5c], 0x7cd594
// 0067a2ec  c786f400000001000000 mov dword ptr [esi + 0xf4], 1
// 0067a2f6  8bc6                 mov eax, esi
// 0067a2f8  5e                   pop esi
// 0067a2f9  c3                   ret 

struct CXTPControlComboBoxGalleryPopupBar
{
    void Construct();
};

void CXTPControlComboBoxGalleryPopupBar::Construct()
{
    ((void (__thiscall *)(CXTPControlComboBoxGalleryPopupBar *))0x67a190)(this);
    *(int *)this = 0x7cd604;
    *(int *)((char *)this + 0x54) = 0x7cd5f4;
    *(int *)((char *)this + 0x5c) = 0x7cd594;
    *(int *)((char *)this + 0xf4) = 1;
}
