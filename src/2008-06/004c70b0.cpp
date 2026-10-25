// from server: 100% by king_originala
// roc 2008-06 004c70b0  unit: RBX::VInstance::?$Association::Item  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c70b0
//
// 004c70b0  8b542408             mov edx, dword ptr [esp + 8]
// 004c70b4  8b0a                 mov ecx, dword ptr [edx]
// 004c70b6  8b01                 mov eax, dword ptr [ecx]
// 004c70b8  56                   push esi
// 004c70b9  3bc1                 cmp eax, ecx
// 004c70bb  741e                 je 0x4c70db
// 004c70bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c70c1  8b31                 mov esi, dword ptr [ecx]
// 004c70c3  85c0                 test eax, eax
// 004c70c5  7408                 je 0x4c70cf
// 004c70c7  8d8870fdffff         lea ecx, [eax - 0x290]
// 004c70cd  eb02                 jmp 0x4c70d1
// 004c70cf  33c9                 xor ecx, ecx
// 004c70d1  3b31                 cmp esi, dword ptr [ecx]
// 004c70d3  740c                 je 0x4c70e1
// 004c70d5  8b00                 mov eax, dword ptr [eax]
// 004c70d7  3b02                 cmp eax, dword ptr [edx]
// 004c70d9  75e8                 jne 0x4c70c3
// 004c70db  b001                 mov al, 1
// 004c70dd  5e                   pop esi
// 004c70de  c20c00               ret 0xc
// 004c70e1  8902                 mov dword ptr [edx], eax
// 004c70e3  32c0                 xor al, al
// 004c70e5  5e                   pop esi
// 004c70e6  c20c00               ret 0xc

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
            reinterpret_cast<char *>(p) - 656) : 0;
        if (*key == item->value)
        {
            *cursor = p;
            return false;
        }
        p = p->next;
    }
    return true;
}
