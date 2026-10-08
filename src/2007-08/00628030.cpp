// from server: 47% by colin
// roc 2007-08 00628030  unit: RBX::AssemblyStage  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628030
//
// 00628030  56                   push esi
// 00628031  8b742408             mov esi, dword ptr [esp + 8]
// 00628035  8b06                 mov eax, dword ptr [esi]
// 00628037  8b500c               mov edx, dword ptr [eax + 0xc]
// 0062803a  57                   push edi
// 0062803b  8bf9                 mov edi, ecx
// 0062803d  8bce                 mov ecx, esi
// 0062803f  ffd2                 call edx
// 00628041  85c0                 test eax, eax
// 00628043  7511                 jne 0x628056
// 00628045  8d44240c             lea eax, [esp + 0xc]
// 00628049  50                   push eax
// 0062804a  8d4f1c               lea ecx, [edi + 0x1c]
// 0062804d  89742410             mov dword ptr [esp + 0x10], esi
// 00628051  e8dadafdff           call 0x605b30
// 00628056  56                   push esi
// 00628057  8bcf                 mov ecx, edi
// 00628059  e862f1ffff           call 0x6271c0
// 0062805e  5f                   pop edi
// 0062805f  5e                   pop esi
// 00628060  c20400               ret 4

struct Assembly;
struct Primitive;

struct AssemblyStage {
    char pad[0x1c];
    void* field_1c;
    void onEngineChanged(Assembly* a);
    void onFixedAssemblyRootAdded(Assembly* a);
};

struct PrimitiveVtbl {
    char pad[0xc];
    int (__stdcall *fn)(Primitive*);
};

struct Primitive {
    PrimitiveVtbl* vtbl;
};

extern "C" void __stdcall sub_605b30(void* container, Assembly** value);

void AssemblyStage::onEngineChanged(Assembly* a) {
    Primitive* p = (Primitive*)a;
    if (p->vtbl->fn(p) == 0) {
        field_1c = a;
        sub_605b30(&field_1c, &a);
    }
    onFixedAssemblyRootAdded(a);
}
