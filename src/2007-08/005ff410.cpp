// from server: 100% by colin
// roc 2007-08 005ff410  unit: RBX::RedoVerb  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff410
//
// 005ff410  8b442408             mov eax, dword ptr [esp + 8]
// 005ff414  56                   push esi
// 005ff415  8bf1                 mov esi, ecx
// 005ff417  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff41b  50                   push eax
// 005ff41c  51                   push ecx
// 005ff41d  8bce                 mov ecx, esi
// 005ff41f  e8ecd7fcff           call 0x5ccc10
// 005ff424  c706e8277c00         mov dword ptr [esi], 0x7c27e8
// 005ff42a  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 005ff431  8bc6                 mov eax, esi
// 005ff433  5e                   pop esi
// 005ff434  c20800               ret 8

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
    this->vtable = (void*)0x7c27e8;
    this->field_0x2c = 0;
}
