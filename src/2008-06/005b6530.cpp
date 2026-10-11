// from server: 72% by colin
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

struct Instance {
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct DropperTool {
    char pad[0x18];
    Instance* field18;
    void method(int);
};

extern "C" {
    Instance* __stdcall func_00615d90(Instance*, int, const char*);
    void __stdcall func_00430e10(int);
    ServiceProvider* __stdcall func_005807b0(Instance*);
    void __stdcall func_005bd820(void*);
}

int g_976fc0;
char g_976fa0[0x20];
char g_97bee0[] = "D$ P";

void DropperTool::method(int a) {
    Instance* p = func_00615d90(field18, 0, g_97bee0);
    if (p) {
        int v = *(int*)((char*)p + 0x1e4);
        if (g_976fc0 != v) {
            g_976fc0 = v;
            func_00430e10(v);
        }
        void* q = func_005807b0(*(Instance**)((char*)this + 0x18));
        func_005bd820(q);
    }
}
