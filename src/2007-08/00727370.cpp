// from server: 100% by colin
// roc 2007-08 00727370  unit: boost::thread_resource_error  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727370
//
// 00727370  8b542404             mov edx, dword ptr [esp + 4]
// 00727374  8b4208               mov eax, dword ptr [edx + 8]
// 00727377  56                   push esi
// 00727378  8b30                 mov esi, dword ptr [eax]
// 0072737a  897208               mov dword ptr [edx + 8], esi
// 0072737d  8b30                 mov esi, dword ptr [eax]
// 0072737f  807e2500             cmp byte ptr [esi + 0x25], 0
// 00727383  7503                 jne 0x727388
// 00727385  895604               mov dword ptr [esi + 4], edx
// 00727388  8b7204               mov esi, dword ptr [edx + 4]
// 0072738b  897004               mov dword ptr [eax + 4], esi
// 0072738e  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00727391  3b5104               cmp edx, dword ptr [ecx + 4]
// 00727394  5e                   pop esi
// 00727395  750b                 jne 0x7273a2
// 00727397  894104               mov dword ptr [ecx + 4], eax
// 0072739a  8910                 mov dword ptr [eax], edx
// 0072739c  894204               mov dword ptr [edx + 4], eax
// 0072739f  c20400               ret 4
// 007273a2  8b4a04               mov ecx, dword ptr [edx + 4]
// 007273a5  3b11                 cmp edx, dword ptr [ecx]
// 007273a7  750a                 jne 0x7273b3
// 007273a9  8901                 mov dword ptr [ecx], eax
// 007273ab  8910                 mov dword ptr [eax], edx
// 007273ad  894204               mov dword ptr [edx + 4], eax
// 007273b0  c20400               ret 4
// 007273b3  894108               mov dword ptr [ecx + 8], eax
// 007273b6  8910                 mov dword ptr [eax], edx
// 007273b8  894204               mov dword ptr [edx + 4], eax
// 007273bb  c20400               ret 4

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
