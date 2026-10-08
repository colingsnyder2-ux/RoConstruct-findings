// from server: 100% by colin
// roc 2007-08 0053e2a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e2a0
//
// 0053e2a0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0053e2a6  85c9                 test ecx, ecx
// 0053e2a8  7407                 je 0x53e2b1
// 0053e2aa  8b01                 mov eax, dword ptr [ecx]
// 0053e2ac  8b4040               mov eax, dword ptr [eax + 0x40]
// 0053e2af  ffe0                 jmp eax
// 0053e2b1  c20800               ret 8

struct RBX_VInstance_NonFactoryProduct {
    void func_0053e2a0(int, int);
};

void RBX_VInstance_NonFactoryProduct::func_0053e2a0(int a, int b)
{
    struct VTable { char pad[0x40]; void (__thiscall *fn)(void*, int, int); };
    void* p = *(void**)((char*)this + 0xbc);
    if (p) {
        VTable* vt = *(VTable**)p;
        vt->fn(p, a, b);
    }
}
