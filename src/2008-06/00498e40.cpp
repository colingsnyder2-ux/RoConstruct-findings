// from server: 85% by colin
// from server: 78% by king_originala
// roc 2008-06 00498e40  unit: RBX::Network::VPlayers::?$SignalDesc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498e40
//
// 00498e40  56                   push esi
// 00498e41  8b742410             mov esi, dword ptr [esp + 0x10]
// 00498e45  57                   push edi
// 00498e46  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00498e4a  8d9b00000000         lea ebx, [ebx]
// 00498e50  3bf7                 cmp esi, edi
// 00498e52  7410                 je 0x498e64
// 00498e54  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00498e58  8d4608               lea eax, [esi + 8]
// 00498e5b  50                   push eax
// 00498e5c  ff542424             call dword ptr [esp + 0x24]
// 00498e60  8b36                 mov esi, dword ptr [esi]
// 00498e62  ebec                 jmp 0x498e50
// 00498e64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00498e68  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00498e6c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00498e70  5f                   pop edi
// 00498e71  8908                 mov dword ptr [eax], ecx
// 00498e73  895004               mov dword ptr [eax + 4], edx
// 00498e76  5e                   pop esi
// 00498e77  c3                   ret 
#include <intrin.h>

struct Node {
    Node* next;
    void* previous;
    char value[1];
};

struct Iterator {
    void* owner;
    Node* node;
};

typedef void (__thiscall *Callback)(void*, void*);

struct Function {
    Callback callback;
    void* context;
    Function(const Function& other);
};

Function::Function(const Function& other)
    : callback(other.callback), context(other.context) {}

Function __cdecl traverse(Iterator first, Iterator last, Function function)
{
    Node* current = first.node;
    _ReadWriteBarrier();
    Node* end = last.node;
    for (;;) {
        if (current == end)
            break;
        function.callback(function.context, current->value);
        current = current->next;
    }
    return function;
}
