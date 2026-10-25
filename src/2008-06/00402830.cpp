// from server: 100% by king_originala
// roc 2008-06 00402830  unit: VCWorkspace::?$CComObject  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402830
//
// 00402830  6aff                 push -1
// 00402832  688bcb7b00           push 0x7bcb8b
// 00402837  64a100000000         mov eax, dword ptr fs:[0]
// 0040283d  50                   push eax
// 0040283e  64892500000000       mov dword ptr fs:[0], esp
// 00402845  51                   push ecx
// 00402846  56                   push esi
// 00402847  57                   push edi
// 00402848  8bf9                 mov edi, ecx
// 0040284a  8d7708               lea esi, [edi + 8]
// 0040284d  c7470400000000       mov dword ptr [edi + 4], 0
// 00402854  8bce                 mov ecx, esi
// 00402856  897c2408             mov dword ptr [esp + 8], edi
// 0040285a  c70744b18000         mov dword ptr [edi], 0x80b144
// 00402860  e8fb820600           call 0x46ab60
// 00402865  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00402869  c7066caf8000         mov dword ptr [esi], 0x80af6c
// 0040286f  c7460458af8000       mov dword ptr [esi + 4], 0x80af58
// 00402876  c7460840af8000       mov dword ptr [esi + 8], 0x80af40
// 0040287d  c7461024af8000       mov dword ptr [esi + 0x10], 0x80af24
// 00402884  c7461818af8000       mov dword ptr [esi + 0x18], 0x80af18
// 0040288b  c7461c0caf8000       mov dword ptr [esi + 0x1c], 0x80af0c
// 00402892  894620               mov dword ptr [esi + 0x20], eax
// 00402895  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040289b  8b11                 mov edx, dword ptr [ecx]
// 0040289d  8b4204               mov eax, dword ptr [edx + 4]
// 004028a0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004028a8  ffd0                 call eax
// 004028aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004028ae  8bc7                 mov eax, edi
// 004028b0  5f                   pop edi
// 004028b1  5e                   pop esi
// 004028b2  64890d00000000       mov dword ptr fs:[0], ecx
// 004028b9  83c410               add esp, 0x10
// 004028bc  c20400               ret 4

struct Interface0 {
    virtual void f0();
};

struct Interface1 {
    virtual void f1();
};

struct Interface2 {
    virtual void f2();
    unsigned long data;
};

struct Interface3 {
    virtual void f3();
    unsigned long data;
};

struct Interface4 {
    virtual void f4();
};

struct Interface5 {
    virtual void f5();
};

struct InnerBase :
    Interface0, Interface1, Interface2,
    Interface3, Interface4, Interface5
{
    InnerBase();
    ~InnerBase();
};

struct Inner : InnerBase {
    void* argument;

    Inner(void* value);
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
};

struct Module {
    virtual void first() = 0;
    virtual void second() = 0;
};

extern Module* module;

struct ObjectBase {
    unsigned long references;
    ObjectBase();
};

struct Object : ObjectBase {
    Inner inner;

    virtual void function();
    Object(void* argument);
};

inline ObjectBase::ObjectBase()
    : references(0)
{
}

inline Inner::Inner(void* value)
    : InnerBase(), argument(value)
{
}

Object::Object(void* argument)
    : ObjectBase(), inner(argument)
{
    module->second();
}
