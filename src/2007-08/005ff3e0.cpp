// from server: 100% by colin
// roc 2007-08 005ff3e0  unit: RBX::RedoVerb  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff3e0
//
// 005ff3e0  8b442408             mov eax, dword ptr [esp + 8]
// 005ff3e4  56                   push esi
// 005ff3e5  8bf1                 mov esi, ecx
// 005ff3e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff3eb  50                   push eax
// 005ff3ec  51                   push ecx
// 005ff3ed  8bce                 mov ecx, esi
// 005ff3ef  e81cd8fcff           call 0x5ccc10
// 005ff3f4  c706c4277c00         mov dword ptr [esi], 0x7c27c4
// 005ff3fa  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 005ff401  8bc6                 mov eax, esi
// 005ff403  5e                   pop esi
// 005ff404  c20800               ret 8

struct VerbContainer;

struct Verb {
    void* vtable;
    Verb(VerbContainer* container, const char* name);
};

struct RedoVerb : Verb {
    char pad[0x28];
    int field_0x2c;
    RedoVerb(VerbContainer* container, const char* name);
};

RedoVerb::RedoVerb(VerbContainer* container, const char* name)
    : Verb(container, name)
{
    this->vtable = (void*)0x7c27c4;
    this->field_0x2c = 0;
}
