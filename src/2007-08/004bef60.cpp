// from server: 82% by colin
// roc 2007-08 004bef60  unit: RakPeer  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bef60
//
// 004bef60  8b442408             mov eax, dword ptr [esp + 8]
// 004bef64  8b542404             mov edx, dword ptr [esp + 4]
// 004bef68  6a00                 push 0
// 004bef6a  6a00                 push 0
// 004bef6c  50                   push eax
// 004bef6d  52                   push edx
// 004bef6e  e80ddcffff           call 0x4bcb80
// 004bef73  8bd0                 mov edx, eax
// 004bef75  85d2                 test edx, edx
// 004bef77  7430                 je 0x4befa9
// 004bef79  56                   push esi
// 004bef7a  33c0                 xor eax, eax
// 004bef7c  33c9                 xor ecx, ecx
// 004bef7e  8db2d4070000         lea esi, [edx + 0x7d4]
// 004bef84  0fb716               movzx edx, word ptr [esi]
// 004bef87  6681faffff           cmp dx, 0xffff
// 004bef8c  7410                 je 0x4bef9e
// 004bef8e  0fb7d2               movzx edx, dx
// 004bef91  83c101               add ecx, 1
// 004bef94  03c2                 add eax, edx
// 004bef96  83c608               add esi, 8
// 004bef99  83f905               cmp ecx, 5
// 004bef9c  7ce6                 jl 0x4bef84
// 004bef9e  85c9                 test ecx, ecx
// 004befa0  5e                   pop esi
// 004befa1  7e06                 jle 0x4befa9
// 004befa3  99                   cdq 
// 004befa4  f7f9                 idiv ecx
// 004befa6  c20800               ret 8
// 004befa9  83c8ff               or eax, 0xffffffff
// 004befac  c20800               ret 8

struct RakPeer {
    char pad[0x7d4];
    unsigned short values[5];
};

extern "C" RakPeer* __cdecl sub_004bcb80(int, int, int, int);

int __stdcall sub_004bef60(int a, int b)
{
    RakPeer* p = sub_004bcb80(a, b, 0, 0);
    if (p == 0)
        return -1;

    int sum = 0;
    int count = 0;
    unsigned short* q = p->values;
    while (count < 5) {
        unsigned short v = *q;
        if (v == 0xffff)
            break;
        sum += (int)v;
        count++;
        q += 4;
    }

    if (count <= 0)
        return -1;

    return sum / count;
}
