// from server: 57% by atomic.potato
// roc 2009-06 006b8090  unit: RBX::NewNullTool  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8090
//
// 006b8090  83ec0c               sub esp, 0xc
// 006b8093  53                   push ebx
// 006b8094  56                   push esi
// 006b8095  8bf1                 mov esi, ecx
// 006b8097  33db                 xor ebx, ebx
// 006b8099  385e34               cmp byte ptr [esi + 0x34], bl
// 006b809c  7462                 je 0x6b8100
// 006b809e  8b4614               mov eax, dword ptr [esi + 0x14]
// 006b80a1  50                   push eax
// 006b80a2  e8595ff7ff           call 0x62e000
// 006b80a7  83c404               add esp, 4
// 006b80aa  3bc3                 cmp eax, ebx
// 006b80ac  7452                 je 0x6b8100
// 006b80ae  8d4c2408             lea ecx, [esp + 8]
// 006b80b2  51                   push ecx
// 006b80b3  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 006b80b9  885c240c             mov byte ptr [esp + 0xc], bl
// 006b80bd  885c240d             mov byte ptr [esp + 0xd], bl
// 006b80c1  885c240e             mov byte ptr [esp + 0xe], bl
// 006b80c5  885c240f             mov byte ptr [esp + 0xf], bl
// 006b80c9  885c2410             mov byte ptr [esp + 0x10], bl
// 006b80cd  885c2411             mov byte ptr [esp + 0x11], bl
// 006b80d1  885c2412             mov byte ptr [esp + 0x12], bl
// 006b80d5  885c2413             mov byte ptr [esp + 0x13], bl
// 006b80d9  885c2414             mov byte ptr [esp + 0x14], bl
// 006b80dd  e8bea0faff           call 0x6621a0
// 006b80e2  8d4c2408             lea ecx, [esp + 8]
// 006b80e6  e8e52cf7ff           call 0x62add0
// 006b80eb  84c0                 test al, al
// 006b80ed  7511                 jne 0x6b8100
// 006b80ef  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b80f3  83c638               add esi, 0x38
// 006b80f6  56                   push esi
// 006b80f7  52                   push edx
// 006b80f8  e883e9faff           call 0x666a80
// 006b80fd  83c408               add esp, 8
// 006b8100  5e                   pop esi
// 006b8101  5b                   pop ebx
// 006b8102  83c40c               add esp, 0xc
// 006b8105  c20400               ret 4

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x44]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

extern "C" RBX::ServiceProvider* __cdecl func_0062e000(RBX::Instance* p);
extern "C" void __cdecl func_006621a0(void* self, char* out);
extern "C" bool __cdecl func_0062add0(void* self);
extern "C" void __cdecl func_00666a80(void* a, void* b);

struct NewNullTool {
    char pad0[0x14];
    RBX::Instance* field14;
    char pad18[0x1c];
    char field34;
    char pad35[3];
    char field38;
    void func(char* arg);
};

void NewNullTool::func(char* arg) {
    if (field34 != 0) {
        RBX::Instance* p = field14;
        RBX::ServiceProvider* sp = func_0062e000(p);
        if (sp != 0) {
            char buf[12];
            buf[0] = 0; buf[1] = 0; buf[2] = 0; buf[3] = 0;
            buf[4] = 0; buf[5] = 0; buf[6] = 0; buf[7] = 0;
            buf[8] = 0;
            func_006621a0(*(void**)((char*)sp + 0x8c), buf);
            if (!func_0062add0(buf)) {
                func_00666a80(arg, &field38);
            }
        }
    }
}
