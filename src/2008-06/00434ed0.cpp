// from server: 100% by king_originala
// roc 2008-06 00434ed0  unit: CDeclarationView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00434ed0
//
// 00434ed0  56                   push esi
// 00434ed1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00434ed5  57                   push edi
// 00434ed6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00434eda  3bf7                 cmp esi, edi
// 00434edc  741a                 je 0x434ef8
// 00434ede  8bff                 mov edi, edi
// 00434ee0  8b06                 mov eax, dword ptr [esi]
// 00434ee2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00434ee6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00434eea  50                   push eax
// 00434eeb  03ca                 add ecx, edx
// 00434eed  ff542424             call dword ptr [esp + 0x24]
// 00434ef1  83c604               add esi, 4
// 00434ef4  3bf7                 cmp esi, edi
// 00434ef6  75e8                 jne 0x434ee0
// 00434ef8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00434efc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00434f00  8b542424             mov edx, dword ptr [esp + 0x24]
// 00434f04  8908                 mov dword ptr [eax], ecx
// 00434f06  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00434f0a  895004               mov dword ptr [eax + 4], edx
// 00434f0d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00434f11  5f                   pop edi
// 00434f12  894808               mov dword ptr [eax + 8], ecx
// 00434f15  89500c               mov dword ptr [eax + 0xc], edx
// 00434f18  5e                   pop esi
// 00434f19  c3                   ret 

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
