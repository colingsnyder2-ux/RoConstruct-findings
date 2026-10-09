// roc 2007-03 00727960  unit: seg_00720000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00727960
//
// 00727960  8b542404             mov edx, dword ptr [esp + 4]
// 00727964  8b4208               mov eax, dword ptr [edx + 8]
// 00727967  56                   push esi
// 00727968  8b30                 mov esi, dword ptr [eax]
// 0072796a  897208               mov dword ptr [edx + 8], esi
// 0072796d  8b30                 mov esi, dword ptr [eax]
// 0072796f  807e2500             cmp byte ptr [esi + 0x25], 0
// 00727973  7503                 jne 0x727978
// 00727975  895604               mov dword ptr [esi + 4], edx
// 00727978  8b7204               mov esi, dword ptr [edx + 4]
// 0072797b  897004               mov dword ptr [eax + 4], esi
// 0072797e  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00727981  3b5104               cmp edx, dword ptr [ecx + 4]
// 00727984  5e                   pop esi
// 00727985  750b                 jne 0x727992
// 00727987  894104               mov dword ptr [ecx + 4], eax
// 0072798a  8910                 mov dword ptr [eax], edx
// 0072798c  894204               mov dword ptr [edx + 4], eax
// 0072798f  c20400               ret 4
// 00727992  8b4a04               mov ecx, dword ptr [edx + 4]
// 00727995  3b11                 cmp edx, dword ptr [ecx]
// 00727997  750a                 jne 0x7279a3
// 00727999  8901                 mov dword ptr [ecx], eax
// 0072799b  8910                 mov dword ptr [eax], edx
// 0072799d  894204               mov dword ptr [edx + 4], eax
// 007279a0  c20400               ret 4
// 007279a3  894108               mov dword ptr [ecx + 8], eax
// 007279a6  8910                 mov dword ptr [eax], edx
// 007279a8  894204               mov dword ptr [edx + 4], eax
// 007279ab  c20400               ret 4
// copied from an identical function in another client (function ?insert@S@ns_ROCX00000b@@QAEXPAUNode@2@@Z)

namespace ns_ROCX00000b {
struct Node {
    Node* next;
    Node* prev;
    Node* parent;
    char pad[0x25 - 0x0C];
    char color;
};

struct S {
    void insert(Node*);
};

void S::insert(Node* val)
{
    Node* pos = *(Node**)((char*)val + 8);
    Node* next = pos->next;
    *(Node**)((char*)val + 8) = next;
    Node* n = pos->next;
    if (n->color == 0)
        n->prev = val;
    Node* p = *(Node**)((char*)val + 4);
    *(Node**)((char*)pos + 4) = p;
    Node* h = *(Node**)((char*)this + 0x18);
    if (val == h->prev) {
        h->prev = pos;
        pos->next = val;
        val->prev = pos;
        return;
    }
    Node* q = *(Node**)((char*)val + 4);
    if (val == q->next) {
        q->next = pos;
        pos->next = val;
        val->prev = pos;
        return;
    }
    q->parent = pos;
    pos->next = val;
    val->prev = pos;
}
}
