// from server: 54% by colin
// roc 2007-08 005b88f0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b88f0
//
// 005b88f0  56                   push esi
// 005b88f1  8d44240c             lea eax, [esp + 0xc]
// 005b88f5  8bf1                 mov esi, ecx
// 005b88f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b88fb  50                   push eax
// 005b88fc  51                   push ecx
// 005b88fd  e87ef5ffff           call 0x5b7e80
// 005b8902  8bc8                 mov ecx, eax
// 005b8904  e8c7f7ffff           call 0x5b80d0
// 005b8909  84c0                 test al, al
// 005b890b  741a                 je 0x5b8927
// 005b890d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b8910  8b11                 mov edx, dword ptr [ecx]
// 005b8912  8b5208               mov edx, dword ptr [edx + 8]
// 005b8915  8d44240c             lea eax, [esp + 0xc]
// 005b8919  50                   push eax
// 005b891a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b891e  50                   push eax
// 005b891f  ffd2                 call edx
// 005b8921  b001                 mov al, 1
// 005b8923  5e                   pop esi
// 005b8924  c20800               ret 8
// 005b8927  32c0                 xor al, al
// 005b8929  5e                   pop esi
// 005b892a  c20800               ret 8

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    bool equalValues(const void* a, const void* b) const;
};

extern "C" void* __cdecl func_005b7e80(void* a, void* b);
extern "C" bool __cdecl func_005b80d0(void* p);

bool SurfaceEnumPropDescriptor::equalValues(const void* a, const void* b) const
{
    void* va = (void*)a;
    void* r = func_005b7e80(&va, (void*)b);
    if (func_005b80d0(r)) {
        void* g = getset;
        void** vt = *(void***)g;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
        fn(g, &va, (void*)b);
        return true;
    }
    return false;
}
