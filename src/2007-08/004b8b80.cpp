// from server: 76% by colin
// roc 2007-08 004b8b80  unit: RakPeer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8b80
//
// 004b8b80  8b442408             mov eax, dword ptr [esp + 8]
// 004b8b84  85c0                 test eax, eax
// 004b8b86  7c31                 jl 0x4b8bb9
// 004b8b88  0fb75108             movzx edx, word ptr [ecx + 8]
// 004b8b8c  3bc2                 cmp eax, edx
// 004b8b8e  7d29                 jge 0x4b8bb9
// 004b8b90  8b892c020000         mov ecx, dword ptr [ecx + 0x22c]
// 004b8b96  69c040080000         imul eax, eax, 0x840
// 004b8b9c  03c8                 add ecx, eax
// 004b8b9e  83b93808000008       cmp dword ptr [ecx + 0x838], 8
// 004b8ba5  7512                 jne 0x4b8bb9
// 004b8ba7  8b5104               mov edx, dword ptr [ecx + 4]
// 004b8baa  8b442404             mov eax, dword ptr [esp + 4]
// 004b8bae  8b4908               mov ecx, dword ptr [ecx + 8]
// 004b8bb1  894804               mov dword ptr [eax + 4], ecx
// 004b8bb4  8910                 mov dword ptr [eax], edx
// 004b8bb6  c20800               ret 8
// 004b8bb9  8b442404             mov eax, dword ptr [esp + 4]
// 004b8bbd  8b155c2f8900         mov edx, dword ptr [0x892f5c]
// 004b8bc3  8b0d602f8900         mov ecx, dword ptr [0x892f60]
// 004b8bc9  894804               mov dword ptr [eax + 4], ecx
// 004b8bcc  8910                 mov dword ptr [eax], edx
// 004b8bce  c20800               ret 8

struct RakPeer
{
    char pad_0[8];
    unsigned short field_8;
    char pad_a[0x22c - 0xa];
    char* field_22c;
    void func(int* out, int index);
};

extern int G_892f5c;
extern int G_892f60;

void RakPeer::func(int* out, int index)
{
    if (index >= 0 && index < (int)field_8)
    {
        char* p = field_22c + index * 0x840;
        if (*(int*)(p + 0x838) == 8)
        {
            out[0] = *(int*)(p + 4);
            out[1] = *(int*)(p + 8);
            return;
        }
    }
    out[0] = G_892f5c;
    out[1] = G_892f60;
}
