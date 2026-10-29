// roc 2009-06 004368d0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004368d0
//
// 004368d0  56                   push esi
// 004368d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004368d5  57                   push edi
// 004368d6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004368da  3bf7                 cmp esi, edi
// 004368dc  7424                 je 0x436902
// 004368de  8bff                 mov edi, edi
// 004368e0  8bce                 mov ecx, esi
// 004368e2  ff54242c             call dword ptr [esp + 0x2c]
// 004368e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 004368ea  8d4c2434             lea ecx, [esp + 0x34]
// 004368ee  51                   push ecx
// 004368ef  50                   push eax
// 004368f0  8b442430             mov eax, dword ptr [esp + 0x30]
// 004368f4  8d0c10               lea ecx, [eax + edx]
// 004368f7  ff542428             call dword ptr [esp + 0x28]
// 004368fb  83c608               add esi, 8
// 004368fe  3bf7                 cmp esi, edi
// 00436900  75de                 jne 0x4368e0
// 00436902  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00436906  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043690a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043690e  8908                 mov dword ptr [eax], ecx
// 00436910  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00436914  895004               mov dword ptr [eax + 4], edx
// 00436917  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0043691b  894808               mov dword ptr [eax + 8], ecx
// 0043691e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00436922  89500c               mov dword ptr [eax + 0xc], edx
// 00436925  8b542434             mov edx, dword ptr [esp + 0x34]
// 00436929  5f                   pop edi
// 0043692a  894810               mov dword ptr [eax + 0x10], ecx
// 0043692d  895014               mov dword ptr [eax + 0x14], edx
// 00436930  5e                   pop esi
// 00436931  c3                   ret 
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