// from server: 71% by colin
// from server: 61% by king_originala
// roc 2008-06 005e8990  unit: RBX::Primitive  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8990
//
// 005e8990  56                   push esi
// 005e8991  8bf1                 mov esi, ecx
// 005e8993  8b0e                 mov ecx, dword ptr [esi]
// 005e8995  8b4608               mov eax, dword ptr [esi + 8]
// 005e8998  57                   push edi
// 005e8999  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e899d  3b4f0c               cmp ecx, dword ptr [edi + 0xc]
// 005e89a0  7505                 jne 0x5e89a7
// 005e89a2  894714               mov dword ptr [edi + 0x14], eax
// 005e89a5  eb03                 jmp 0x5e89aa
// 005e89a7  894718               mov dword ptr [edi + 0x18], eax
// 005e89aa  8d54240c             lea edx, [esp + 0xc]
// 005e89ae  52                   push edx
// 005e89af  8d4e04               lea ecx, [esi + 4]
// 005e89b2  e889dcffff           call 0x5e6640
// 005e89b7  8b06                 mov eax, dword ptr [esi]
// 005e89b9  3b470c               cmp eax, dword ptr [edi + 0xc]
// 005e89bc  7519                 jne 0x5e89d7
// 005e89be  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005e89c1  8d44240c             lea eax, [esp + 0xc]
// 005e89c5  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e89c9  50                   push eax
// 005e89ca  8d4e10               lea ecx, [esi + 0x10]
// 005e89cd  e8be17fbff           call 0x59a190
// 005e89d2  5f                   pop edi
// 005e89d3  5e                   pop esi
// 005e89d4  c20400               ret 4
// 005e89d7  8b570c               mov edx, dword ptr [edi + 0xc]
// 005e89da  8d44240c             lea eax, [esp + 0xc]
// 005e89de  50                   push eax
// 005e89df  8d4e10               lea ecx, [esi + 0x10]
// 005e89e2  89542410             mov dword ptr [esp + 0x10], edx
// 005e89e6  e8a517fbff           call 0x59a190
// 005e89eb  5f                   pop edi
// 005e89ec  5e                   pop esi
// 005e89ed  c20400               ret 4
#include <intrin.h>

struct Owner;

struct Edge
{
    char padding[12];
    Owner* first;
    Owner* second;
    int firstIndex;
    int secondIndex;
};

struct EdgeVector
{
    Edge** data;
    int size;
    int capacity;

    void push_back(Edge* const& value);
};

struct OwnerVector
{
    Owner** data;
    int size;
    int capacity;

    void push_back(Owner* const& value);
};

struct Primitive
{
    Owner* owner;
    EdgeVector edges;
    OwnerVector neighbors;

    void addEdge(Edge* edge);
};

void Primitive::addEdge(Edge* edge)
{
    Edge* saved = edge;
    int index = edges.size;
    _ReadWriteBarrier();

    if (owner == saved->first)
        saved->firstIndex = index;
    else
        saved->secondIndex = index;

    edges.push_back(edge);

    if (owner == saved->first)
        neighbors.push_back(static_cast<Owner*>(static_cast<void*>(saved->second)));
    else
        neighbors.push_back(static_cast<Owner*>(static_cast<void*>(saved->first)));
}
