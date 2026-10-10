// from server: 56% by colin
// roc 2007-08 005a1bd0  unit: RBX::VShirt  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1bd0
//
// 005a1bd0  53                   push ebx
// 005a1bd1  56                   push esi
// 005a1bd2  8bf1                 mov esi, ecx
// 005a1bd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1bd8  57                   push edi
// 005a1bd9  e882400000           call 0x5a5c60
// 005a1bde  85c0                 test eax, eax
// 005a1be0  7432                 je 0x5a1c14
// 005a1be2  8bc8                 mov ecx, eax
// 005a1be4  e877fdffff           call 0x5a1960
// 005a1be9  8bd8                 mov ebx, eax
// 005a1beb  85db                 test ebx, ebx
// 005a1bed  7425                 je 0x5a1c14
// 005a1bef  83ec20               sub esp, 0x20
// 005a1bf2  8bfc                 mov edi, esp
// 005a1bf4  81c6e8000000         add esi, 0xe8
// 005a1bfa  89642430             mov dword ptr [esp + 0x30], esp
// 005a1bfe  56                   push esi
// 005a1bff  8bcf                 mov ecx, edi
// 005a1c01  ff159ce67700         call dword ptr [0x77e69c]
// 005a1c07  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005a1c0a  8bcb                 mov ecx, ebx
// 005a1c0c  89471c               mov dword ptr [edi + 0x1c], eax
// 005a1c0f  e82c14fdff           call 0x573040
// 005a1c14  5f                   pop edi
// 005a1c15  5e                   pop esi
// 005a1c16  5b                   pop ebx
// 005a1c17  c20400               ret 4
// library rbxgs/v8datamodel/CharacterAppearance.cpp (function ?$FactoryProduct@VShirt@RBX@@)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/CharacterAppearance.cpp

struct RBX_String {
    void assign(const RBX_String& other);
    char data[0x20];
};

struct RBX_Object {
    void constructFrom(const RBX_String& s);
};

struct RBX_Instance {
    void* getSomething();
    RBX_Object* getObject();
};

struct RBX_VShirt {
    char pad[0xe8];
    RBX_String name;
    void FactoryProduct(RBX_Instance* inst);
};

extern "C" void* __stdcall sub_5A5C60(RBX_Instance* inst);
extern "C" void* __stdcall sub_5A1960(void* p);
extern "C" void __stdcall sub_573040(void* p, RBX_Object* obj);
extern "C" void __stdcall sub_77E69C(RBX_String* dst, const RBX_String* src);

void RBX_VShirt::FactoryProduct(RBX_Instance* inst)
{
    void* a = sub_5A5C60(inst);
    if (!a) return;
    void* b = sub_5A1960(a);
    if (!b) return;
    RBX_String tmp;
    sub_77E69C(&tmp, &this->name);
    RBX_Object* obj = (RBX_Object*)b;
    obj->constructFrom(tmp);
    sub_573040(b, obj);
}
