// from server: 100% by tester
// roc 2008-06 00557490  unit: RBX::VInstance::?$NonFactoryProduct  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557490
//
// 00557490  8b8904010000         mov ecx, dword ptr [ecx + 0x104]
// 00557496  85c9                 test ecx, ecx
// 00557498  7407                 je 0x5574a1
// 0055749a  8b01                 mov eax, dword ptr [ecx]
// 0055749c  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0055749f  ffe0                 jmp eax
// 005574a1  c20800               ret 8

struct RBX_VInstance_NonFactoryProduct {
    void func_0053e2a0(int, int);
};

void RBX_VInstance_NonFactoryProduct::func_0053e2a0(int a, int b)
{
    struct VTable { char pad[0x3c]; void (__thiscall *fn)(void*, int, int); };
    void* p = *(void**)((char*)this + 0x104);
    if (p) {
        VTable* vt = *(VTable**)p;
        vt->fn(p, a, b);
    }
}
