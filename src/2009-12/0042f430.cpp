// roc 2009-12 0042f430  unit: CDeclarationView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042f430
//
// 0042f430  56                   push esi
// 0042f431  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042f435  57                   push edi
// 0042f436  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042f43a  3bf7                 cmp esi, edi
// 0042f43c  741a                 je 0x42f458
// 0042f43e  8bff                 mov edi, edi
// 0042f440  8b06                 mov eax, dword ptr [esi]
// 0042f442  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042f446  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042f44a  50                   push eax
// 0042f44b  03ca                 add ecx, edx
// 0042f44d  ff542424             call dword ptr [esp + 0x24]
// 0042f451  83c604               add esi, 4
// 0042f454  3bf7                 cmp esi, edi
// 0042f456  75e8                 jne 0x42f440
// 0042f458  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042f45c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042f460  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042f464  8908                 mov dword ptr [eax], ecx
// 0042f466  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042f46a  895004               mov dword ptr [eax + 4], edx
// 0042f46d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0042f471  5f                   pop edi
// 0042f472  894808               mov dword ptr [eax + 8], ecx
// 0042f475  89500c               mov dword ptr [eax + 0xc], edx
// 0042f478  5e                   pop esi
// 0042f479  c3                   ret 
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