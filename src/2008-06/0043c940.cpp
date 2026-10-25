// from server: 100% by king_originala
// roc 2008-06 0043c940  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c940
//
// 0043c940  56                   push esi
// 0043c941  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043c945  57                   push edi
// 0043c946  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043c94a  3bf7                 cmp esi, edi
// 0043c94c  7424                 je 0x43c972
// 0043c94e  8bff                 mov edi, edi
// 0043c950  8bce                 mov ecx, esi
// 0043c952  ff54242c             call dword ptr [esp + 0x2c]
// 0043c956  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043c95a  8d4c2434             lea ecx, [esp + 0x34]
// 0043c95e  51                   push ecx
// 0043c95f  50                   push eax
// 0043c960  8b442430             mov eax, dword ptr [esp + 0x30]
// 0043c964  8d0c10               lea ecx, [eax + edx]
// 0043c967  ff542428             call dword ptr [esp + 0x28]
// 0043c96b  83c608               add esi, 8
// 0043c96e  3bf7                 cmp esi, edi
// 0043c970  75de                 jne 0x43c950
// 0043c972  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043c976  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043c97a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043c97e  8908                 mov dword ptr [eax], ecx
// 0043c980  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043c984  895004               mov dword ptr [eax + 4], edx
// 0043c987  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0043c98b  894808               mov dword ptr [eax + 8], ecx
// 0043c98e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043c992  89500c               mov dword ptr [eax + 0xc], edx
// 0043c995  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043c999  5f                   pop edi
// 0043c99a  894810               mov dword ptr [eax + 0x10], ecx
// 0043c99d  895014               mov dword ptr [eax + 0x14], edx
// 0043c9a0  5e                   pop esi
// 0043c9a1  c3                   ret 

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
