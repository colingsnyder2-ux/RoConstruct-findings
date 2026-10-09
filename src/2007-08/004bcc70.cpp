// from server: 66% by colin
// roc 2007-08 004bcc70  unit: RakPeer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bcc70
//
// 004bcc70  8b442408             mov eax, dword ptr [esp + 8]
// 004bcc74  8b542404             mov edx, dword ptr [esp + 4]
// 004bcc78  6a01                 push 1
// 004bcc7a  6a01                 push 1
// 004bcc7c  50                   push eax
// 004bcc7d  52                   push edx
// 004bcc7e  e8fdfeffff           call 0x4bcb80
// 004bcc83  85c0                 test eax, eax
// 004bcc85  7503                 jne 0x4bcc8a
// 004bcc87  c20800               ret 8
// 004bcc8a  53                   push ebx
// 004bcc8b  56                   push esi
// 004bcc8c  57                   push edi
// 004bcc8d  33db                 xor ebx, ebx
// 004bcc8f  bfffff0000           mov edi, 0xffff
// 004bcc94  33f6                 xor esi, esi
// 004bcc96  8d88d4070000         lea ecx, [eax + 0x7d4]
// 004bcc9c  8d642400             lea esp, [esp]
// 004bcca0  0fb711               movzx edx, word ptr [ecx]
// 004bcca3  6681faffff           cmp dx, 0xffff
// 004bcca8  7417                 je 0x4bccc1
// 004bccaa  0fb7d2               movzx edx, dx
// 004bccad  3bd7                 cmp edx, edi
// 004bccaf  7d05                 jge 0x4bccb6
// 004bccb1  8b5904               mov ebx, dword ptr [ecx + 4]
// 004bccb4  8bfa                 mov edi, edx
// 004bccb6  83c601               add esi, 1
// 004bccb9  83c108               add ecx, 8
// 004bccbc  83fe05               cmp esi, 5
// 004bccbf  7cdf                 jl 0x4bcca0
// 004bccc1  5f                   pop edi
// 004bccc2  5e                   pop esi
// 004bccc3  8bc3                 mov eax, ebx
// 004bccc5  5b                   pop ebx
// 004bccc6  c20800               ret 8

extern "C" int __cdecl sub_4BCB80(int, int, int, int);

struct RakPeer {
    int getBestPing(int, int);
};

int RakPeer::getBestPing(int a, int b) {
    int r = sub_4BCB80(b, a, 1, 1);
    if (r != 0)
        return 0;
    int best = 0;
    int bestPing = 0xffff;
    int i = 0;
    unsigned short* p = (unsigned short*)(r + 0x7d4);
    do {
        unsigned short v = *p;
        if (v != 0xffff) {
            int ping = v;
            if (ping < bestPing) {
                best = *(int*)(p + 2);
                bestPing = ping;
            }
        }
        i++;
        p += 4;
    } while (i < 5);
    return best;
}
