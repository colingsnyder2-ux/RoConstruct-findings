// from server: 91% by colin
// from server: 86% by king_originala
// roc 2008-06 0058bba0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058bba0
//
// 0058bba0  6aff                 push -1
// 0058bba2  64a100000000         mov eax, dword ptr fs:[0]
// 0058bba8  68c0167d00           push 0x7d16c0
// 0058bbad  50                   push eax
// 0058bbae  64892500000000       mov dword ptr fs:[0], esp
// 0058bbb5  83ec7c               sub esp, 0x7c
// 0058bbb8  53                   push ebx
// 0058bbb9  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0058bbc0  55                   push ebp
// 0058bbc1  56                   push esi
// 0058bbc2  57                   push edi
// 0058bbc3  8bf9                 mov edi, ecx
// 0058bbc5  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0058bbc8  8b4104               mov eax, dword ptr [ecx + 4]
// 0058bbcb  80784900             cmp byte ptr [eax + 0x49], 0
// 0058bbcf  8be9                 mov ebp, ecx
// 0058bbd1  7516                 jne 0x58bbe9
// 0058bbd3  8b0b                 mov ecx, dword ptr [ebx]
// 0058bbd5  39480c               cmp dword ptr [eax + 0xc], ecx
// 0058bbd8  7305                 jae 0x58bbdf
// 0058bbda  8b4008               mov eax, dword ptr [eax + 8]
// 0058bbdd  eb04                 jmp 0x58bbe3
// 0058bbdf  8be8                 mov ebp, eax
// 0058bbe1  8b00                 mov eax, dword ptr [eax]
// 0058bbe3  80784900             cmp byte ptr [eax + 0x49], 0
// 0058bbe7  74ec                 je 0x58bbd5
// 0058bbe9  8b37                 mov esi, dword ptr [edi]
// 0058bbeb  8b4718               mov eax, dword ptr [edi + 0x18]
// 0058bbee  89442414             mov dword ptr [esp + 0x14], eax
// 0058bbf2  85f6                 test esi, esi
// 0058bbf4  7404                 je 0x58bbfa
// 0058bbf6  3bf6                 cmp esi, esi
// 0058bbf8  7406                 je 0x58bc00
// 0058bbfa  ff1590288000         call dword ptr [0x802890]
// 0058bc00  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0058bc04  7407                 je 0x58bc0d
// 0058bc06  8b0b                 mov ecx, dword ptr [ebx]
// 0058bc08  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0058bc0b  7369                 jae 0x58bc76
// 0058bc0d  8d4c2418             lea ecx, [esp + 0x18]
// 0058bc11  e83addffff           call 0x589950
// 0058bc16  8b13                 mov edx, dword ptr [ebx]
// 0058bc18  50                   push eax
// 0058bc19  8d4c2458             lea ecx, [esp + 0x58]
// 0058bc1d  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0058bc28  89542454             mov dword ptr [esp + 0x54], edx
// 0058bc2c  e89fe0ffff           call 0x589cd0
// 0058bc31  8d442450             lea eax, [esp + 0x50]
// 0058bc35  50                   push eax
// 0058bc36  55                   push ebp
// 0058bc37  56                   push esi
// 0058bc38  8d4c241c             lea ecx, [esp + 0x1c]
// 0058bc3c  51                   push ecx
// 0058bc3d  8bcf                 mov ecx, edi
// 0058bc3f  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 0058bc47  e824f7ffff           call 0x58b370
// 0058bc4c  8b30                 mov esi, dword ptr [eax]
// 0058bc4e  8b6804               mov ebp, dword ptr [eax + 4]
// 0058bc51  8d4c2454             lea ecx, [esp + 0x54]
// 0058bc55  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0058bc5d  e8bedaffff           call 0x589720
// 0058bc62  8d4c2418             lea ecx, [esp + 0x18]
// 0058bc66  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0058bc71  e8aadaffff           call 0x589720
// 0058bc76  85f6                 test esi, esi
// 0058bc78  752f                 jne 0x58bca9
// 0058bc7a  ff1590288000         call dword ptr [0x802890]
// 0058bc80  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 0058bc83  7506                 jne 0x58bc8b
// 0058bc85  ff1590288000         call dword ptr [0x802890]
// 0058bc8b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0058bc92  5f                   pop edi
// 0058bc93  5e                   pop esi
// 0058bc94  8d4510               lea eax, [ebp + 0x10]
// 0058bc97  5d                   pop ebp
// 0058bc98  5b                   pop ebx
// 0058bc99  64890d00000000       mov dword ptr fs:[0], ecx
// 0058bca0  81c488000000         add esp, 0x88
// 0058bca6  c20400               ret 4
// 0058bca9  8b36                 mov esi, dword ptr [esi]
// 0058bcab  ebd3                 jmp 0x58bc80
#include <intrin.h>

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Value {
    char data[56];
    Value();
    Value(const Value&);
    ~Value();
};

struct Entry {
    unsigned key;
    Value value;

    Entry(unsigned k, const Value& v) : key(k), value(v) {}
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    Value value;
    unsigned char color;
    unsigned char nil;
};

struct Map;

struct Proxy {
    Map* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;

    Iterator(Proxy* p, Node* n) : owner(p), node(n) {}

    bool operator==(const Iterator& other) const {
        if (!owner || owner != other.owner)
            _invalid_parameter_noinfo();
        return node == other.node;
    }

    Iterator& operator=(const Iterator& other) {
        owner = other.owner;
        node = other.node;
        return *this;
    }
};

struct Map {
    Proxy* proxy;
    char padding[20];
    Node* head;

    Iterator insert(Iterator position, const Entry& entry);
    Value& lookup(const unsigned& key);
};

Value& Map::lookup(const unsigned& key)
{
    Node* candidate = head;
    Node* current = head->parent;

    while (!current->nil) {
        if (current->key < key) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator position(proxy, candidate);
    _ReadWriteBarrier();
    Iterator finish(proxy, head);

    if (position == finish || key < position.node->key)
        position = insert(position, Entry(key, Value()));

    if (!position.owner)
        _invalid_parameter_noinfo();

    if (position.node == position.owner->container->head)
        _invalid_parameter_noinfo();

    return position.node->value;
}
