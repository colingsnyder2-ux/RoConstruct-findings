// from server: 100% by colin
// roc 2007-08 00434530  unit: CClassTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434530
//
// 00434530  56                   push esi
// 00434531  8bf1                 mov esi, ecx
// 00434533  e89cb71f00           call 0x62fcd4
// 00434538  80be9c00000000       cmp byte ptr [esi + 0x9c], 0
// 0043453f  740c                 je 0x43454d
// 00434541  8b4660               mov eax, dword ptr [esi + 0x60]
// 00434544  8b5044               mov edx, dword ptr [eax + 0x44]
// 00434547  8d4e60               lea ecx, [esi + 0x60]
// 0043454a  5e                   pop esi
// 0043454b  ffe2                 jmp edx
// 0043454d  5e                   pop esi
// 0043454e  c3                   ret 

struct CClassTreeView {
    char pad[0x60];
    void* field60;
    char pad2[0x9c - 0x64];
    unsigned char field9c;
    void func();
};

extern "C" void __fastcall sub_62FCD4(void*);

void CClassTreeView::func() {
    sub_62FCD4(this);
    if (field9c != 0) {
        void* p = field60;
        void (__fastcall *fn)(void*) = *(void (__fastcall **)(void*))((char*)p + 0x44);
        fn((char*)this + 0x60);
    }
}
