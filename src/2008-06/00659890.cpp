// from server: 100% by king_originala
// roc 2008-06 00659890  unit: RBX::BallBallContact  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659890
//
// 00659890  53                   push ebx
// 00659891  55                   push ebp
// 00659892  56                   push esi
// 00659893  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00659897  57                   push edi
// 00659898  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065989c  8b7708               mov esi, dword ptr [edi + 8]
// 0065989f  8b5704               mov edx, dword ptr [edi + 4]
// 006598a2  69f6b7fff904         imul esi, esi, 0x4f9ffb7
// 006598a8  69d29f402701         imul edx, edx, 0x127409f
// 006598ae  33f2                 xor esi, edx
// 006598b0  8b17                 mov edx, dword ptr [edi]
// 006598b2  69d25df46604         imul edx, edx, 0x466f45d
// 006598b8  8bc1                 mov eax, ecx
// 006598ba  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 006598bd  0fb74920             movzx ecx, word ptr [ecx + 0x20]
// 006598c1  33f2                 xor esi, edx
// 006598c3  baffff0000           mov edx, 0xffff
// 006598c8  d3fa                 sar edx, cl
// 006598ca  8d0c49               lea ecx, [ecx + ecx*2]
// 006598cd  8d5cc80c             lea ebx, [eax + ecx*8 + 0xc]
// 006598d1  23f2                 and esi, edx
// 006598d3  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006598d6  2b530c               sub edx, dword ptr [ebx + 0xc]
// 006598d9  c1fa03               sar edx, 3
// 006598dc  3bf2                 cmp esi, edx
// 006598de  7206                 jb 0x6598e6
// 006598e0  ff1590288000         call dword ptr [0x802890]
// 006598e6  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006598e9  8b04f0               mov eax, dword ptr [eax + esi*8]
// 006598ec  8d642400             lea esp, [esp]
// 006598f0  3928                 cmp dword ptr [eax], ebp
// 006598f2  7517                 jne 0x65990b
// 006598f4  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006598f7  3b0f                 cmp ecx, dword ptr [edi]
// 006598f9  7510                 jne 0x65990b
// 006598fb  8b5018               mov edx, dword ptr [eax + 0x18]
// 006598fe  3b5704               cmp edx, dword ptr [edi + 4]
// 00659901  7508                 jne 0x65990b
// 00659903  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00659906  3b4f08               cmp ecx, dword ptr [edi + 8]
// 00659909  7407                 je 0x659912
// 0065990b  8b4004               mov eax, dword ptr [eax + 4]
// 0065990e  85c0                 test eax, eax
// 00659910  75de                 jne 0x6598f0
// 00659912  5f                   pop edi
// 00659913  5e                   pop esi
// 00659914  5d                   pop ebp
// 00659915  5b                   pop ebx
// 00659916  c20800               ret 8

extern "C" void (__stdcall *_invalid_parameter_noinfo)();

struct BallBallContact {
    int find(int a, int b);
};

int BallBallContact::find(int a, int b)
{
    int* key = (int*)b;
    unsigned int h = (unsigned int)key[2] * 0x4f9ffb7u;
    h ^= (unsigned int)key[1] * 0x127409fu;
    h ^= (unsigned int)key[0] * 0x466f45du;

    int shift = *(unsigned short*)(*(int*)(a + 0x64) + 0x20);
    unsigned int mask = (unsigned int)(0xffff >> shift);
    h &= mask;

    int* table = (int*)((char*)this + shift * 24 + 0xc);
    int count = (table[4] - table[3]) >> 3;
    if (h >= (unsigned int)count)
        _invalid_parameter_noinfo();

    int* node = (int*)(table[3] + h * 8);
    int* entry = (int*)*node;
    for (;;)
    {
        if (entry[0] == a && entry[5] == key[0] && entry[6] == key[1] && entry[7] == key[2])
            break;
        entry = (int*)entry[1];
        if (!entry)
            break;
    }
    return (int)entry;
}
