// from server: 78% by colin
// roc 2007-08 004b91a0  unit: RakPeer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b91a0
//
// 004b91a0  83b92c02000000       cmp dword ptr [ecx + 0x22c], 0
// 004b91a7  7441                 je 0x4b91ea
// 004b91a9  8a4104               mov al, byte ptr [ecx + 4]
// 004b91ac  3c01                 cmp al, 1
// 004b91ae  743a                 je 0x4b91ea
// 004b91b0  0fb75108             movzx edx, word ptr [ecx + 8]
// 004b91b4  33c0                 xor eax, eax
// 004b91b6  6685d2               test dx, dx
// 004b91b9  7632                 jbe 0x4b91ed
// 004b91bb  8b892c020000         mov ecx, dword ptr [ecx + 0x22c]
// 004b91c1  0fb7d2               movzx edx, dx
// 004b91c4  803900               cmp byte ptr [ecx], 0
// 004b91c7  7415                 je 0x4b91de
// 004b91c9  80b9d007000000       cmp byte ptr [ecx + 0x7d0], 0
// 004b91d0  750c                 jne 0x4b91de
// 004b91d2  83b93808000008       cmp dword ptr [ecx + 0x838], 8
// 004b91d9  7503                 jne 0x4b91de
// 004b91db  83c001               add eax, 1
// 004b91de  81c140080000         add ecx, 0x840
// 004b91e4  83ea01               sub edx, 1
// 004b91e7  75db                 jne 0x4b91c4
// 004b91e9  c3                   ret 
// 004b91ea  6633c0               xor ax, ax
// 004b91ed  c3                   ret 

struct RakPeer {
    char pad0[4];
    char field4;
    char pad5[3];
    unsigned short field8;
    char pad10[0x22c - 10];
    char* field22c;

    unsigned short getCount();
};

unsigned short RakPeer::getCount()
{
    if (this->field22c != 0)
        return 0;
    if (this->field4 == 1)
        return 0;
    unsigned short n = this->field8;
    if (n == 0)
        return 0;
    unsigned short count = 0;
    char* p = this->field22c;
    unsigned int i = n;
    do {
        if (*p != 0 && p[0x7d0] == 0 && *(int*)(p + 0x838) == 8)
            count++;
        p += 0x840;
        i--;
    } while (i != 0);
    return count;
}
