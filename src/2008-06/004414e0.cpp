// from server: 100% by colin
// roc 2008-06 004414e0  unit: G3D::VColor3::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004414e0
//
// 004414e0  6aff                 push -1
// 004414e2  6899037c00           push 0x7c0399
// 004414e7  64a100000000         mov eax, dword ptr fs:[0]
// 004414ed  50                   push eax
// 004414ee  64892500000000       mov dword ptr fs:[0], esp
// 004414f5  83ec10               sub esp, 0x10
// 004414f8  56                   push esi
// 004414f9  8bf1                 mov esi, ecx
// 004414fb  51                   push ecx
// 004414fc  8d442428             lea eax, [esp + 0x28]
// 00441500  8bcc                 mov ecx, esp
// 00441502  89642408             mov dword ptr [esp + 8], esp
// 00441506  50                   push eax
// 00441507  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0044150f  ff15d43e8000         call dword ptr [0x803ed4]
// 00441515  8bce                 mov ecx, esi
// 00441517  e8a4052d00           call 0x711ac0
// 0044151c  8b16                 mov edx, dword ptr [esi]
// 0044151e  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 00441524  8d442408             lea eax, [esp + 8]
// 00441528  50                   push eax
// 00441529  8bce                 mov ecx, esi
// 0044152b  ffd2                 call edx
// 0044152d  50                   push eax
// 0044152e  8bce                 mov ecx, esi
// 00441530  e8fbdfffff           call 0x43f530
// 00441535  8d4c2424             lea ecx, [esp + 0x24]
// 00441539  ff15143f8000         call dword ptr [0x803f14]
// 0044153f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00441543  64890d00000000       mov dword ptr fs:[0], ecx
// 0044154a  5e                   pop esi
// 0044154b  83c41c               add esp, 0x1c
// 0044154e  c20400               ret 4

struct Text;

struct Text {
    void* data;
    __declspec(dllimport) Text(const Text&);
    __declspec(dllimport) ~Text() throw();
};





struct Vector {
    float x, y, z;
};

struct Item {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual Vector getVector();

    void setText(Text);
    void setVector(const Vector&);
    void update(Text);
};

void Item::update(Text value) {
    setText(value);
    setVector(getVector());
}
