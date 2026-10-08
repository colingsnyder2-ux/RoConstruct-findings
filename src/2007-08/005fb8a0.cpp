// from server: 81% by colin
// roc 2007-08 005fb8a0  unit: RBX::AnchorTool  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb8a0
//
// 005fb8a0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005fb8a3  85c0                 test eax, eax
// 005fb8a5  742b                 je 0x5fb8d2
// 005fb8a7  6a00                 push 0
// 005fb8a9  68e88e8900           push 0x898ee8
// 005fb8ae  684c1f8800           push 0x881f4c
// 005fb8b3  6a00                 push 0
// 005fb8b5  50                   push eax
// 005fb8b6  e87b540300           call 0x630d36
// 005fb8bb  83c414               add esp, 0x14
// 005fb8be  85c0                 test eax, eax
// 005fb8c0  7410                 je 0x5fb8d2
// 005fb8c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fb8c6  8b10                 mov edx, dword ptr [eax]
// 005fb8c8  8b5210               mov edx, dword ptr [edx + 0x10]
// 005fb8cb  6a01                 push 1
// 005fb8cd  51                   push ecx
// 005fb8ce  8bc8                 mov ecx, eax
// 005fb8d0  ffd2                 call edx
// 005fb8d2  c20400               ret 4

struct AnchorTool {
    char pad[0x1c];
    void* m_p;
    void f(void* arg);
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);

void AnchorTool::f(void* arg)
{
    void* p = m_p;
    if (p) {
        void* r = sub_630d36(p, 0, (void*)0x881f4c, (void*)0x898ee8, 0);
        if (r) {
            void** vt = *(void***)r;
            void (*fn)(void*, void*) = (void (*)(void*, void*))vt[4];
            fn(r, arg);
        }
    }
}
