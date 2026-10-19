// from server: 60% by colin
// from server: 59% by colin
// roc 2008-06 00441560  unit: RBX::VBrickColor::?$XItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00441560
//
// 00441560  6aff                 push -1
// 00441562  6899037c00           push 0x7c0399
// 00441567  64a100000000         mov eax, dword ptr fs:[0]
// 0044156d  50                   push eax
// 0044156e  64892500000000       mov dword ptr fs:[0], esp
// 00441575  51                   push ecx
// 00441576  56                   push esi
// 00441577  8bf1                 mov esi, ecx
// 00441579  51                   push ecx
// 0044157a  8d44241c             lea eax, [esp + 0x1c]
#include <intrin.h>

struct Color3 {
    float r, g, b;
};

struct BrickColorX {
    virtual void v0(), v1(), v2(), v3(), v4(), v5(), v6(), v7();
    virtual void v8(), v9(), v10(), v11(), v12(), v13(), v14(), v15();
    virtual void v16(), v17(), v18(), v19(), v20(), v21(), v22(), v23();
    virtual void v24(), v25(), v26(), v27(), v28(), v29(), v30(), v31();
    virtual void v32(), v33(), v34(), v35(), v36(), v37(), v38(), v39();
    virtual void v40(), v41(), v42(), v43(), v44(), v45(), v46(), v47();
    virtual void v48(), v49(), v50(), v51(), v52(), v53(), v54(), v55();
    virtual void v56(), v57(), v58(), v59();
    virtual Color3* getColor3(Color3* out);
    void setColor3(Color3* color);
    void construct(int number);
    void sub_711AC0();
};

struct SomeObj {
    void method();
};

extern "C" void* __stdcall sub_803ED4(void*);
extern "C" void __stdcall sub_803F14(void*);

extern "C" void __stdcall sub_43F890();

void BrickColorX::construct(int number)
{
    SomeObj obj;
    _ReadWriteBarrier();
    sub_803ED4(&obj);
    sub_711AC0();
    Color3 c;
    Color3* p = getColor3(&c);
    setColor3(p);
    sub_803F14(&obj);
}
