// from server: 71% by colin
// roc 2007-08 00436db0  unit: CDeclarationView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00436db0
//
// 00436db0  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00436db6  85c9                 test ecx, ecx
// 00436db8  741a                 je 0x436dd4
// 00436dba  8b442404             mov eax, dword ptr [esp + 4]
// 00436dbe  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00436dc1  52                   push edx
// 00436dc2  e8c9f9ffff           call 0x436790
// 00436dc7  8b442408             mov eax, dword ptr [esp + 8]
// 00436dcb  c70000000000         mov dword ptr [eax], 0
// 00436dd1  c20800               ret 8
// 00436dd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00436dd8  c70100000000         mov dword ptr [ecx], 0
// 00436dde  c20800               ret 8

struct CDeclarationView {
    char pad[0xb0];
    void* m_descriptor;
    void updateDeclarationView(void* item, int unused);
};

extern "C" void __stdcall sub_436790(void*);

void CDeclarationView::updateDeclarationView(void* item, int unused) {
    if (m_descriptor) {
        void* p = *(void**)((char*)item + 0x5c);
        sub_436790(p);
    }
    *(int*)item = 0;
}
