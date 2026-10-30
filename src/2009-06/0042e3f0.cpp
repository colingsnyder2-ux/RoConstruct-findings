// roc 2009-06 0042e3f0  unit: CDeclarationView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042e3f0
//
// 0042e3f0  56                   push esi
// 0042e3f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042e3f5  57                   push edi
// 0042e3f6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042e3fa  3bf7                 cmp esi, edi
// 0042e3fc  741a                 je 0x42e418
// 0042e3fe  8bff                 mov edi, edi
// 0042e400  8b06                 mov eax, dword ptr [esi]
// 0042e402  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042e406  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042e40a  50                   push eax
// 0042e40b  03ca                 add ecx, edx
// 0042e40d  ff542424             call dword ptr [esp + 0x24]
// 0042e411  83c604               add esi, 4
// 0042e414  3bf7                 cmp esi, edi
// 0042e416  75e8                 jne 0x42e400
// 0042e418  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042e41c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042e420  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042e424  8908                 mov dword ptr [eax], ecx
// 0042e426  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042e42a  895004               mov dword ptr [eax + 4], edx
// 0042e42d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0042e431  5f                   pop edi
// 0042e432  894808               mov dword ptr [eax + 8], ecx
// 0042e435  89500c               mov dword ptr [eax + 0xc], edx
// 0042e438  5e                   pop esi
// 0042e439  c3                   ret 
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