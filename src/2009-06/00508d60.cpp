// roc 2009-06 00508d60  unit: RBX::Network::PhysicsSender::Job  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00508d60
//
// 00508d60  8b542408             mov edx, dword ptr [esp + 8]
// 00508d64  8b0a                 mov ecx, dword ptr [edx]
// 00508d66  8b01                 mov eax, dword ptr [ecx]
// 00508d68  56                   push esi
// 00508d69  3bc1                 cmp eax, ecx
// 00508d6b  741b                 je 0x508d88
// 00508d6d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00508d71  8b31                 mov esi, dword ptr [ecx]
// 00508d73  85c0                 test eax, eax
// 00508d75  7405                 je 0x508d7c
// 00508d77  8d4890               lea ecx, [eax - 0x70]
// 00508d7a  eb02                 jmp 0x508d7e
// 00508d7c  33c9                 xor ecx, ecx
// 00508d7e  3b31                 cmp esi, dword ptr [ecx]
// 00508d80  740c                 je 0x508d8e
// 00508d82  8b00                 mov eax, dword ptr [eax]
// 00508d84  3b02                 cmp eax, dword ptr [edx]
// 00508d86  75eb                 jne 0x508d73
// 00508d88  b001                 mov al, 1
// 00508d8a  5e                   pop esi
// 00508d8b  c20c00               ret 0xc
// 00508d8e  8902                 mov dword ptr [edx], eax
// 00508d90  32c0                 xor al, al
// 00508d92  5e                   pop esi
// 00508d93  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@@YG_NPAPAXPAPAUNode@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Node
{
    Node *next;
};

struct Item
{
    void *value;
    char padding[652];
    Node node;
};

bool __stdcall f(void **key, Node **cursor, int)
{
    Node *p = (*cursor)->next;
    while (p != *cursor)
    {
        Item *item = p ? reinterpret_cast<Item *>(
            reinterpret_cast<char *>(p) - 112) : 0;
        if (*key == item->value)
        {
            *cursor = p;
            return false;
        }
        p = p->next;
    }
    return true;
}