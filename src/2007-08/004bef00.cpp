// from server: 77% by colin
// roc 2007-08 004bef00  unit: RakPeer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bef00
//
// 004bef00  8b442408             mov eax, dword ptr [esp + 8]
// 004bef04  56                   push esi
// 004bef05  6a00                 push 0
// 004bef07  8bf1                 mov esi, ecx
// 004bef09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bef0d  50                   push eax
// 004bef0e  51                   push ecx
// 004bef0f  8bce                 mov ecx, esi
// 004bef11  e8badbffff           call 0x4bcad0
// 004bef16  83f8ff               cmp eax, -1
// 004bef19  741b                 je 0x4bef36
// 004bef1b  8b962c020000         mov edx, dword ptr [esi + 0x22c]
// 004bef21  69c040080000         imul eax, eax, 0x840
// 004bef27  803c1000             cmp byte ptr [eax + edx], 0
// 004bef2b  7409                 je 0x4bef36
// 004bef2d  b801000000           mov eax, 1
// 004bef32  5e                   pop esi
// 004bef33  c20800               ret 8
// 004bef36  33c0                 xor eax, eax
// 004bef38  5e                   pop esi
// 004bef39  c20800               ret 8

struct RakPeer {
    int sub_4BCAD0(int, int, int);
    bool method(int a, int b);
};

bool RakPeer::method(int a, int b) {
    int idx = sub_4BCAD0(a, b, 0);
    if (idx == -1)
        return false;
    char* base = *(char**)((char*)this + 0x22c);
    if (base[idx * 0x840] == 0)
        return false;
    return true;
}
