// from server: 100% by colin
// roc 2008-06 004413e0  unit: MVCXTPPropertyGridItem::?$XItem  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004413e0
//
// 004413e0  6aff                 push -1
// 004413e2  6899037c00           push 0x7c0399
// 004413e7  64a100000000         mov eax, dword ptr fs:[0]
// 004413ed  50                   push eax
// 004413ee  64892500000000       mov dword ptr fs:[0], esp
// 004413f5  51                   push ecx
// 004413f6  56                   push esi
// 004413f7  8bf1                 mov esi, ecx
// 004413f9  51                   push ecx
// 004413fa  8d44241c             lea eax, [esp + 0x1c]
// 004413fe  8bcc                 mov ecx, esp
// 00441400  89642408             mov dword ptr [esp + 8], esp
// 00441404  50                   push eax
// 00441405  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044140d  ff15d43e8000         call dword ptr [0x803ed4]
// 00441413  8bce                 mov ecx, esi
// 00441415  e8a6062d00           call 0x711ac0
// 0044141a  8b16                 mov edx, dword ptr [esi]
// 0044141c  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00441422  8bce                 mov ecx, esi
// 00441424  ffd0                 call eax
// 00441426  d95c2404             fstp dword ptr [esp + 4]
// 0044142a  8d4c2404             lea ecx, [esp + 4]
// 0044142e  51                   push ecx
// 0044142f  8bce                 mov ecx, esi
// 00441431  e80adaffff           call 0x43ee40
// 00441436  8d4c2418             lea ecx, [esp + 0x18]
// 0044143a  ff15143f8000         call dword ptr [0x803f14]
// 00441440  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00441444  64890d00000000       mov dword ptr fs:[0], ecx
// 0044144b  5e                   pop esi
// 0044144c  83c410               add esp, 0x10
// 0044144f  c20400               ret 4

// from server: 22% by colin
// roc 2008-06 004413e0  unit: MVCXTPPropertyGridItem::?$XItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004413e0
//
// 004413e0  6aff                 push -1
// 004413e2  6899037c00           push 0x7c0399
// 004413e7  64a100000000         mov eax, dword ptr fs:[0]
// 004413ed  50                   push eax
// 004413ee  64892500000000       mov dword ptr fs:[0], esp
// 004413f5  51                   push ecx
// 004413f6  56                   push esi
// 004413f7  8bf1                 mov esi, ecx
// 004413f9  51                   push ecx
// 004413fa  8d44241c             lea eax, [esp + 0x1c]
struct String {
    char* data;
    __declspec(dllimport) String(const String&);
    __declspec(dllimport) ~String() throw();
};
struct XItem {
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
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual float getValue();
    void assign(String name);
    void setValue(const float* v);
    void f(String name);
};
void XItem::f(String name)
{
    assign(name);
    float v = getValue();
    setValue(&v);
}
