// from server: 100% by king_originala
// roc 2008-06 00669b60  unit: RBX::TreeStage  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669b60
//
// 00669b60  83ec08               sub esp, 8
// 00669b63  53                   push ebx
// 00669b64  55                   push ebp
// 00669b65  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00669b69  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00669b6c  56                   push esi
// 00669b6d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00669b70  33c0                 xor eax, eax
// 00669b72  57                   push edi
// 00669b73  8bf9                 mov edi, ecx
// 00669b75  89442414             mov dword ptr [esp + 0x14], eax
// 00669b79  89442410             mov dword ptr [esp + 0x10], eax
// 00669b7d  3bf0                 cmp esi, eax
// 00669b7f  740f                 je 0x669b90
// 00669b81  8bce                 mov ecx, esi
// 00669b83  e8e8d8f7ff           call 0x5e7470
// 00669b88  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669b8c  33c0                 xor eax, eax
// 00669b8e  eb04                 jmp 0x669b94
// 00669b90  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669b94  3bd8                 cmp ebx, eax
// 00669b96  7407                 je 0x669b9f
// 00669b98  8bcb                 mov ecx, ebx
// 00669b9a  e8d1d8f7ff           call 0x5e7470
// 00669b9f  8d4c2414             lea ecx, [esp + 0x14]
// 00669ba3  51                   push ecx
// 00669ba4  8d542414             lea edx, [esp + 0x14]
// 00669ba8  52                   push edx
// 00669ba9  50                   push eax
// 00669baa  8b442428             mov eax, dword ptr [esp + 0x28]
// 00669bae  50                   push eax
// 00669baf  53                   push ebx
// 00669bb0  56                   push esi
// 00669bb1  8bcf                 mov ecx, edi
// 00669bb3  e8d8f4ffff           call 0x669090
// 00669bb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00669bbc  85c0                 test eax, eax
// 00669bbe  7412                 je 0x669bd2
// 00669bc0  50                   push eax
// 00669bc1  55                   push ebp
// 00669bc2  e859f2ffff           call 0x668e20
// 00669bc7  83c408               add esp, 8
// 00669bca  84c0                 test al, al
// 00669bcc  7428                 je 0x669bf6
// 00669bce  8b442410             mov eax, dword ptr [esp + 0x10]
// 00669bd2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00669bd6  41                   inc ecx
// 00669bd7  81e101000080         and ecx, 0x80000001
// 00669bdd  7905                 jns 0x669be4
// 00669bdf  49                   dec ecx
// 00669be0  83c9fe               or ecx, 0xfffffffe
// 00669be3  41                   inc ecx
// 00669be4  8b548d0c             mov edx, dword ptr [ebp + ecx*4 + 0xc]
// 00669be8  52                   push edx
// 00669be9  55                   push ebp
// 00669bea  50                   push eax
// 00669beb  8bcf                 mov ecx, edi
// 00669bed  e84efdffff           call 0x669940
// 00669bf2  c6471401             mov byte ptr [edi + 0x14], 1
// 00669bf6  5f                   pop edi
// 00669bf7  5e                   pop esi
// 00669bf8  5d                   pop ebp
// 00669bf9  5b                   pop ebx
// 00669bfa  83c408               add esp, 8
// 00669bfd  c20400               ret 4

struct Ball {
    int func_005e7470();
};

struct Edge {
    char padding[0x0c];
    Ball* endpoints[2];
};

bool __cdecl compatible(Edge* edge, Edge* other);

struct TreeStage {
    char padding[0x14];
    bool changed;

    void reconcile(Ball* left, Ball* right, int leftDepth, int rightDepth,
                   void* context0, void* context1);
    void detach(Edge* other, Edge* edge, Ball* endpoint);
    void update(Edge* edge);
};

void TreeStage::update(Edge* edge)
{
    Ball* left = edge->endpoints[0];
    Ball* right = edge->endpoints[1];

    struct Context {
        Edge* other;
        int side;
    } context;

    context.side = 0;
    context.other = 0;

    int leftDepth = left ? left->func_005e7470() : 0;
    int rightDepth = right ? right->func_005e7470() : 0;

    reconcile(left, right, leftDepth, rightDepth,
              &context.other, &context.side);

    if (!context.other || compatible(edge, context.other)) {
        detach(context.other, edge,
               edge->endpoints[(context.side + 1) % 2]);
        changed = true;
    }
}
