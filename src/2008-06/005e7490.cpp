// from server: 100% by king_originala
// roc 2008-06 005e7490  unit: RBX::Ball  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7490
//
// 005e7490  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e7494  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005e7497  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005e749a  85c9                 test ecx, ecx
// 005e749c  7413                 je 0x5e74b1
// 005e749e  8b90a0000000         mov edx, dword ptr [eax + 0xa0]
// 005e74a4  8b5214               mov edx, dword ptr [edx + 0x14]
// 005e74a7  3b91a0000000         cmp edx, dword ptr [ecx + 0xa0]
// 005e74ad  7402                 je 0x5e74b1
// 005e74af  8bc1                 mov eax, ecx
// 005e74b1  c3                   ret 

struct Link {
    char pad[20];
    Link* next;
};

struct Node {
    char pad[160];
    Link* link;
};

struct Pair {
    char pad[12];
    Node* first;
    Node* second;
};

Node* __cdecl func_005e7490(Pair* p)
{
    Node* result = p->first;
    Node* other = p->second;
    if (other && result->link->next != other->link)
        result = other;
    return result;
}
