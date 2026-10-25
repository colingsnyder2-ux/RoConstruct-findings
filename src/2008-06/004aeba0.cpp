// from server: 100% by Espeon
// roc 2008-06 004aeba0  unit: RBX::Network::Replicator::MarkerItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aeba0
//
// 004aeba0  83ec0c               sub esp, 0xc
// 004aeba3  53                   push ebx
// 004aeba4  56                   push esi
// 004aeba5  57                   push edi
// 004aeba6  8bf9                 mov edi, ecx
// 004aeba8  8d442420             lea eax, [esp + 0x20]
// 004aebac  50                   push eax
// 004aebad  8d4c2414             lea ecx, [esp + 0x14]
// 004aebb1  51                   push ecx
// 004aebb2  8bcf                 mov ecx, edi
// 004aebb4  e8472afaff           call 0x451600
// 004aebb9  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004aebbf  8bf0                 mov esi, eax
// 004aebc1  8b06                 mov eax, dword ptr [esi]
// 004aebc3  85c0                 test eax, eax
// 004aebc5  7508                 jne 0x4aebcf
// 004aebc7  ffd3                 call ebx
// 004aebc9  8b06                 mov eax, dword ptr [esi]
// 004aebcb  85c0                 test eax, eax
// 004aebcd  7404                 je 0x4aebd3
// 004aebcf  8b00                 mov eax, dword ptr [eax]
// 004aebd1  eb02                 jmp 0x4aebd5
// 004aebd3  33c0                 xor eax, eax
// 004aebd5  8b5604               mov edx, dword ptr [esi + 4]
// 004aebd8  3b5018               cmp edx, dword ptr [eax + 0x18]
// 004aebdb  7502                 jne 0x4aebdf
// 004aebdd  ffd3                 call ebx
// 004aebdf  8b4604               mov eax, dword ptr [esi + 4]
// 004aebe2  8b4810               mov ecx, dword ptr [eax + 0x10]
// 004aebe5  8b5720               mov edx, dword ptr [edi + 0x20]
// 004aebe8  6a01                 push 1
// 004aebea  52                   push edx
// 004aebeb  8d442414             lea eax, [esp + 0x14]
// 004aebef  894c2414             mov dword ptr [esp + 0x14], ecx
// 004aebf3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004aebf7  50                   push eax
// 004aebf8  e8036affff           call 0x4a5600
// 004aebfd  5f                   pop edi
// 004aebfe  5e                   pop esi
// 004aebff  5b                   pop ebx
// 004aec00  83c40c               add esp, 0xc
// 004aec03  c20800               ret 8

// from server: 94% by king_originala
struct Node {
    char padding[16];
    int value;
};

struct Container {
    char padding[24];
    Node* end;
};

struct Iterator {
    Container** owner;
    Node* node;
};

extern "C" {
    extern __declspec(dllimport) void __cdecl invalid_parameter_noinfo();
}

struct Writer {
    void write(const int* value, int count, int flag);
};

struct S {
    char padding[32];
    int count;

    Iterator* lookup(Iterator* result, const int* key);
    void f(Writer* writer, int key);
};

void S::f(Writer* writer, int key)
{
    Iterator temporary;
    Iterator* position = lookup(&temporary, &key);
    void (__cdecl *report)() = invalid_parameter_noinfo;

    if (!position->owner)
        report();

    Container* container = position->owner ? *position->owner : 0;

    if (position->node == container->end)
        report();

    int value = position->node->value;
    writer->write(&value, count, 1);
}

