// from server: 100% by tester
// roc 2009-06 0062e580  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062e580
//
// 0062e580  57                   push edi
// 0062e581  8bf9                 mov edi, ecx
// 0062e583  57                   push edi
// 0062e584  e877faffff           call 0x62e000
// 0062e589  83c404               add esp, 4
// 0062e58c  85c0                 test eax, eax
// 0062e58e  7440                 je 0x62e5d0
// 0062e590  56                   push esi
// 0062e591  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 0062e597  85f6                 test esi, esi
// 0062e599  7434                 je 0x62e5cf
// 0062e59b  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0062e5a0  7419                 je 0x62e5bb
// 0062e5a2  8b06                 mov eax, dword ptr [esi]
// 0062e5a4  8b5010               mov edx, dword ptr [eax + 0x10]
// 0062e5a7  8bce                 mov ecx, esi
// 0062e5a9  ffd2                 call edx
// 0062e5ab  8b06                 mov eax, dword ptr [esi]
// 0062e5ad  8b5008               mov edx, dword ptr [eax + 8]
// 0062e5b0  6a01                 push 1
// 0062e5b2  8bce                 mov ecx, esi
// 0062e5b4  ffd2                 call edx
// 0062e5b6  5e                   pop esi
// 0062e5b7  5f                   pop edi
// 0062e5b8  c20400               ret 4
// 0062e5bb  80bf2402000000       cmp byte ptr [edi + 0x224], 0
// 0062e5c2  750b                 jne 0x62e5cf
// 0062e5c4  8b06                 mov eax, dword ptr [esi]
// 0062e5c6  8b5008               mov edx, dword ptr [eax + 8]
// 0062e5c9  6a00                 push 0
// 0062e5cb  8bce                 mov ecx, esi
// 0062e5cd  ffd2                 call edx
// 0062e5cf  5e                   pop esi
// 0062e5d0  5f                   pop edi
// 0062e5d1  c20400               ret 4

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_005a32e0(RBX::Instance* p);

struct Workspace {
    char pad0[0x224];
    bool flag3f8;
    void method(bool);
};

void Workspace::method(bool b) {
    RBX::ServiceProvider* sp = func_005a32e0((RBX::Instance*)this);
    if (!sp) return;
    RBX::Instance* inst = *(RBX::Instance**)((char*)sp + 0x8c);
    if (!inst) return;
    if (b) {
        void** vt = *(void***)inst;
        ((void (__thiscall*)(RBX::Instance*))vt[4])(inst);
        void** vt2 = *(void***)inst;
        ((void (__thiscall*)(RBX::Instance*, int))vt2[2])(inst, 1);
    } else {
        if (this->flag3f8) return;
        void** vt = *(void***)inst;
        ((void (__thiscall*)(RBX::Instance*, int))vt[2])(inst, 0);
    }
}
