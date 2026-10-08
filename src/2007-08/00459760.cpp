// from server: 59% by colin
// roc 2007-08 00459760  unit: RBX::VInstance::?$NonFactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459760
//
// 00459760  8b442408             mov eax, dword ptr [esp + 8]
// 00459764  8b4804               mov ecx, dword ptr [eax + 4]
// 00459767  8b10                 mov edx, dword ptr [eax]
// 00459769  56                   push esi
// 0045976a  57                   push edi
// 0045976b  51                   push ecx
// 0045976c  ffd2                 call edx
// 0045976e  8bf0                 mov esi, eax
// 00459770  8b442410             mov eax, dword ptr [esp + 0x10]
// 00459774  83c404               add esp, 4
// 00459777  b916000000           mov ecx, 0x16
// 0045977c  8bf8                 mov edi, eax
// 0045977e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00459780  5f                   pop edi
// 00459781  5e                   pop esi
// 00459782  c3                   ret 

struct S {
    void* f(void* a, void* b);
};

void* S::f(void* a, void* b)
{
    void** vt = *(void***)b;
    void* (*fn)(void*) = (void* (*)(void*))vt[1];
    void* src = fn(*(void**)((char*)b + 4));
    void* dst = a;
    int* d = (int*)dst;
    int* s = (int*)src;
    for (int i = 0; i < 0x16; i++)
        d[i] = s[i];
    return dst;
}
