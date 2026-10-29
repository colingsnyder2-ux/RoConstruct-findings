// roc 2010-06 0042fa10  unit: CDeclarationView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042fa10
//
// 0042fa10  56                   push esi
// 0042fa11  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042fa15  57                   push edi
// 0042fa16  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042fa1a  3bf7                 cmp esi, edi
// 0042fa1c  741a                 je 0x42fa38
// 0042fa1e  8bff                 mov edi, edi
// 0042fa20  8b06                 mov eax, dword ptr [esi]
// 0042fa22  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042fa26  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042fa2a  50                   push eax
// 0042fa2b  03ca                 add ecx, edx
// 0042fa2d  ff542424             call dword ptr [esp + 0x24]
// 0042fa31  83c604               add esi, 4
// 0042fa34  3bf7                 cmp esi, edi
// 0042fa36  75e8                 jne 0x42fa20
// 0042fa38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042fa3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042fa40  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042fa44  8908                 mov dword ptr [eax], ecx
// 0042fa46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042fa4a  895004               mov dword ptr [eax + 4], edx
// 0042fa4d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0042fa51  5f                   pop edi
// 0042fa52  894808               mov dword ptr [eax + 8], ecx
// 0042fa55  89500c               mov dword ptr [eax + 0xc], edx
// 0042fa58  5e                   pop esi
// 0042fa59  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUOperation@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
typedef void (__thiscall *Callback)(void*, int);

struct Iterator {
    int unused;
    int* current;
};

struct Operation {
    Callback callback;
    int adjustment;
    char* object;
    int unused;
};

Operation __cdecl apply(Iterator first, Iterator last, Operation operation)
{
    register int* current = first.current;
    register int* end = last.current;

    if (current != end) {
        do {
            operation.callback(operation.object + operation.adjustment, *current);
            ++current;
        } while (current != end);
    }

    return operation;
}