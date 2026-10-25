// from server: 100% by colin
// roc 2008-06 005a2800  unit: RBX::Workspace  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2800
//
// 005a2800  56                   push esi
// 005a2801  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a2805  57                   push edi
// 005a2806  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005a280a  3bf7                 cmp esi, edi
// 005a280c  741e                 je 0x5a282c
// 005a280e  8bff                 mov edi, edi
// 005a2810  8bce                 mov ecx, esi
// 005a2812  ff54242c             call dword ptr [esp + 0x2c]
// 005a2816  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a281a  50                   push eax
// 005a281b  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a281f  03c8                 add ecx, eax
// 005a2821  ff542424             call dword ptr [esp + 0x24]
// 005a2825  83c608               add esi, 8
// 005a2828  3bf7                 cmp esi, edi
// 005a282a  75e4                 jne 0x5a2810
// 005a282c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a2830  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a2834  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a2838  8910                 mov dword ptr [eax], edx
// 005a283a  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a283e  894804               mov dword ptr [eax + 4], ecx
// 005a2841  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a2845  895008               mov dword ptr [eax + 8], edx
// 005a2848  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a284c  89480c               mov dword ptr [eax + 0xc], ecx
// 005a284f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a2853  5f                   pop edi
// 005a2854  895010               mov dword ptr [eax + 0x10], edx
// 005a2857  894814               mov dword ptr [eax + 0x14], ecx
// 005a285a  5e                   pop esi
// 005a285b  c3                   ret 

typedef int (__thiscall *Getter)(void *);
typedef void (__thiscall *Setter)(void *, int);

struct Iterator
{
    void *unused;
    char *current;
};

struct Function
{
    Setter setter;
    int adjustment;
    char *object;
    Getter getter;
    int extra1;
    int extra2;
};

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    char *current = first.current;
    char *end = last.current;
    for (; current != end; current += 8)
    {
        int value = function.getter(current);
        function.setter((void *)(function.adjustment + (int)function.object), value);
    }
    return function;
}
