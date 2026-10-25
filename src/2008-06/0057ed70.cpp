// from server: 100% by king_originala
// roc 2008-06 0057ed70  unit: RBX::ClearBackpack  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ed70
//
// 0057ed70  56                   push esi
// 0057ed71  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ed75  57                   push edi
// 0057ed76  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057ed7a  3bf7                 cmp esi, edi
// 0057ed7c  7418                 je 0x57ed96
// 0057ed7e  8bff                 mov edi, edi
// 0057ed80  8b06                 mov eax, dword ptr [esi]
// 0057ed82  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057ed86  50                   push eax
// 0057ed87  51                   push ecx
// 0057ed88  ff542428             call dword ptr [esp + 0x28]
// 0057ed8c  83c604               add esi, 4
// 0057ed8f  83c408               add esp, 8
// 0057ed92  3bf7                 cmp esi, edi
// 0057ed94  75ea                 jne 0x57ed80
// 0057ed96  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057ed9a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057ed9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057eda2  5f                   pop edi
// 0057eda3  8910                 mov dword ptr [eax], edx
// 0057eda5  894804               mov dword ptr [eax + 4], ecx
// 0057eda8  5e                   pop esi
// 0057eda9  c3                   ret 

struct Iterator
{
    void* owner;
    void** position;
};

struct Function
{
    void (__cdecl *callback)(void*, void*);
    void* context;
    Function();
};

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    void** position = first.position;
    void** end = last.position;

    for (; position != end; ++position)
        function.callback(function.context, *position);

    return function;
}
