// from server: 100% by colin
// roc 2008-06 00443ab0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443ab0
//
// 00443ab0  8b8930010000         mov ecx, dword ptr [ecx + 0x130]
// 00443ab6  56                   push esi
// 00443ab7  8b742408             mov esi, dword ptr [esp + 8]
// 00443abb  85c9                 test ecx, ecx
// 00443abd  7411                 je 0x443ad0
// 00443abf  8b460c               mov eax, dword ptr [esi + 0xc]
// 00443ac2  8b4004               mov eax, dword ptr [eax + 4]
// 00443ac5  83c004               add eax, 4
// 00443ac8  50                   push eax
// 00443ac9  e8823e1100           call 0x557950
// 00443ace  eb02                 jmp 0x443ad2
// 00443ad0  33c0                 xor eax, eax
// 00443ad2  85c0                 test eax, eax
// 00443ad4  741d                 je 0x443af3
// 00443ad6  8bc8                 mov ecx, eax
// 00443ad8  e8a3fcffff           call 0x443780
// 00443add  85c0                 test eax, eax
// 00443adf  7412                 je 0x443af3
// 00443ae1  8b5604               mov edx, dword ptr [esi + 4]
// 00443ae4  83c204               add edx, 4
// 00443ae7  5e                   pop esi
// 00443ae8  89542404             mov dword ptr [esp + 4], edx
// 00443aec  8bc8                 mov ecx, eax
// 00443aee  e95d3e1100           jmp 0x557950
// 00443af3  33c0                 xor eax, eax
// 00443af5  5e                   pop esi
// 00443af6  c20400               ret 4

//

struct Storage;

struct Node {
    Storage* convert();
};

struct Storage {
    Node* find(const char* key);
    Node* lookup(const char* key);
};

struct Link {
    void* reserved;
    const char* key;
};

struct Argument {
    void* reserved0;
    const char* key;
    void* reserved8;
    Link* parent;
};

struct Descriptor {
    char reserved[0x130];
    Storage* storage;
    Node* find(Argument* argument);
};

Node* Storage::lookup(const char* key)
{
    if (this)
        return find(key);
    return 0;
}

Node* Descriptor::find(Argument* argument)
{
    Storage* s = storage;
    Node* node = s ? s->lookup(argument->parent->key + 4) : 0;
    if (node) {
        Storage* next = node->convert();
        if (next) {
            const char* key = argument->key + 4;
            return next->find(key);
        }
    }
    return 0;
}
