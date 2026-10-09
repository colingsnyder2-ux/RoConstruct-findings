// from server: 61% by colin
// roc 2007-08 00586b20  unit: RBX::VHat::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586b20
//
// 00586b20  83ec08               sub esp, 8
// 00586b23  56                   push esi
// 00586b24  57                   push edi
// 00586b25  51                   push ecx
// 00586b26  8d44240c             lea eax, [esp + 0xc]
// 00586b2a  50                   push eax
// 00586b2b  e880faffff           call 0x5865b0
// 00586b30  8bc8                 mov ecx, eax
// 00586b32  83c12c               add ecx, 0x2c
// 00586b35  e876adf1ff           call 0x4a18b0
// 00586b3a  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00586b40  8bf0                 mov esi, eax
// 00586b42  833e00               cmp dword ptr [esi], 0
// 00586b45  7502                 jne 0x586b49
// 00586b47  ffd7                 call edi
// 00586b49  8b0e                 mov ecx, dword ptr [esi]
// 00586b4b  8b5604               mov edx, dword ptr [esi + 4]
// 00586b4e  3b5104               cmp edx, dword ptr [ecx + 4]
// 00586b51  7502                 jne 0x586b55
// 00586b53  ffd7                 call edi
// 00586b55  8b4e04               mov ecx, dword ptr [esi + 4]
// 00586b58  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586b5c  d94110               fld dword ptr [ecx + 0x10]
// 00586b5f  83c110               add ecx, 0x10
// 00586b62  d918                 fstp dword ptr [eax]
// 00586b64  d94104               fld dword ptr [ecx + 4]
// 00586b67  5f                   pop edi
// 00586b68  d95804               fstp dword ptr [eax + 4]
// 00586b6b  5e                   pop esi
// 00586b6c  d94108               fld dword ptr [ecx + 8]
// 00586b6f  d95808               fstp dword ptr [eax + 8]
// 00586b72  d9410c               fld dword ptr [ecx + 0xc]
// 00586b75  d9580c               fstp dword ptr [eax + 0xc]
// 00586b78  83c408               add esp, 8
// 00586b7b  c20400               ret 4

struct Vec4 {
    float x, y, z, w;
};

struct Node {
    Node* next;
    Node* prev;
    char pad[8];
    Vec4 value;
};

struct List {
    Node* head;
    Node* tail;
};

struct Holder {
    List list;
};

struct Outer {
    char pad[0x2c];
    Holder holder;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __stdcall sub_5865B0(void* out);
extern "C" void* __stdcall sub_4A18B0(void* p);

void* g_77e6d8;

struct S {
    void getValue(Vec4* out);
};

void S::getValue(Vec4* out) {
    Outer* o;
    sub_5865B0(&o);
    Holder* h = (Holder*)sub_4A18B0(&o->holder);
    void* edi = g_77e6d8;
    Node* n = h->list.head;
    if (n == 0) {
        ((void (__stdcall *)())edi)();
    }
    Node* n2 = h->list.head;
    Node* n3 = h->list.tail;
    if (n3 == n2->next) {
        ((void (__stdcall *)())edi)();
    }
    Node* n4 = h->list.tail;
    out->x = n4->value.x;
    out->y = n4->value.y;
    out->z = n4->value.z;
    out->w = n4->value.w;
}
