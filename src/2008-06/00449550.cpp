// from server: 100% by king_originala
// roc 2008-06 00449550  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449550
//
// 00449550  e8f9782500           call 0x6a0e4e
// 00449555  85c0                 test eax, eax
// 00449557  743d                 je 0x449596
// 00449559  8b10                 mov edx, dword ptr [eax]
// 0044955b  8bc8                 mov ecx, eax
// 0044955d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00449560  ffd0                 call eax
// 00449562  85c0                 test eax, eax
// 00449564  7430                 je 0x449596
// 00449566  e8e3782500           call 0x6a0e4e
// 0044956b  85c0                 test eax, eax
// 0044956d  740b                 je 0x44957a
// 0044956f  8b10                 mov edx, dword ptr [eax]
// 00449571  8bc8                 mov ecx, eax
// 00449573  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00449576  ffd0                 call eax
// 00449578  eb02                 jmp 0x44957c
// 0044957a  33c0                 xor eax, eax
// 0044957c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044957f  6a00                 push 0
// 00449581  51                   push ecx
// 00449582  ff15382d8000         call dword ptr [0x802d38]
// 00449588  6aff                 push -1
// 0044958a  6a00                 push 0
// 0044958c  68c4000000           push 0xc4
// 00449591  e8ca7b2500           call 0x6a1160
// 00449596  6a00                 push 0
// 00449598  e8bd7b2500           call 0x6a115a
// 0044959d  c20800               ret 8

struct Window {
    char reserved[32];
    void* handle;
};

struct Object {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual Window* window();
};

extern "C" Object* __stdcall getObject();
extern "C" int (__stdcall *FlashWindow)(void*, int);
extern "C" void __stdcall notify(unsigned int, unsigned int, int);
extern "C" void __stdcall finish(int);

void __stdcall function(int, int)
{
    Object* p = getObject();
    if (p && p->window()) {
        p = getObject();
        Window* w = p ? p->window() : 0;
        FlashWindow(w->handle, 0);
        notify(196, 0, -1);
    }
    finish(0);
}
