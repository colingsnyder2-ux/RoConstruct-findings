// from server: 78% by colin
// from server: 55% by king_originala
// roc 2008-06 005e8610  unit: RBX::Primitive  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8610
//
// 005e8610  8b442404             mov eax, dword ptr [esp + 4]
// 005e8614  53                   push ebx
// 005e8615  8bd9                 mov ebx, ecx
// 005e8617  8b0b                 mov ecx, dword ptr [ebx]
// 005e8619  55                   push ebp
// 005e861a  57                   push edi
// 005e861b  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 005e861e  7505                 jne 0x5e8625
// 005e8620  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005e8623  eb03                 jmp 0x5e8628
// 005e8625  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005e8628  8b5308               mov edx, dword ptr [ebx + 8]
// 005e862b  8b4304               mov eax, dword ptr [ebx + 4]
// 005e862e  8b7c90fc             mov edi, dword ptr [eax + edx*4 - 4]
// 005e8632  8b5314               mov edx, dword ptr [ebx + 0x14]
// 005e8635  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005e8638  8b4490fc             mov eax, dword ptr [eax + edx*4 - 4]
// 005e863c  8b5304               mov edx, dword ptr [ebx + 4]
// 005e863f  8d4b04               lea ecx, [ebx + 4]
// 005e8642  56                   push esi
// 005e8643  8d7310               lea esi, [ebx + 0x10]
// 005e8646  893caa               mov dword ptr [edx + ebp*4], edi
// 005e8649  8b16                 mov edx, dword ptr [esi]
// 005e864b  8904aa               mov dword ptr [edx + ebp*4], eax
// 005e864e  8b4104               mov eax, dword ptr [ecx + 4]
// 005e8651  6a00                 push 0
// 005e8653  48                   dec eax
// 005e8654  50                   push eax
// 005e8655  e8e6deffff           call 0x5e6540
// 005e865a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e865d  49                   dec ecx
// 005e865e  6a00                 push 0
// 005e8660  51                   push ecx
// 005e8661  8bce                 mov ecx, esi
// 005e8663  e80814fbff           call 0x599a70
// 005e8668  8b13                 mov edx, dword ptr [ebx]
// 005e866a  5e                   pop esi
// 005e866b  3b570c               cmp edx, dword ptr [edi + 0xc]
// 005e866e  7505                 jne 0x5e8675
// 005e8670  896f14               mov dword ptr [edi + 0x14], ebp
// 005e8673  eb03                 jmp 0x5e8678
// 005e8675  896f18               mov dword ptr [edi + 0x18], ebp
// 005e8678  8b0b                 mov ecx, dword ptr [ebx]
// 005e867a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e867e  5f                   pop edi
// 005e867f  5d                   pop ebp
// 005e8680  5b                   pop ebx
// 005e8681  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 005e8684  750a                 jne 0x5e8690
// 005e8686  c74014ffffffff       mov dword ptr [eax + 0x14], 0xffffffff
// 005e868d  c20400               ret 4
// 005e8690  c74018ffffffff       mov dword ptr [eax + 0x18], 0xffffffff
// 005e8697  c20400               ret 4
#include <intrin.h>

struct Edge {
    char padding[12];
    void* owner;
    int reserved;
    int firstIndex;
    int secondIndex;
};

struct EdgeArray {
    Edge** data;
    int size;
    int capacity;
    void resize(int count, Edge* const* value);
};

struct ValueArray {
    void** data;
    int size;
    int capacity;
    void resize(int count, void* const* value);
};

struct Primitive {
    void* owner;
    EdgeArray edges;
    ValueArray values;

    void remove(Edge* edge);
};

void Primitive::remove(Edge* edge)
{
    int index;
    if (owner == edge->owner)
        index = edge->firstIndex;
    else
        index = edge->secondIndex;

    Edge* lastEdge = edges.data[edges.size - 1];
    _ReadWriteBarrier();
    void* lastValue = values.data[values.size - 1];

    edges.data[index] = lastEdge;
    values.data[index] = lastValue;

    edges.resize(edges.size - 1, 0);
    values.resize(values.size - 1, 0);

    if (owner == lastEdge->owner)
        lastEdge->firstIndex = index;
    else
        lastEdge->secondIndex = index;

    if (owner == edge->owner)
        edge->firstIndex = -1;
    else
        edge->secondIndex = -1;
}
