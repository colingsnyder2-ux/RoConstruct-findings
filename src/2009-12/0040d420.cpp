// roc 2009-12 0040d420  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d420
//
// 0040d420  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d426  8b08                 mov ecx, dword ptr [eax]
// 0040d428  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0040d42b  50                   push eax
// 0040d42c  ffd2                 call edx
// 0040d42e  c3                   ret 
// copied from an identical function in another client (function ?release@CIDEBrowserView@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
// from server: 100% by why2
struct CIDEBrowserView {
    char pad[0xf0];
    void* field_f0;
    void release();
};

void CIDEBrowserView::release()
{
    void* p = field_f0;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x38 / 4];
    fn(p);
}
}
