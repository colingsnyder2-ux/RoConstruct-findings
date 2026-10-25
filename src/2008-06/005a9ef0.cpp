// from server: 100% by king_originala
// roc 2008-06 005a9ef0  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9ef0
//
// 005a9ef0  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005a9ef5  56                   push esi
// 005a9ef6  8b742408             mov esi, dword ptr [esp + 8]
// 005a9efa  50                   push eax
// 005a9efb  6a01                 push 1
// 005a9efd  56                   push esi
// 005a9efe  e8ad760600           call 0x6115b0
// 005a9f03  8b08                 mov ecx, dword ptr [eax]
// 005a9f05  8b4104               mov eax, dword ptr [ecx + 4]
// 005a9f08  83c004               add eax, 4
// 005a9f0b  83c40c               add esp, 0xc
// 005a9f0e  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005a9f12  7214                 jb 0x5a9f28
// 005a9f14  8b4004               mov eax, dword ptr [eax + 4]
// 005a9f17  50                   push eax
// 005a9f18  56                   push esi
// 005a9f19  e862830600           call 0x612280
// 005a9f1e  83c408               add esp, 8
// 005a9f21  b801000000           mov eax, 1
// 005a9f26  5e                   pop esi
// 005a9f27  c3                   ret 
// 005a9f28  83c004               add eax, 4
// 005a9f2b  50                   push eax
// 005a9f2c  56                   push esi
// 005a9f2d  e84e830600           call 0x612280
// 005a9f32  83c408               add esp, 8
// 005a9f35  b801000000           mov eax, 1
// 005a9f3a  5e                   pop esi
// 005a9f3b  c3                   ret 

struct String {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct Object {
    unsigned int reserved;
    String name;
};

struct Node {
    unsigned int reserved;
    Object* object;
};

struct Result {
    Node* node;
};

extern void* g;
extern "C" Result* __cdecl a(void*, int, void*);
extern "C" void __cdecl b(void*, const char*);

extern "C" int __cdecl f(void* p)
{
    String* s = &a(p, 1, g)->node->object->name;
    b(p, s->capacity >= 16 ? s->pointer : s->buffer);
    return 1;
}
