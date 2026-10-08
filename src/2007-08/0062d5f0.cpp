// from server: 97% by colin
// roc 2007-08 0062d5f0  unit: RBX::Flying  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d5f0
//
// 0062d5f0  56                   push esi
// 0062d5f1  57                   push edi
// 0062d5f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062d5f6  57                   push edi
// 0062d5f7  8bf1                 mov esi, ecx
// 0062d5f9  e86291ffff           call 0x626760
// 0062d5fe  3bc6                 cmp eax, esi
// 0062d600  7516                 jne 0x62d618
// 0062d602  8b07                 mov eax, dword ptr [edi]
// 0062d604  8b5004               mov edx, dword ptr [eax + 4]
// 0062d607  6a03                 push 3
// 0062d609  8bcf                 mov ecx, edi
// 0062d60b  ffd2                 call edx
// 0062d60d  d80de84c7c00         fmul dword ptr [0x7c4ce8]
// 0062d613  8bc6                 mov eax, esi
// 0062d615  d95e28               fstp dword ptr [esi + 0x28]
// 0062d618  5f                   pop edi
// 0062d619  5e                   pop esi
// 0062d61a  c20400               ret 4

struct FlyingVtable {
    void* pad0;
    float (__thiscall *getValue)(void*, int);
};

struct Flying {
    FlyingVtable* vtable;
    char pad[0x24];
    float field_28;
    Flying* sub_626760(Flying* other);
    Flying* method(Flying* other);
};

Flying* Flying::method(Flying* other)
{
    Flying* result = this->sub_626760(other);
    if (result == this) {
        float v = other->vtable->getValue(other, 3);
        this->field_28 = v * 0.0f;
        return this;
    }
    return result;
}
