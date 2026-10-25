// from server: 100% by king_originala
// roc 2008-06 005b6530  unit: RBX::DropperTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6530
//
// 005b6530  8b442404             mov eax, dword ptr [esp + 4]
// 005b6534  56                   push esi
// 005b6535  68e0be9700           push 0x97bee0
// 005b653a  6a00                 push 0
// 005b653c  50                   push eax
// 005b653d  8bf1                 mov esi, ecx
// 005b653f  e84cf80500           call 0x615d90
// 005b6544  85c0                 test eax, eax
// 005b6546  7433                 je 0x5b657b
// 005b6548  8b80e4010000         mov eax, dword ptr [eax + 0x1e4]
// 005b654e  3905c06f9700         cmp dword ptr [0x976fc0], eax
// 005b6554  7410                 je 0x5b6566
// 005b6556  50                   push eax
// 005b6557  b9a06f9700           mov ecx, 0x976fa0
// 005b655c  a3c06f9700           mov dword ptr [0x976fc0], eax
// 005b6561  e8aaa8e7ff           call 0x430e10
// 005b6566  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005b6569  6a04                 push 4
// 005b656b  51                   push ecx
// 005b656c  e83fa2fcff           call 0x5807b0
// 005b6571  83c404               add esp, 4
// 005b6574  8bc8                 mov ecx, eax
// 005b6576  e8a5720000           call 0x5bd820
// 005b657b  33c0                 xor eax, eax
// 005b657d  5e                   pop esi
// 005b657e  c20400               ret 4

namespace RBX {
    struct Instance;
    struct ServiceProvider {
        void action(int);
    };
}

struct CastResult {
    char padding[0x1e4];
    int value;
};

struct GlobalState {
    char padding[0x20];
    int value;
    void notify(int);
};

extern "C" CastResult* __stdcall castObject(void*, int, const void*);
RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct S {
    char padding[0x18];
    RBX::Instance* instance;
    int f(void*);
};

int S::f(void* object)
{
    CastResult* result = castObject(object, 0, (const void*)0x97bee0);
    if (result) {
        GlobalState* state = (GlobalState*)0x976fa0;
        int value = result->value;
        if (state->value != value) {
            state->value = value;
            state->notify(value);
        }
        func_005807b0(instance)->action(4);
    }
    return 0;
}
