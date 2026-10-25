// from server: 100% by king_originala
// roc 2008-06 0046a7e0  unit: CWebToolbox  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a7e0
//
// 0046a7e0  6aff                 push -1
// 0046a7e2  6858387c00           push 0x7c3858
// 0046a7e7  64a100000000         mov eax, dword ptr fs:[0]
// 0046a7ed  50                   push eax
// 0046a7ee  64892500000000       mov dword ptr fs:[0], esp
// 0046a7f5  51                   push ecx
// 0046a7f6  56                   push esi
// 0046a7f7  8bf1                 mov esi, ecx
// 0046a7f9  89742404             mov dword ptr [esp + 4], esi
// 0046a7fd  c706f4c48100         mov dword ptr [esi], 0x81c4f4
// 0046a803  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0046a809  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046a811  85c0                 test eax, eax
// 0046a813  7408                 je 0x46a81d
// 0046a815  8b08                 mov ecx, dword ptr [eax]
// 0046a817  8b5108               mov edx, dword ptr [ecx + 8]
// 0046a81a  50                   push eax
// 0046a81b  ffd2                 call edx
// 0046a81d  8bce                 mov ecx, esi
// 0046a81f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046a827  e854b2ffff           call 0x465a80
// 0046a82c  f644241801           test byte ptr [esp + 0x18], 1
// 0046a831  7409                 je 0x46a83c
// 0046a833  56                   push esi
// 0046a834  e8415e2300           call 0x6a067a
// 0046a839  83c404               add esp, 4
// 0046a83c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046a840  8bc6                 mov eax, esi
// 0046a842  5e                   pop esi
// 0046a843  64890d00000000       mov dword ptr fs:[0], ecx
// 0046a84a  83c410               add esp, 0x10
// 0046a84d  c20400               ret 4

void __cdecl operator delete(void*);

struct B_func_00465a80 {
    virtual ~B_func_00465a80();
};

struct S_func_00465a80 : B_func_00465a80 {
    ~S_func_00465a80();
};

struct Interface;

struct InterfaceTable {
    void* slot0;
    void* slot1;
    unsigned long (__stdcall *release)(Interface*);
};

struct Interface {
    InterfaceTable* table;
};

struct CWebToolbox : S_func_00465a80 {
    char padding[248];
    Interface* object;
    virtual ~CWebToolbox();
    void* destroy(unsigned int flags);
};

__forceinline CWebToolbox::~CWebToolbox()
{
    if (object)
        object->table->release(object);
}

void* CWebToolbox::destroy(unsigned int flags)
{
    this->CWebToolbox::~CWebToolbox();
    if (flags & 1)
        operator delete(this);
    return this;
}
