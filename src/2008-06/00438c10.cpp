// from server: 100% by king_originala
// roc 2008-06 00438c10  unit: IIHAAH::?$CMap  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438c10
//
// 00438c10  56                   push esi
// 00438c11  8b742410             mov esi, dword ptr [esp + 0x10]
// 00438c15  57                   push edi
// 00438c16  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00438c1a  3bf7                 cmp esi, edi
// 00438c1c  7420                 je 0x438c3e
// 00438c1e  8bff                 mov edi, edi
// 00438c20  8b06                 mov eax, dword ptr [esi]
// 00438c22  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00438c26  8b542424             mov edx, dword ptr [esp + 0x24]
// 00438c2a  50                   push eax
// 00438c2b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00438c2f  51                   push ecx
// 00438c30  8d0c10               lea ecx, [eax + edx]
// 00438c33  ff542428             call dword ptr [esp + 0x28]
// 00438c37  83c604               add esi, 4
// 00438c3a  3bf7                 cmp esi, edi
// 00438c3c  75e2                 jne 0x438c20
// 00438c3e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00438c42  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00438c46  8b542424             mov edx, dword ptr [esp + 0x24]
// 00438c4a  8908                 mov dword ptr [eax], ecx
// 00438c4c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438c50  895004               mov dword ptr [eax + 4], edx
// 00438c53  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00438c57  5f                   pop edi
// 00438c58  894808               mov dword ptr [eax + 8], ecx
// 00438c5b  89500c               mov dword ptr [eax + 0xc], edx
// 00438c5e  5e                   pop esi
// 00438c5f  c3                   ret 

struct Object;

struct Iterator {
    void* unused;
    int* current;
};

struct Functor {
    void (__thiscall *method)(Object*, int, int);
    Object* object;
    int adjustment;
    int argument;
};

Functor apply(Iterator first, Iterator last, Functor function)
{
    int* current = first.current;
    int* end = last.current;
    for (; current != end; ++current)
        function.method(
            reinterpret_cast<Object*>(
                function.adjustment + reinterpret_cast<char*>(function.object)),
            function.argument, *current);
    return function;
}
