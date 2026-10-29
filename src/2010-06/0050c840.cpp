// roc 2010-06 0050c840  unit: RBX::Network::NetworkOwnerJob  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050c840
//
// 0050c840  8b542408             mov edx, dword ptr [esp + 8]
// 0050c844  8b0a                 mov ecx, dword ptr [edx]
// 0050c846  8b01                 mov eax, dword ptr [ecx]
// 0050c848  56                   push esi
// 0050c849  3bc1                 cmp eax, ecx
// 0050c84b  741b                 je 0x50c868
// 0050c84d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050c851  8b31                 mov esi, dword ptr [ecx]
// 0050c853  85c0                 test eax, eax
// 0050c855  7405                 je 0x50c85c
// 0050c857  8d4890               lea ecx, [eax - 0x70]
// 0050c85a  eb02                 jmp 0x50c85e
// 0050c85c  33c9                 xor ecx, ecx
// 0050c85e  3b31                 cmp esi, dword ptr [ecx]
// 0050c860  740c                 je 0x50c86e
// 0050c862  8b00                 mov eax, dword ptr [eax]
// 0050c864  3b02                 cmp eax, dword ptr [edx]
// 0050c866  75eb                 jne 0x50c853
// 0050c868  b001                 mov al, 1
// 0050c86a  5e                   pop esi
// 0050c86b  c20c00               ret 0xc
// 0050c86e  8902                 mov dword ptr [edx], eax
// 0050c870  32c0                 xor al, al
// 0050c872  5e                   pop esi
// 0050c873  c20c00               ret 0xc
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