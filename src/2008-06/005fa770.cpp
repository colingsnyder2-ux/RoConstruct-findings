// from server: 68% by colin
// roc 2008-06 005fa770  unit: UString_sink::?$stream_buffer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fa770
//
// 005fa770  8b442404             mov eax, dword ptr [esp + 4]
// 005fa774  53                   push ebx
// 005fa775  55                   push ebp
// 005fa776  56                   push esi
// 005fa777  8bf1                 mov esi, ecx
// 005fa779  8b6e04               mov ebp, dword ptr [esi + 4]
// 005fa77c  b901000000           mov ecx, 1
// 005fa781  894604               mov dword ptr [esi + 4], eax
// 005fa784  57                   push edi
// 005fa785  840dc8b59700         test byte ptr [0x97b5c8], cl
// 005fa78b  7513                 jne 0x5fa7a0
// 005fa78d  090dc8b59700         or dword ptr [0x97b5c8], ecx
// 005fa793  bb0a000000           mov ebx, 0xa
// 005fa798  891dc4b59700         mov dword ptr [0x97b5c4], ebx
// 005fa79e  eb06                 jmp 0x5fa7a6
// 005fa7a0  8b1dc4b59700         mov ebx, dword ptr [0x97b5c4]
// 005fa7a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fa7a9  8b7e04               mov edi, dword ptr [esi + 4]
// 005fa7ac  3bf9                 cmp edi, ecx
// 005fa7ae  0f8e8a000000         jle 0x5fa83e
// 005fa7b4  85c9                 test ecx, ecx
// 005fa7b6  7512                 jne 0x5fa7ca
// 005fa7b8  55                   push ebp
// 005fa7b9  8bce                 mov ecx, esi
// 005fa7bb  894608               mov dword ptr [esi + 8], eax
// 005fa7be  e8bd78f0ff           call 0x502080
// 005fa7c3  5f                   pop edi
// 005fa7c4  5e                   pop esi
// 005fa7c5  5d                   pop ebp
// 005fa7c6  5b                   pop ebx
// 005fa7c7  c20800               ret 8
// 005fa7ca  3bfb                 cmp edi, ebx
// 005fa7cc  7d12                 jge 0x5fa7e0
// 005fa7ce  55                   push ebp
// 005fa7cf  8bce                 mov ecx, esi
// 005fa7d1  895e08               mov dword ptr [esi + 8], ebx
// 005fa7d4  e8a778f0ff           call 0x502080
// 005fa7d9  5f                   pop edi
// 005fa7da  5e                   pop esi
// 005fa7db  5d                   pop ebp
// 005fa7dc  5b                   pop ebx
// 005fa7dd  c20800               ret 8
// 005fa7e0  d90580e38100         fld dword ptr [0x81e380]
// 005fa7e6  8bc1                 mov eax, ecx
// 005fa7e8  03c0                 add eax, eax
// 005fa7ea  03c0                 add eax, eax
// 005fa7ec  3d801a0600           cmp eax, 0x61a80
// 005fa7f1  760a                 jbe 0x5fa7fd
// 005fa7f3  ddd8                 fstp st(0)
// 005fa7f5  d9057ce38100         fld dword ptr [0x81e37c]
// 005fa7fb  eb0f                 jmp 0x5fa80c
// 005fa7fd  3d00fa0000           cmp eax, 0xfa00
// 005fa802  7608                 jbe 0x5fa80c
// 005fa804  ddd8                 fstp st(0)
// 005fa806  d90534c48100         fld dword ptr [0x81c434]
// 005fa80c  8bd9                 mov ebx, ecx
// 005fa80e  895c2418             mov dword ptr [esp + 0x18], ebx
// 005fa812  da4c2418             fimul dword ptr [esp + 0x18]
// 005fa816  e8d56f0a00           call 0x6a17f0
// 005fa81b  2bc3                 sub eax, ebx
// 005fa81d  03c7                 add eax, edi
// 005fa81f  894608               mov dword ptr [esi + 8], eax
// 005fa822  8b0dc4b59700         mov ecx, dword ptr [0x97b5c4]
// 005fa828  3bc1                 cmp eax, ecx
// 005fa82a  7d03                 jge 0x5fa82f
// 005fa82c  894e08               mov dword ptr [esi + 8], ecx
// 005fa82f  55                   push ebp
// 005fa830  8bce                 mov ecx, esi
// 005fa832  e84978f0ff           call 0x502080
// 005fa837  5f                   pop edi
// 005fa838  5e                   pop esi
// 005fa839  5d                   pop ebp
// 005fa83a  5b                   pop ebx
// 005fa83b  c20800               ret 8
// 005fa83e  b856555555           mov eax, 0x55555556
// 005fa843  f7e9                 imul ecx
// 005fa845  8bc2                 mov eax, edx
// 005fa847  c1e81f               shr eax, 0x1f
// 005fa84a  03c2                 add eax, edx
// 005fa84c  3bf8                 cmp edi, eax
// 005fa84e  7f19                 jg 0x5fa869
// 005fa850  807c241800           cmp byte ptr [esp + 0x18], 0
// 005fa855  7412                 je 0x5fa869
// 005fa857  3bfb                 cmp edi, ebx
// 005fa859  7e0e                 jle 0x5fa869
// 005fa85b  3bfd                 cmp edi, ebp
// 005fa85d  7c02                 jl 0x5fa861
// 005fa85f  8bfd                 mov edi, ebp
// 005fa861  57                   push edi
// 005fa862  8bce                 mov ecx, esi
// 005fa864  e81778f0ff           call 0x502080
// 005fa869  5f                   pop edi
// 005fa86a  5e                   pop esi
// 005fa86b  5d                   pop ebp
// 005fa86c  5b                   pop ebx
// 005fa86d  c20800               ret 8

extern float G_0081e380;
extern float G_0081e37c;
extern float G_0081c434;
extern int G_0097b5c4;
extern unsigned char G_0097b5c8;

extern "C" int __cdecl func_006a17f0(float);

struct UString_sink_stream_buffer
{
    int field_0;
    int field_4;
    int field_8;
    void func_00502080(int);
    void func_005fa770(int, int);
};

void UString_sink_stream_buffer::func_005fa770(int a, int b)
{
    int old = field_4;
    field_4 = a;

    int limit;
    if (!(G_0097b5c8 & 1))
    {
        G_0097b5c8 |= 1;
        G_0097b5c4 = 10;
        limit = 10;
    }
    else
    {
        limit = G_0097b5c4;
    }

    int cur = field_8;
    int val = field_4;

    if (val > cur)
    {
        if (cur == 0)
        {
            field_8 = a;
            func_00502080(old);
            return;
        }
        if (val < limit)
        {
            field_8 = limit;
            func_00502080(old);
            return;
        }

        float f = G_0081e380;
        unsigned int sz = (unsigned int)cur * 4;
        if (sz > 0x61a80)
        {
            f = G_0081e37c;
        }
        else if (sz > 0xfa00)
        {
            f = G_0081c434;
        }

        int tmp = cur;
        int r = func_006a17f0(f * (float)tmp);
        r = r - tmp + val;
        field_8 = r;
        if (r < G_0097b5c4)
            field_8 = G_0097b5c4;
        func_00502080(old);
        return;
    }

    int third = cur / 3;
    if (val <= third)
    {
        if (*(unsigned char*)&a == 0)
            return;
        if (val <= limit)
            return;
        if (val < old)
            val = old;
        func_00502080(val);
    }
}
