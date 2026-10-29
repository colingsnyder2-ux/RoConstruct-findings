// roc 2009-12 0055dd90  unit: RBX::Network::NetworkOwnerJob  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055dd90
//
// 0055dd90  8b542408             mov edx, dword ptr [esp + 8]
// 0055dd94  8b0a                 mov ecx, dword ptr [edx]
// 0055dd96  8b01                 mov eax, dword ptr [ecx]
// 0055dd98  56                   push esi
// 0055dd99  3bc1                 cmp eax, ecx
// 0055dd9b  741b                 je 0x55ddb8
// 0055dd9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055dda1  8b31                 mov esi, dword ptr [ecx]
// 0055dda3  85c0                 test eax, eax
// 0055dda5  7405                 je 0x55ddac
// 0055dda7  8d4890               lea ecx, [eax - 0x70]
// 0055ddaa  eb02                 jmp 0x55ddae
// 0055ddac  33c9                 xor ecx, ecx
// 0055ddae  3b31                 cmp esi, dword ptr [ecx]
// 0055ddb0  740c                 je 0x55ddbe
// 0055ddb2  8b00                 mov eax, dword ptr [eax]
// 0055ddb4  3b02                 cmp eax, dword ptr [edx]
// 0055ddb6  75eb                 jne 0x55dda3
// 0055ddb8  b001                 mov al, 1
// 0055ddba  5e                   pop esi
// 0055ddbb  c20c00               ret 0xc
// 0055ddbe  8902                 mov dword ptr [edx], eax
// 0055ddc0  32c0                 xor al, al
// 0055ddc2  5e                   pop esi
// 0055ddc3  c20c00               ret 0xc
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