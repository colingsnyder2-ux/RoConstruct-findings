// from server: 100% by colin
// roc 2008-06 004caf40  unit: RBX::Network::RoundRobinPhysicsSender  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004caf40
//
// 004caf40  55                   push ebp
// 004caf41  56                   push esi
// 004caf42  57                   push edi
// 004caf43  8bf9                 mov edi, ecx
// 004caf45  85ff                 test edi, edi
// 004caf47  7405                 je 0x4caf4e
// 004caf49  8d47f4               lea eax, [edi - 0xc]
// 004caf4c  eb02                 jmp 0x4caf50
// 004caf4e  33c0                 xor eax, eax
// 004caf50  8b4004               mov eax, dword ptr [eax + 4]
// 004caf53  8b4054               mov eax, dword ptr [eax + 0x54]
// 004caf56  85c0                 test eax, eax
// 004caf58  7405                 je 0x4caf5f
// 004caf5a  83c0b0               add eax, -0x50
// 004caf5d  eb02                 jmp 0x4caf61
// 004caf5f  33c0                 xor eax, eax
// 004caf61  8b742414             mov esi, dword ptr [esp + 0x14]
// 004caf65  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004caf69  3bf0                 cmp esi, eax
// 004caf6b  7441                 je 0x4cafae
// 004caf6d  85f6                 test esi, esi
// 004caf6f  7409                 je 0x4caf7a
// 004caf71  8d4e50               lea ecx, [esi + 0x50]
// 004caf74  894c2414             mov dword ptr [esp + 0x14], ecx
// 004caf78  eb08                 jmp 0x4caf82
// 004caf7a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004caf82  8d542414             lea edx, [esp + 0x14]
// 004caf86  52                   push edx
// 004caf87  e884b7ffff           call 0x4c6710
// 004caf8c  8b442418             mov eax, dword ptr [esp + 0x18]
// 004caf90  83c404               add esp, 4
// 004caf93  85c0                 test eax, eax
// 004caf95  7405                 je 0x4caf9c
// 004caf97  83c0b0               add eax, -0x50
// 004caf9a  eb02                 jmp 0x4caf9e
// 004caf9c  33c0                 xor eax, eax
// 004caf9e  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 004cafa1  3b4844               cmp ecx, dword ptr [eax + 0x44]
// 004cafa4  7d08                 jge 0x4cafae
// 004cafa6  5f                   pop edi
// 004cafa7  5e                   pop esi
// 004cafa8  32c0                 xor al, al
// 004cafaa  5d                   pop ebp
// 004cafab  c20c00               ret 0xc
// 004cafae  85f6                 test esi, esi
// 004cafb0  7409                 je 0x4cafbb
// 004cafb2  83c650               add esi, 0x50
// 004cafb5  89742414             mov dword ptr [esp + 0x14], esi
// 004cafb9  eb08                 jmp 0x4cafc3
// 004cafbb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004cafc3  8d542414             lea edx, [esp + 0x14]
// 004cafc7  52                   push edx
// 004cafc8  e8f3b6ffff           call 0x4c66c0
// 004cafcd  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cafd1  83c404               add esp, 4
// 004cafd4  85c0                 test eax, eax
// 004cafd6  7405                 je 0x4cafdd
// 004cafd8  8d48b0               lea ecx, [eax - 0x50]
// 004cafdb  eb02                 jmp 0x4cafdf
// 004cafdd  33c9                 xor ecx, ecx
// 004cafdf  85ff                 test edi, edi
// 004cafe1  7405                 je 0x4cafe8
// 004cafe3  8d47f4               lea eax, [edi - 0xc]
// 004cafe6  eb02                 jmp 0x4cafea
// 004cafe8  33c0                 xor eax, eax
// 004cafea  3b4804               cmp ecx, dword ptr [eax + 4]
// 004cafed  7410                 je 0x4cafff
// 004cafef  8b4144               mov eax, dword ptr [ecx + 0x44]
// 004caff2  3b4544               cmp eax, dword ptr [ebp + 0x44]
// 004caff5  7d08                 jge 0x4cafff
// 004caff7  5f                   pop edi
// 004caff8  5e                   pop esi
// 004caff9  33c0                 xor eax, eax
// 004caffb  5d                   pop ebp
// 004caffc  c20c00               ret 0xc
// 004cafff  5f                   pop edi
// 004cb000  5e                   pop esi
// 004cb001  b801000000           mov eax, 1
// 004cb006  5d                   pop ebp
// 004cb007  c20c00               ret 0xc

struct Link;

struct Node
{
    char padding[0x44];
    int priority;
    char gap[8];
    Link* next;
    Link* previous;
};

struct Owner
{
    int unused;
    Node* node;
};

struct Sender
{
    bool f(Node* value, Node* cursor, int unused);
};

extern void __cdecl previousLink(Link** cursor);
extern void __cdecl nextLink(Link** cursor);

bool Sender::f(Node* value, Node* cursor, int unused)
{
    Owner* owner = this ? reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 12) : 0;

    Link* link = owner->node->previous;
    Node* original = cursor;
    Node* end = link ? reinterpret_cast<Node*>(
        reinterpret_cast<char*>(link) - 0x50) : 0;

    Node* slot = 0;

    if (original != end)
    {
        slot = original ? reinterpret_cast<Node*>(
            reinterpret_cast<char*>(original) + 0x50) : 0;

        previousLink(reinterpret_cast<Link**>(&slot));

        Node* previous = slot ? reinterpret_cast<Node*>(
            reinterpret_cast<char*>(slot) - 0x50) : 0;

        if (value->priority < previous->priority)
            return false;
    }

    slot = original ? reinterpret_cast<Node*>(
        reinterpret_cast<char*>(original) + 0x50) : 0;

    nextLink(reinterpret_cast<Link**>(&slot));

    Node* next = slot ? reinterpret_cast<Node*>(
        reinterpret_cast<char*>(slot) - 0x50) : 0;

    owner = this ? reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 12) : 0;

    return next == owner->node || next->priority >= value->priority;
}
