// from server: 96% by colin
// roc 2007-08 006ee8f0  unit: CXTPDockingPaneContext  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ee8f0
//
// 006ee8f0  57                   push edi
// 006ee8f1  8bf9                 mov edi, ecx
// 006ee8f3  83bfdc00000000       cmp dword ptr [edi + 0xdc], 0
// 006ee8fa  7430                 je 0x6ee92c
// 006ee8fc  53                   push ebx
// 006ee8fd  56                   push esi
// 006ee8fe  8d9fd0000000         lea ebx, [edi + 0xd0]
// 006ee904  8bcb                 mov ecx, ebx
// 006ee906  e885b30100           call 0x709c90
// 006ee90b  8bf0                 mov esi, eax
// 006ee90d  8b06                 mov eax, dword ptr [esi]
// 006ee90f  8b5068               mov edx, dword ptr [eax + 0x68]
// 006ee912  8bce                 mov ecx, esi
// 006ee914  ffd2                 call edx
// 006ee916  8b06                 mov eax, dword ptr [esi]
// 006ee918  8b5004               mov edx, dword ptr [eax + 4]
// 006ee91b  6a01                 push 1
// 006ee91d  8bce                 mov ecx, esi
// 006ee91f  ffd2                 call edx
// 006ee921  83bfdc00000000       cmp dword ptr [edi + 0xdc], 0
// 006ee928  75da                 jne 0x6ee904
// 006ee92a  5e                   pop esi
// 006ee92b  5b                   pop ebx
// 006ee92c  5f                   pop edi
// 006ee92d  c3                   ret 

struct CXTPDockingPaneContext {
    char pad[0xd0];
    int field_0xd0;
    int field_0xd4;
    int field_0xd8;
    int field_0xdc;
    void method();
};

struct Inner {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2(int);
};

extern "C" Inner* __fastcall sub_709C90(void*);

void CXTPDockingPaneContext::method() {
    if (field_0xdc != 0) {
        Inner* p;
        do {
            p = sub_709C90(&field_0xd0);
            p->vfunc1();
            p->vfunc2(1);
        } while (field_0xdc != 0);
    }
}
