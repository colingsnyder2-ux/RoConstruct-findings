// from server: 100% by colin
// roc 2008-06 004cad90  unit: RBX::Network::RoundRobinPhysicsSender  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cad90
//
// 004cad90  8b542408             mov edx, dword ptr [esp + 8]
// 004cad94  8b0a                 mov ecx, dword ptr [edx]
// 004cad96  8b01                 mov eax, dword ptr [ecx]
// 004cad98  56                   push esi
// 004cad99  3bc1                 cmp eax, ecx
// 004cad9b  741b                 je 0x4cadb8
// 004cad9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cada1  8b31                 mov esi, dword ptr [ecx]
// 004cada3  85c0                 test eax, eax
// 004cada5  7405                 je 0x4cadac
// 004cada7  8d4890               lea ecx, [eax - 0x70]
// 004cadaa  eb02                 jmp 0x4cadae
// 004cadac  33c9                 xor ecx, ecx
// 004cadae  3b31                 cmp esi, dword ptr [ecx]
// 004cadb0  740c                 je 0x4cadbe
// 004cadb2  8b00                 mov eax, dword ptr [eax]
// 004cadb4  3b02                 cmp eax, dword ptr [edx]
// 004cadb6  75eb                 jne 0x4cada3
// 004cadb8  b001                 mov al, 1
// 004cadba  5e                   pop esi
// 004cadbb  c20c00               ret 0xc
// 004cadbe  8902                 mov dword ptr [edx], eax
// 004cadc0  32c0                 xor al, al
// 004cadc2  5e                   pop esi
// 004cadc3  c20c00               ret 0xc

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
