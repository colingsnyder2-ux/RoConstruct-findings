// from server: 100% by king_originala
// roc 2008-06 00418800  unit: VCContent::?$CComContainedObject  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418800
//
// 00418800  6aff                 push -1
// 00418802  68bbdc7b00           push 0x7bdcbb
// 00418807  64a100000000         mov eax, dword ptr fs:[0]
// 0041880d  50                   push eax
// 0041880e  64892500000000       mov dword ptr fs:[0], esp
// 00418815  51                   push ecx
// 00418816  56                   push esi
// 00418817  8bf1                 mov esi, ecx
// 00418819  57                   push edi
// 0041881a  8d7e08               lea edi, [esi + 8]
// 0041881d  c7460400000000       mov dword ptr [esi + 4], 0
// 00418824  8bcf                 mov ecx, edi
// 00418826  89742408             mov dword ptr [esp + 8], esi
// 0041882a  c7069cec8000         mov dword ptr [esi], 0x80ec9c
// 00418830  e87bf1ffff           call 0x4179b0
// 00418835  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00418839  c70780ec8000         mov dword ptr [edi], 0x80ec80
// 0041883f  c7470458ec8000       mov dword ptr [edi + 4], 0x80ec58
// 00418846  894708               mov dword ptr [edi + 8], eax
// 00418849  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0041884f  8b11                 mov edx, dword ptr [ecx]
// 00418851  8b4204               mov eax, dword ptr [edx + 4]
// 00418854  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041885c  ffd0                 call eax
// 0041885e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00418862  5f                   pop edi
// 00418863  8bc6                 mov eax, esi
// 00418865  5e                   pop esi
// 00418866  64890d00000000       mov dword ptr fs:[0], ecx
// 0041886d  83c410               add esp, 0x10
// 00418870  c20400               ret 4

struct InterfaceA {
    virtual void methodA();
};

struct InterfaceB {
    virtual void methodB();
};

struct InnerBase : InterfaceA, InterfaceB {
    void *owner;
    InnerBase();
    ~InnerBase();
};

struct Inner : InnerBase {
    virtual void methodA();
    virtual void methodB();
    Inner(void *);
};

struct Module {
    virtual void unused();
    virtual long lock();
};

extern Module *module;

struct Base {
    long references;
    Base();
};

struct S : Base {
    virtual void method();
    Inner contained;
    S(void *);
};

__forceinline Base::Base() : references(0)
{
}

__forceinline Inner::Inner(void *p)
{
    owner = p;
}

S::S(void *p) : contained(p)
{
    module->lock();
}
