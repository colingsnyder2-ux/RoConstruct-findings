// from server: 89% by colin
// roc 2007-08 0066e3d0  unit: CXTPDockingPaneManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e3d0
//
// 0066e3d0  56                   push esi
// 0066e3d1  8bf1                 mov esi, ecx
// 0066e3d3  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0066e3d9  398638010000         cmp dword ptr [esi + 0x138], eax
// 0066e3df  7433                 je 0x66e414
// 0066e3e1  8bce                 mov ecx, esi
// 0066e3e3  898638010000         mov dword ptr [esi + 0x138], eax
// 0066e3e9  e862fdffff           call 0x66e150
// 0066e3ee  8b7004               mov esi, dword ptr [eax + 4]
// 0066e3f1  85f6                 test esi, esi
// 0066e3f3  741f                 je 0x66e414
// 0066e3f5  8bc6                 mov eax, esi
// 0066e3f7  8b4808               mov ecx, dword ptr [eax + 8]
// 0066e3fa  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0066e3fd  83f801               cmp eax, 1
// 0066e400  8b36                 mov esi, dword ptr [esi]
// 0066e402  7405                 je 0x66e409
// 0066e404  83f803               cmp eax, 3
// 0066e407  7507                 jne 0x66e410
// 0066e409  8b01                 mov eax, dword ptr [ecx]
// 0066e40b  8b5028               mov edx, dword ptr [eax + 0x28]
// 0066e40e  ffd2                 call edx
// 0066e410  85f6                 test esi, esi
// 0066e412  75e1                 jne 0x66e3f5
// 0066e414  5e                   pop esi
// 0066e415  c3                   ret 

extern "C" void* __stdcall GetFocus();

struct CXTPDockingPaneManager {
    char pad[0x138];
    void* field_138;
    void* getActivePane();
    void update();
};

void CXTPDockingPaneManager::update() {
    void* focus = GetFocus();
    if (field_138 == focus)
        return;
    field_138 = focus;
    void* pane = getActivePane();
    void* node = *(void**)((char*)pane + 4);
    if (node) {
        do {
            void* obj = *(void**)((char*)node + 8);
            int type = *(int*)((char*)obj + 0x18);
            node = *(void**)node;
            if (type == 1 || type == 3) {
                void* vtable = *(void**)obj;
                void (__thiscall *fn)(void*) = *(void (__thiscall**)(void*))((char*)vtable + 0x28);
                fn(obj);
            }
        } while (node);
    }
}
