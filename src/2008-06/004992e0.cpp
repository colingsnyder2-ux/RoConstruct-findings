// from server: 79% by colin
// from server: 71% by king_originala
// roc 2008-06 004992e0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004992e0
//
// 004992e0  56                   push esi
// 004992e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004992e5  57                   push edi
// 004992e6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004992ea  8d9b00000000         lea ebx, [ebx]
// 004992f0  3bf7                 cmp esi, edi
// 004992f2  7414                 je 0x499308
// 004992f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004992f8  50                   push eax
// 004992f9  8d4e08               lea ecx, [esi + 8]
// 004992fc  51                   push ecx
// 004992fd  ff542428             call dword ptr [esp + 0x28]
// 00499301  8b36                 mov esi, dword ptr [esi]
// 00499303  83c408               add esp, 8
// 00499306  ebe8                 jmp 0x4992f0
// 00499308  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049930c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00499310  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00499314  5f                   pop edi
// 00499315  8910                 mov dword ptr [eax], edx
// 00499317  894804               mov dword ptr [eax + 4], ecx
// 0049931a  5e                   pop esi
// 0049931b  c3                   ret 
struct Value { int data; };
struct Node { Node* next; Node* prev; Value value; };
struct Iterator {
    void* owner;
    Node* node;
    bool operator!=(const Iterator& other) const { return node != other.node; }
    Iterator& operator++() { node = node->next; return *this; }
    Value& operator*() const { return node->value; }
};
struct Function {
    void (__cdecl* callback)(Value*, void*);
    void* context;
    Function(const Function& o) : callback(o.callback), context(o.context) {}
    void operator()(Value& value) { callback(&value, context); }
};
Function __cdecl func(Iterator first, Iterator last, Function function)
{
    Node* node = first.node;
    Node* end = last.node;
    for (; node != end; node = node->next)
        function(node->value);
    return function;
}
