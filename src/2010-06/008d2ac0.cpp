// roc 2010-06 008d2ac0  unit: Ogre::VisualEngine  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d2ac0
//
// 008d2ac0  6a20                 push 0x20
// 008d2ac2  e8d94eedff           call 0x7a79a0
// 008d2ac7  83c404               add esp, 4
// 008d2aca  85c0                 test eax, eax
// 008d2acc  7402                 je 0x8d2ad0
// 008d2ace  8900                 mov dword ptr [eax], eax
// 008d2ad0  8d4804               lea ecx, [eax + 4]
// 008d2ad3  85c9                 test ecx, ecx
// 008d2ad5  7402                 je 0x8d2ad9
// 008d2ad7  8901                 mov dword ptr [ecx], eax
// 008d2ad9  c3                   ret 
// copied from an identical function in another client (function ?makeNode@ns_ROCX000017@@YAXXZ)

namespace ns_ROCX000017 {
extern "C" void* __cdecl operator_new(unsigned int size);

struct Node {
    Node* next;
    Node* prev;
};

void makeNode()
{
    Node* p = (Node*)operator_new(0x20);
    if (p) {
        p->next = p;
    }
    Node* q = (Node*)((char*)p + 4);
    if (q) {
        q->next = p;
    }
}
}
