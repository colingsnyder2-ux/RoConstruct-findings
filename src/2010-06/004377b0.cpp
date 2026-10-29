// roc 2010-06 004377b0  unit: MVCXTPPropertyGridItem::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004377b0
//
// 004377b0  56                   push esi
// 004377b1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004377b5  57                   push edi
// 004377b6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004377ba  3bf7                 cmp esi, edi
// 004377bc  7424                 je 0x4377e2
// 004377be  8bff                 mov edi, edi
// 004377c0  8bce                 mov ecx, esi
// 004377c2  ff54242c             call dword ptr [esp + 0x2c]
// 004377c6  8b542424             mov edx, dword ptr [esp + 0x24]
// 004377ca  8d4c2434             lea ecx, [esp + 0x34]
// 004377ce  51                   push ecx
// 004377cf  50                   push eax
// 004377d0  8b442430             mov eax, dword ptr [esp + 0x30]
// 004377d4  8d0c10               lea ecx, [eax + edx]
// 004377d7  ff542428             call dword ptr [esp + 0x28]
// 004377db  83c608               add esi, 8
// 004377de  3bf7                 cmp esi, edi
// 004377e0  75de                 jne 0x4377c0
// 004377e2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004377e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004377ea  8b542424             mov edx, dword ptr [esp + 0x24]
// 004377ee  8908                 mov dword ptr [eax], ecx
// 004377f0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004377f4  895004               mov dword ptr [eax + 4], edx
// 004377f7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004377fb  894808               mov dword ptr [eax + 8], ecx
// 004377fe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00437802  89500c               mov dword ptr [eax + 0xc], edx
// 00437805  8b542434             mov edx, dword ptr [esp + 0x34]
// 00437809  5f                   pop edi
// 0043780a  894810               mov dword ptr [eax + 0x10], ecx
// 0043780d  895014               mov dword ptr [eax + 0x14], edx
// 00437810  5e                   pop esi
// 00437811  c3                   ret 
// copied from an identical function in another client (function ?f@@YA?AUOperation@@HPADH0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Operation {
    void (__thiscall *apply)(void *, void *, int *);
    char *object;
    int displacement;
    void *(__thiscall *get)(void *);
    int unused;
    int value;
};

Operation __cdecl f(int, char *first, int, char *last, Operation operation)
{
    while (first != last) {
        void *value = operation.get(first);
        operation.apply(operation.displacement + operation.object,
                        value, &operation.value);
        first += 8;
    }
    return operation;
}