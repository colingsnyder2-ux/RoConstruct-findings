// from server: 100% by colin
// roc 2008-06 00443140  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443140
//
// 00443140  53                   push ebx
// 00443141  56                   push esi
// 00443142  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00443146  8b4604               mov eax, dword ptr [esi + 4]
// 00443149  57                   push edi
// 0044314a  83c004               add eax, 4
// 0044314d  50                   push eax
// 0044314e  8bf9                 mov edi, ecx
// 00443150  e8fb471100           call 0x557950
// 00443155  85c0                 test eax, eax
// 00443157  7531                 jne 0x44318a
// 00443159  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 0044315d  8d4900               lea ecx, [ecx]
// 00443160  84db                 test bl, bl
// 00443162  7424                 je 0x443188
// 00443164  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0044316a  85f6                 test esi, esi
// 0044316c  741a                 je 0x443188
// 0044316e  8b4604               mov eax, dword ptr [esi + 4]
// 00443171  83c004               add eax, 4
// 00443174  50                   push eax
// 00443175  8bcf                 mov ecx, edi
// 00443177  b301                 mov bl, 1
// 00443179  e8d2471100           call 0x557950
// 0044317e  85c0                 test eax, eax
// 00443180  74de                 je 0x443160
// 00443182  5f                   pop edi
// 00443183  5e                   pop esi
// 00443184  5b                   pop ebx
// 00443185  c20800               ret 8
// 00443188  33c0                 xor eax, eax
// 0044318a  5f                   pop edi
// 0044318b  5e                   pop esi
// 0044318c  5b                   pop ebx
// 0044318d  c20800               ret 8

// from server: 96% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Node {
    unsigned char padding0[4];
    char* data;
    unsigned char padding1[180];
    Node* parent;
};

struct S {
    void* find(const char*);
    void* search(Node*, bool);
};

void* S::search(Node* node, bool recursive)
{
    const char* key = node->data + 4;
    void* result = find(key);
    if (result)
        return result;

    if (recursive && node->parent)
        return search(node->parent, true);

    return 0;
}
