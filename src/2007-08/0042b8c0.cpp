// from server: 82% by colin
// roc 2007-08 0042b8c0  unit: CLuaHtmlView::Binder::VPropBinding::?$sp_counted_impl_p  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b8c0
//
// 0042b8c0  8b442404             mov eax, dword ptr [esp + 4]
// 0042b8c4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0042b8c7  8b5008               mov edx, dword ptr [eax + 8]
// 0042b8ca  51                   push ecx
// 0042b8cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b8cf  52                   push edx
// 0042b8d0  8b10                 mov edx, dword ptr [eax]
// 0042b8d2  51                   push ecx
// 0042b8d3  ffd2                 call edx
// 0042b8d5  83c40c               add esp, 0xc
// 0042b8d8  c3                   ret 

struct VPropBinding {
    void invoke(void* arg);
};

void VPropBinding::invoke(void* arg) {
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))arg;
    fn(*(void**)((char*)arg + 4), *(void**)((char*)arg + 8), *(void**)((char*)arg + 12));
}
