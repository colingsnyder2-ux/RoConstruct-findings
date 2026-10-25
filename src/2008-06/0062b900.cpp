// from server: 100% by king_originala
// roc 2008-06 0062b900  unit: RBX::VExplosion::?$SignalDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b900
//
// 0062b900  53                   push ebx
// 0062b901  55                   push ebp
// 0062b902  56                   push esi
// 0062b903  8da928020000         lea ebp, [ecx + 0x228]
// 0062b909  57                   push edi
// 0062b90a  8bcd                 mov ecx, ebp
// 0062b90c  e86fc3fbff           call 0x5e7c80
// 0062b911  8bd8                 mov ebx, eax
// 0062b913  85db                 test ebx, ebx
// 0062b915  7449                 je 0x62b960
// 0062b917  33ff                 xor edi, edi
// 0062b919  8d730c               lea esi, [ebx + 0xc]
// 0062b91c  8d642400             lea esp, [esp]
// 0062b920  8b06                 mov eax, dword ptr [esi]
// 0062b922  50                   push eax
// 0062b923  e858e6f6ff           call 0x599f80
// 0062b928  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 0062b92e  6a00                 push 0
// 0062b930  6840be9400           push 0x94be40
// 0062b935  687c909200           push 0x92907c
// 0062b93a  6a00                 push 0
// 0062b93c  50                   push eax
// 0062b93d  e8845e0700           call 0x6a17c6
// 0062b942  83c418               add esp, 0x18
// 0062b945  85c0                 test eax, eax
// 0062b947  7519                 jne 0x62b962
// 0062b949  47                   inc edi
// 0062b94a  83c604               add esi, 4
// 0062b94d  83ff02               cmp edi, 2
// 0062b950  7cce                 jl 0x62b920
// 0062b952  53                   push ebx
// 0062b953  8bcd                 mov ecx, ebp
// 0062b955  e846c3fbff           call 0x5e7ca0
// 0062b95a  8bd8                 mov ebx, eax
// 0062b95c  85db                 test ebx, ebx
// 0062b95e  75b7                 jne 0x62b917
// 0062b960  33c0                 xor eax, eax
// 0062b962  5f                   pop edi
// 0062b963  5e                   pop esi
// 0062b964  5d                   pop ebp
// 0062b965  5b                   pop ebx
// 0062b966  c3                   ret 

struct PartInstance {
    char padding[0x104];
    void* instance;
};

struct GetSetImpl {
    static PartInstance* get(PartInstance*);
};

struct Node {
    char padding[0x0c];
    PartInstance* parts[2];
};

struct Geometry {
    char pad0[0x38];
    int* field38;
    int field3c;
    int f();
    Node* next(Node*);
};

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct S {
    char padding[0x228];
    Geometry geometry;
    void* f();
};

void* S::f()
{
    Geometry* g = &geometry;
    Node* node = reinterpret_cast<Node*>(g->f());

    while (node) {
        for (int i = 0; i < 2; ++i) {
            void* instance = GetSetImpl::get(node->parts[i])->instance;
            void* result = __RTDynamicCast(
                instance, 0,
                reinterpret_cast<void*>(0x92907c),
                reinterpret_cast<void*>(0x94be40), 0);
            if (result)
                return result;
        }
        node = g->next(node);
    }

    return 0;
}
