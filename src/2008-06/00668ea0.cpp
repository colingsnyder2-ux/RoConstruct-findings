// from server: 100% by king_originala
// roc 2008-06 00668ea0  unit: RBX::JointStage  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668ea0
//
// 00668ea0  53                   push ebx
// 00668ea1  56                   push esi
// 00668ea2  57                   push edi
// 00668ea3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00668ea7  8bcf                 mov ecx, edi
// 00668ea9  e8e2ecf7ff           call 0x5e7b90
// 00668eae  8bf0                 mov esi, eax
// 00668eb0  85f6                 test esi, esi
// 00668eb2  742f                 je 0x668ee3
// 00668eb4  807e2400             cmp byte ptr [esi + 0x24], 0
// 00668eb8  741b                 je 0x668ed5
// 00668eba  8b460c               mov eax, dword ptr [esi + 0xc]
// 00668ebd  3bf8                 cmp edi, eax
// 00668ebf  7505                 jne 0x668ec6
// 00668ec1  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00668ec4  eb02                 jmp 0x668ec8
// 00668ec6  8bd8                 mov ebx, eax
// 00668ec8  56                   push esi
// 00668ec9  e8c2e5f7ff           call 0x5e7490
// 00668ece  83c404               add esp, 4
// 00668ed1  3bf8                 cmp edi, eax
// 00668ed3  7416                 je 0x668eeb
// 00668ed5  56                   push esi
// 00668ed6  8bcf                 mov ecx, edi
// 00668ed8  e8c3ecf7ff           call 0x5e7ba0
// 00668edd  8bf0                 mov esi, eax
// 00668edf  85f6                 test esi, esi
// 00668ee1  75d1                 jne 0x668eb4
// 00668ee3  5f                   pop edi
// 00668ee4  5e                   pop esi
// 00668ee5  33c0                 xor eax, eax
// 00668ee7  5b                   pop ebx
// 00668ee8  c21000               ret 0x10
// 00668eeb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00668eef  8b07                 mov eax, dword ptr [edi]
// 00668ef1  85c0                 test eax, eax
// 00668ef3  740e                 je 0x668f03
// 00668ef5  56                   push esi
// 00668ef6  50                   push eax
// 00668ef7  e824ffffff           call 0x668e20
// 00668efc  83c408               add esp, 8
// 00668eff  84c0                 test al, al
// 00668f01  740c                 je 0x668f0f
// 00668f03  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00668f07  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00668f0b  8937                 mov dword ptr [edi], esi
// 00668f0d  8908                 mov dword ptr [eax], ecx
// 00668f0f  5f                   pop edi
// 00668f10  5e                   pop esi
// 00668f11  8bc3                 mov eax, ebx
// 00668f13  5b                   pop ebx
// 00668f14  c21000               ret 0x10

struct Edge;
struct Node {
    Edge* first();
    Edge* next(Edge*);
};

struct Stage;

struct Edge {
    char padding0[0x0c];
    Node* endpoint0;
    Node* endpoint1;
    char padding1[0x10];
    bool active;
};

Node* __cdecl selectNode(Edge*);
bool __cdecl preferEdge(Edge*, Edge*);

Node* __stdcall findEdge(Stage* stage, Node* node,
                         Edge** selectedEdge, Stage** selectedStage)
{
    Edge* edge = node->first();
    Node* other;

    while (edge) {
        if (edge->active) {
            other = node == edge->endpoint0
                ? edge->endpoint1 : edge->endpoint0;
            if (node == selectNode(edge))
                break;
        }
        edge = node->next(edge);
    }

    if (!edge)
        return 0;

    if (!*selectedEdge || preferEdge(*selectedEdge, edge)) {
        *selectedEdge = edge;
        *selectedStage = stage;
    }

    return other;
}
