// from server: 75% by colin
// roc 2007-08 005b8850  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8850
//
// 005b8850  56                   push esi
// 005b8851  8d44240c             lea eax, [esp + 0xc]
// 005b8855  8bf1                 mov esi, ecx
// 005b8857  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b885b  50                   push eax
// 005b885c  51                   push ecx
// 005b885d  e81ef6ffff           call 0x5b7e80
// 005b8862  8bc8                 mov ecx, eax
// 005b8864  e8373a0200           call 0x5dc2a0
// 005b8869  84c0                 test al, al
// 005b886b  741a                 je 0x5b8887
// 005b886d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b8870  8b11                 mov edx, dword ptr [ecx]
// 005b8872  8b5208               mov edx, dword ptr [edx + 8]
// 005b8875  8d44240c             lea eax, [esp + 0xc]
// 005b8879  50                   push eax
// 005b887a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b887e  50                   push eax
// 005b887f  ffd2                 call edx
// 005b8881  b001                 mov al, 1
// 005b8883  5e                   pop esi
// 005b8884  c20800               ret 8
// 005b8887  32c0                 xor al, al
// 005b8889  5e                   pop esi
// 005b888a  c20800               ret 8

struct DescribedBase;
struct Variant;

struct EnumPropertyDescriptor {
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    void* getset;
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

extern "C" void* __stdcall sub_005b7e80(void* a, void* b);
extern "C" bool __stdcall sub_005dc2a0(void* p);

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const
{
    void* v;
    void* r = sub_005b7e80((void*)a, &v);
    if (sub_005dc2a0(r)) {
        void* g = getset;
        void** vt = *(void***)g;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
        fn(g, (void*)b, &v);
        return true;
    }
    return false;
}
