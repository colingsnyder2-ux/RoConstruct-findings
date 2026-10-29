// roc 2011-06 00518980  unit: RBX::Network::ErrorCompPhysicsSender  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00518980
//
// 00518980  8b542408             mov edx, dword ptr [esp + 8]
// 00518984  8b0a                 mov ecx, dword ptr [edx]
// 00518986  8b01                 mov eax, dword ptr [ecx]
// 00518988  56                   push esi
// 00518989  3bc1                 cmp eax, ecx
// 0051898b  741b                 je 0x5189a8
// 0051898d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00518991  8b31                 mov esi, dword ptr [ecx]
// 00518993  85c0                 test eax, eax
// 00518995  7405                 je 0x51899c
// 00518997  8d4890               lea ecx, [eax - 0x70]
// 0051899a  eb02                 jmp 0x51899e
// 0051899c  33c9                 xor ecx, ecx
// 0051899e  3b31                 cmp esi, dword ptr [ecx]
// 005189a0  740c                 je 0x5189ae
// 005189a2  8b00                 mov eax, dword ptr [eax]
// 005189a4  3b02                 cmp eax, dword ptr [edx]
// 005189a6  75eb                 jne 0x518993
// 005189a8  b001                 mov al, 1
// 005189aa  5e                   pop esi
// 005189ab  c20c00               ret 0xc
// 005189ae  8902                 mov dword ptr [edx], eax
// 005189b0  32c0                 xor al, al
// 005189b2  5e                   pop esi
// 005189b3  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@ns_ROCX000004@@YG_NPAPAXPAPAUNode@1@H@Z)

namespace ns_ROCX000004 {
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
}
