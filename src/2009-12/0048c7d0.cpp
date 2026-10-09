// roc 2009-12 0048c7d0  unit: G3D::Shader  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048c7d0
//
// 0048c7d0  6a20                 push 0x20
// 0048c7d2  e889703600           call 0x7f3860
// 0048c7d7  83c404               add esp, 4
// 0048c7da  85c0                 test eax, eax
// 0048c7dc  7402                 je 0x48c7e0
// 0048c7de  8900                 mov dword ptr [eax], eax
// 0048c7e0  8d4804               lea ecx, [eax + 4]
// 0048c7e3  85c9                 test ecx, ecx
// 0048c7e5  7402                 je 0x48c7e9
// 0048c7e7  8901                 mov dword ptr [ecx], eax
// 0048c7e9  c3                   ret 
// copied from an identical function in another client (function ?makeNode@ns_ROCX00001b@@YAXXZ)

namespace ns_ROCX00001b {
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
