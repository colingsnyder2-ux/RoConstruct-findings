// roc 2012-06 005ae070  unit: RBX::Network::ErrorCompPhysicsSender  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ae070
//
// 005ae070  8b542408             mov edx, dword ptr [esp + 8]
// 005ae074  8b0a                 mov ecx, dword ptr [edx]
// 005ae076  8b01                 mov eax, dword ptr [ecx]
// 005ae078  56                   push esi
// 005ae079  3bc1                 cmp eax, ecx
// 005ae07b  741b                 je 0x5ae098
// 005ae07d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ae081  8b31                 mov esi, dword ptr [ecx]
// 005ae083  85c0                 test eax, eax
// 005ae085  7405                 je 0x5ae08c
// 005ae087  8d4890               lea ecx, [eax - 0x70]
// 005ae08a  eb02                 jmp 0x5ae08e
// 005ae08c  33c9                 xor ecx, ecx
// 005ae08e  3b31                 cmp esi, dword ptr [ecx]
// 005ae090  740c                 je 0x5ae09e
// 005ae092  8b00                 mov eax, dword ptr [eax]
// 005ae094  3b02                 cmp eax, dword ptr [edx]
// 005ae096  75eb                 jne 0x5ae083
// 005ae098  b001                 mov al, 1
// 005ae09a  5e                   pop esi
// 005ae09b  c20c00               ret 0xc
// 005ae09e  8902                 mov dword ptr [edx], eax
// 005ae0a0  32c0                 xor al, al
// 005ae0a2  5e                   pop esi
// 005ae0a3  c20c00               ret 0xc
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