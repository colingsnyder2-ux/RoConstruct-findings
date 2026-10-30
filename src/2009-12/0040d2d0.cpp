// roc 2009-12 0040d2d0  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d2d0
//
// 0040d2d0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d2d6  8b08                 mov ecx, dword ptr [eax]
// 0040d2d8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040d2db  50                   push eax
// 0040d2dc  ffd2                 call edx
// 0040d2de  c3                   ret 
// copied from an identical function in another client (function ?Release@CIDEBrowserView@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
// from server: 100% by why2
struct CIDEBrowserView {
    char pad[0xf0];
    void* field_f0;
    void Release();
};

void CIDEBrowserView::Release()
{
    void* p = field_f0;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[8];
    fn(p);
}
}
