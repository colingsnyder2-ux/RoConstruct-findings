// from server: 89% by king_originala
// from server: 85% by colin
// from server: 83% by king_originala
// roc 2008-06 00439600  unit: CSelectionPropGrid  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439600
//
// 00439600  53                   push ebx
// 00439601  55                   push ebp
// 00439602  56                   push esi
// 00439603  57                   push edi
// 00439604  8bd9                 mov ebx, ecx
// 00439606  8d442414             lea eax, [esp + 0x14]
// 0043960a  50                   push eax
// 0043960b  8d4b04               lea ecx, [ebx + 4]
// 0043960e  e88d7dfeff           call 0x4213a0
// 00439613  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00439617  8bbdb4000000         mov edi, dword ptr [ebp + 0xb4]
// 0043961d  39bdb0000000         cmp dword ptr [ebp + 0xb0], edi
// 00439623  7606                 jbe 0x43962b
// 00439625  ff1590288000         call dword ptr [0x802890]
// 0043962b  8bb5b0000000         mov esi, dword ptr [ebp + 0xb0]
// 00439631  3bb5b4000000         cmp esi, dword ptr [ebp + 0xb4]
// 00439637  7606                 jbe 0x43963f
// 00439639  ff1590288000         call dword ptr [0x802890]
// 0043963f  3bf7                 cmp esi, edi
// 00439641  7411                 je 0x439654
// 00439643  8b0e                 mov ecx, dword ptr [esi]
// 00439645  51                   push ecx
// 00439646  8bcb                 mov ecx, ebx
// 00439648  e8b3ffffff           call 0x439600
// 0043964d  83c604               add esi, 4
// 00439650  3bf7                 cmp esi, edi
// 00439652  75ef                 jne 0x439643
// 00439654  5f                   pop edi
// 00439655  5e                   pop esi
// 00439656  5d                   pop ebp
// 00439657  5b                   pop ebx
// 00439658  c20400               ret 4

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct Node {
    char padding[0xB0];
    Node **begin;
    Node **end;
};

struct Listener {
    void resolve(Node **);
};

struct S {
    int header;
    Listener listener;

    void f(Node *);
};

void S::f(Node *volatile node)
{
    listener.resolve(const_cast<Node**>(&node));
    Node *n = node;

    Node **last = n->end;
    if (n->begin > last)
        _invalid_parameter_noinfo();

    Node **first = n->begin;
    if (first > n->end)
        _invalid_parameter_noinfo();

    while (first != last) {
        f(*first);
        ++first;
    }
}


