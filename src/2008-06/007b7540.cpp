// from server: 100% by king_originala
// roc 2008-06 007b7540  unit: G3D::GFont  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7540
//
// 007b7540  56                   push esi
// 007b7541  57                   push edi
// 007b7542  8bf1                 mov esi, ecx
// 007b7544  33ff                 xor edi, edi
// 007b7546  397e04               cmp dword ptr [esi + 4], edi
// 007b7549  7e1e                 jle 0x7b7569
// 007b754b  53                   push ebx
// 007b754c  33db                 xor ebx, ebx
// 007b754e  8bff                 mov edi, edi
// 007b7550  8b06                 mov eax, dword ptr [esi]
// 007b7552  8b1403               mov edx, dword ptr [ebx + eax]
// 007b7555  8d0c03               lea ecx, [ebx + eax]
// 007b7558  8b4204               mov eax, dword ptr [edx + 4]
// 007b755b  6a00                 push 0
// 007b755d  ffd0                 call eax
// 007b755f  47                   inc edi
// 007b7560  83c32c               add ebx, 0x2c
// 007b7563  3b7e04               cmp edi, dword ptr [esi + 4]
// 007b7566  7ce8                 jl 0x7b7550
// 007b7568  5b                   pop ebx
// 007b7569  8b0e                 mov ecx, dword ptr [esi]
// 007b756b  51                   push ecx
// 007b756c  e8af07d5ff           call 0x507d20
// 007b7571  83c404               add esp, 4
// 007b7574  5f                   pop edi
// 007b7575  c70600000000         mov dword ptr [esi], 0
// 007b757b  c7460400000000       mov dword ptr [esi + 4], 0
// 007b7582  c7460800000000       mov dword ptr [esi + 8], 0
// 007b7589  5e                   pop esi
// 007b758a  c3                   ret 

extern void __cdecl alignedFree(void*);

struct Element {
    virtual void slot0();
    virtual void release(int);
    char storage[40];
};

struct S {
    Element* elements;
    int count;
    int capacity;

    void clear();
};

void S::clear()
{
    for (int i = 0; i < count; ++i)
        elements[i].release(0);

    alignedFree(elements);
    elements = 0;
    count = 0;
    capacity = 0;
}
