// roc 2009-12 004385d0  unit: MVCXTPPropertyGridItem::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004385d0
//
// 004385d0  56                   push esi
// 004385d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004385d5  57                   push edi
// 004385d6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004385da  3bf7                 cmp esi, edi
// 004385dc  7424                 je 0x438602
// 004385de  8bff                 mov edi, edi
// 004385e0  8bce                 mov ecx, esi
// 004385e2  ff54242c             call dword ptr [esp + 0x2c]
// 004385e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 004385ea  8d4c2434             lea ecx, [esp + 0x34]
// 004385ee  51                   push ecx
// 004385ef  50                   push eax
// 004385f0  8b442430             mov eax, dword ptr [esp + 0x30]
// 004385f4  8d0c10               lea ecx, [eax + edx]
// 004385f7  ff542428             call dword ptr [esp + 0x28]
// 004385fb  83c608               add esi, 8
// 004385fe  3bf7                 cmp esi, edi
// 00438600  75de                 jne 0x4385e0
// 00438602  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00438606  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043860a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043860e  8908                 mov dword ptr [eax], ecx
// 00438610  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438614  895004               mov dword ptr [eax + 4], edx
// 00438617  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0043861b  894808               mov dword ptr [eax + 8], ecx
// 0043861e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00438622  89500c               mov dword ptr [eax + 0xc], edx
// 00438625  8b542434             mov edx, dword ptr [esp + 0x34]
// 00438629  5f                   pop edi
// 0043862a  894810               mov dword ptr [eax + 0x10], ecx
// 0043862d  895014               mov dword ptr [eax + 0x14], edx
// 00438630  5e                   pop esi
// 00438631  c3                   ret 
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