// from server: 100% by colin
// roc 2007-08 004b8900  unit: RakPeer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8900
//
// 004b8900  0fb75108             movzx edx, word ptr [ecx + 8]
// 004b8904  33c0                 xor eax, eax
// 004b8906  6685d2               test dx, dx
// 004b8909  761c                 jbe 0x4b8927
// 004b890b  8b892c020000         mov ecx, dword ptr [ecx + 0x22c]
// 004b8911  0fb7d2               movzx edx, dx
// 004b8914  803900               cmp byte ptr [ecx], 0
// 004b8917  7403                 je 0x4b891c
// 004b8919  83c001               add eax, 1
// 004b891c  81c140080000         add ecx, 0x840
// 004b8922  83ea01               sub edx, 1
// 004b8925  75ed                 jne 0x4b8914
// 004b8927  c3                   ret 

struct RakPeer {
    char pad0[8];
    unsigned short field_8;
    char pad1[0x22c - 0xa];
    char* field_22c;
    int countActivePeers();
};

int RakPeer::countActivePeers()
{
    unsigned short n = field_8;
    int count = 0;
    if (n > 0) {
        char* p = field_22c;
        unsigned int i = n;
        do {
            if (*p != 0)
                count++;
            p += 0x840;
            i--;
        } while (i != 0);
    }
    return count;
}
