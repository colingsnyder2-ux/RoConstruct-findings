// from server: 100% by colin
// roc 2007-08 0053e6f0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e6f0
//
// 0053e6f0  8b442404             mov eax, dword ptr [esp + 4]
// 0053e6f4  56                   push esi
// 0053e6f5  8b7004               mov esi, dword ptr [eax + 4]
// 0053e6f8  85f6                 test esi, esi
// 0053e6fa  57                   push edi
// 0053e6fb  8bf9                 mov edi, ecx
// 0053e6fd  7417                 je 0x53e716
// 0053e6ff  53                   push ebx
// 0053e700  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053e704  8b17                 mov edx, dword ptr [edi]
// 0053e706  8b4230               mov eax, dword ptr [edx + 0x30]
// 0053e709  53                   push ebx
// 0053e70a  56                   push esi
// 0053e70b  8bcf                 mov ecx, edi
// 0053e70d  ffd0                 call eax
// 0053e70f  8b36                 mov esi, dword ptr [esi]
// 0053e711  85f6                 test esi, esi
// 0053e713  75ef                 jne 0x53e704
// 0053e715  5b                   pop ebx
// 0053e716  5f                   pop edi
// 0053e717  5e                   pop esi
// 0053e718  c20800               ret 8

struct VItem {
    struct GetSet {
        virtual void f0();
        virtual void f1();
        virtual void f2();
        virtual void f3();
        virtual void f4();
        virtual void f5();
        virtual void f6();
        virtual void f7();
        virtual void f8();
        virtual void f9();
        virtual void f10();
        virtual void f11();
        virtual void f12(int, void*);
    };
    void setValue(void* object, int value);
};

void VItem::setValue(void* object, int value) {
    GetSet* node = *(GetSet**)((char*)object + 4);
    if (node) {
        do {
            void** vtbl = *(void***)this;
            void (__thiscall *fn)(void*, GetSet*, int) = (void (__thiscall *)(void*, GetSet*, int))vtbl[12];
            fn(this, node, value);
            node = *(GetSet**)node;
        } while (node);
    }
}
