// from server: 41% by colin
// from server: 40% by colin
// roc 2008-06 004cd920  unit: RBX::Network::PhysicsSender  size: 921 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd920
//
// 004cd920  6aff                 push -1
// 004cd922  64a100000000         mov eax, dword ptr fs:[0]
// 004cd928  68699a7c00           push 0x7c9a69
// 004cd92d  50                   push eax
// 004cd92e  64892500000000       mov dword ptr fs:[0], esp
// 004cd935  81ecd0000000         sub esp, 0xd0
// 004cd93b  53                   push ebx
// 004cd93c  55                   push ebp
// 004cd93d  8be9                 mov ebp, ecx
// 004cd93f  837d4400             cmp dword ptr [ebp + 0x44], 0
// 004cd943  56                   push esi
// 004cd944  57                   push edi
// 004cd945  0f8569010000         jne 0x4cdab4
// 004cd94b  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 004cd94e  50                   push eax
// 004cd94f  e87cffffff           call 0x4cd8d0
// 004cd954  50                   push eax
// 004cd955  8d4c2418             lea ecx, [esp + 0x18]
// 004cd959  51                   push ecx
// 004cd95a  e8e1b01400           call 0x618a40
// 004cd95f  83c40c               add esp, 0xc
// 004cd962  8b10                 mov edx, dword ptr [eax]
// 004cd964  83c004               add eax, 4
// 004cd967  50                   push eax
// 004cd968  8d4d48               lea ecx, [ebp + 0x48]
// 004cd96b  c78424ec00000000000000 mov dword ptr [esp + 0xec], 0
// 004cd976  895544               mov dword ptr [ebp + 0x44], edx
// 004cd979  e8324cf3ff           call 0x4025b0
// 004cd97e  8b742414             mov esi, dword ptr [esp + 0x14]
// 004cd982  c78424e8000000ffffffff mov dword ptr [esp + 0xe8], 0xffffffff
// 004cd98d  85f6                 test esi, esi
// 004cd98f  742a                 je 0x4cd9bb
// 004cd991  8d4604               lea eax, [esi + 4]
// 004cd994  83c9ff               or ecx, 0xffffffff
// 004cd997  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd99b  751e                 jne 0x4cd9bb
// 004cd99d  8b16                 mov edx, dword ptr [esi]
// 004cd99f  8b4204               mov eax, dword ptr [edx + 4]
// 004cd9a2  8bce                 mov ecx, esi
// 004cd9a4  ffd0                 call eax
// 004cd9a6  8d4e08               lea ecx, [esi + 8]
// 004cd9a9  83caff               or edx, 0xffffffff
// 004cd9ac  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd9b0  7509                 jne 0x4cd9bb
// 004cd9b2  8b06                 mov eax, dword ptr [esi]
// 004cd9b4  8b5008               mov edx, dword ptr [eax + 8]
// 004cd9b7  8bce                 mov ecx, esi
// 004cd9b9  ffd2                 call edx
// 004cd9bb  8b742424             mov esi, dword ptr [esp + 0x24]
// 004cd9bf  b870d14c00           mov eax, 0x4cd170
// 004cd9c4  8bf8                 mov edi, eax
// 004cd9c6  8b4544               mov eax, dword ptr [ebp + 0x44]
// 004cd9c9  8b9850010000         mov ebx, dword ptr [eax + 0x150]
// 004cd9cf  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cd9d3  8b9838010000         mov ebx, dword ptr [eax + 0x138]
// 004cd9d9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cd9dd  8b9850010000         mov ebx, dword ptr [eax + 0x150]
// 004cd9e3  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 004cd9e9  8b1b                 mov ebx, dword ptr [ebx]
// 004cd9eb  83ec18               sub esp, 0x18
// 004cd9ee  89442438             mov dword ptr [esp + 0x38], eax
// 004cd9f2  8bc4                 mov eax, esp
// 004cd9f4  8938                 mov dword ptr [eax], edi
// 004cd9f6  33c9                 xor ecx, ecx
// 004cd9f8  894804               mov dword ptr [eax + 4], ecx
// 004cd9fb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004cd9ff  896808               mov dword ptr [eax + 8], ebp
// 004cda02  ba408a6100           mov edx, 0x618a40
// 004cda07  89500c               mov dword ptr [eax + 0xc], edx
// 004cda0a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004cda0e  52                   push edx
// 004cda0f  897010               mov dword ptr [eax + 0x10], esi
// 004cda12  894814               mov dword ptr [eax + 0x14], ecx
// 004cda15  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004cda19  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004cda1d  50                   push eax
// 004cda1e  53                   push ebx
// 004cda1f  51                   push ecx
// 004cda20  8d542448             lea edx, [esp + 0x48]
// 004cda24  52                   push edx
// 004cda25  e8f6ecffff           call 0x4cc720
// 004cda2a  b870d14c00           mov eax, 0x4cd170
// 004cda2f  33c9                 xor ecx, ecx
// 004cda31  8944244c             mov dword ptr [esp + 0x4c], eax
// 004cda35  83c42c               add esp, 0x2c
// 004cda38  8d442420             lea eax, [esp + 0x20]
// 004cda3c  894c2424             mov dword ptr [esp + 0x24], ecx
// 004cda40  50                   push eax
// 004cda41  8d4c246c             lea ecx, [esp + 0x6c]
// 004cda45  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004cda49  e822f9ffff           call 0x4cd370
// 004cda4e  8b4544               mov eax, dword ptr [ebp + 0x44]
// 004cda51  c78424e800000001000000 mov dword ptr [esp + 0xe8], 1
// 004cda5c  85c0                 test eax, eax
// 004cda5e  7405                 je 0x4cda65
// 004cda60  83c014               add eax, 0x14
// 004cda63  eb02                 jmp 0x4cda67
// 004cda65  33c0                 xor eax, eax
// 004cda67  6a0a                 push 0xa
// 004cda69  8d4c246c             lea ecx, [esp + 0x6c]
// 004cda6d  51                   push ecx
// 004cda6e  50                   push eax
// 004cda6f  8d54241c             lea edx, [esp + 0x1c]
// 004cda73  52                   push edx
// 004cda74  b9ecab9700           mov ecx, 0x97abec
// 004cda79  e8c258fdff           call 0x4a3340
// 004cda7e  50                   push eax
// 004cda7f  8d4d4c               lea ecx, [ebp + 0x4c]
// 004cda82  c68424ec00000002     mov byte ptr [esp + 0xec], 2
// 004cda8a  e8b17a0c00           call 0x595540
// 004cda8f  8d4c2410             lea ecx, [esp + 0x10]
// 004cda93  c68424e800000001     mov byte ptr [esp + 0xe8], 1
// 004cda9b  e8d0780c00           call 0x595370
// 004cdaa0  8d4c2468             lea ecx, [esp + 0x68]
// 004cdaa4  c78424e8000000ffffffff mov dword ptr [esp + 0xe8], 0xffffffff
// 004cdaaf  e85c1cfdff           call 0x49f710
// 004cdab4  ff4540               inc dword ptr [ebp + 0x40]
// 004cdab7  8d4c2438             lea ecx, [esp + 0x38]
// 004cdabb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cdac3  e808a8faff           call 0x4782d0
// 004cdac8  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 004cdacb  8b01                 mov eax, dword ptr [ecx]
// 004cdacd  8b5044               mov edx, dword ptr [eax + 0x44]
// 004cdad0  ffd2                 call edx
// 004cdad2  85c0                 test eax, eax
// 004cdad4  7451                 je 0x4cdb27
// 004cdad6  8b8070010000         mov eax, dword ptr [eax + 0x170]
// 004cdadc  89442410             mov dword ptr [esp + 0x10], eax
// 004cdae0  85c0                 test eax, eax
// 004cdae2  7443                 je 0x4cdb27
// 004cdae4  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 004cdaea  8b5104               mov edx, dword ptr [ecx + 4]
// 004cdaed  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 004cdaf4  8b01                 mov eax, dword ptr [ecx]
// 004cdaf6  8b10                 mov edx, dword ptr [eax]
// 004cdaf8  ffd2                 call edx
// 004cdafa  85c0                 test eax, eax
// 004cdafc  7429                 je 0x4cdb27
// 004cdafe  8bc8                 mov ecx, eax
// 004cdb00  e8abb10c00           call 0x598cb0
// 004cdb05  b909000000           mov ecx, 9
// 004cdb0a  8bf0                 mov esi, eax
// 004cdb0c  8d7c2438             lea edi, [esp + 0x38]
// 004cdb10  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cdb12  d94024               fld dword ptr [eax + 0x24]
// 004cdb15  d95c245c             fstp dword ptr [esp + 0x5c]
// 004cdb19  d94028               fld dword ptr [eax + 0x28]
// 004cdb1c  d95c2460             fstp dword ptr [esp + 0x60]
// 004cdb20  d9402c               fld dword ptr [eax + 0x2c]
// 004cdb23  d95c2464             fstp dword ptr [esp + 0x64]
// 004cdb27  e8640dfdff           call 0x49e890
// 004cdb2c  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 004cdb32  b889888888           mov eax, 0x88888889
// 004cdb37  f7e9                 imul ecx
// 004cdb39  03d1                 add edx, ecx
// 004cdb3b  c1fa04               sar edx, 4
// 004cdb3e  8bda                 mov ebx, edx
// 004cdb40  c1eb1f               shr ebx, 0x1f
// 004cdb43  03da                 add ebx, edx
// 004cdb45  7505                 jne 0x4cdb4c
// 004cdb47  bb01000000           mov ebx, 1
// 004cdb4c  8d7d04               lea edi, [ebp + 4]
// 004cdb4f  85ff                 test edi, edi
// 004cdb51  7405                 je 0x4cdb58
// 004cdb53  83c70c               add edi, 0xc
// 004cdb56  eb02                 jmp 0x4cdb5a
// 004cdb58  33ff                 xor edi, edi
// 004cdb5a  85db                 test ebx, ebx
// 004cdb5c  0f8e17010000         jle 0x4cdc79
// 004cdb62  85ff                 test edi, edi
// 004cdb64  7405                 je 0x4cdb6b
// 004cdb66  8d47f4               lea eax, [edi - 0xc]
// 004cdb69  eb02                 jmp 0x4cdb6d
// 004cdb6b  33c0                 xor eax, eax
// 004cdb6d  8b4004               mov eax, dword ptr [eax + 4]
// 004cdb70  8b4054               mov eax, dword ptr [eax + 0x54]
// 004cdb73  85c0                 test eax, eax
// 004cdb75  7405                 je 0x4cdb7c
// 004cdb77  8d70b0               lea esi, [eax - 0x50]
// 004cdb7a  eb02                 jmp 0x4cdb7e
// 004cdb7c  33f6                 xor esi, esi
// 004cdb7e  85ff                 test edi, edi
// 004cdb80  7405                 je 0x4cdb87
// 004cdb82  8d47f4               lea eax, [edi - 0xc]
// 004cdb85  eb02                 jmp 0x4cdb89
// 004cdb87  33c0                 xor eax, eax
// 004cdb89  3b7004               cmp esi, dword ptr [eax + 4]
// 004cdb8c  0f84e7000000         je 0x4cdc79
// 004cdb92  56                   push esi
// 004cdb93  8d8c2494000000       lea ecx, [esp + 0x94]
// 004cdb9a  e8f1c1ffff           call 0x4c9d90
// 004cdb9f  83bc24d400000000     cmp dword ptr [esp + 0xd4], 0
// 004cdba7  c78424e800000003000000 mov dword ptr [esp + 0xe8], 3
// 004cdbb2  7e01                 jle 0x4cdbb5
// 004cdbb4  4b                   dec ebx
// 004cdbb5  8b4540               mov eax, dword ptr [ebp + 0x40]
// 004cdbb8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cdbbc  50                   push eax
// 004cdbbd  51                   push ecx
// 004cdbbe  8d542440             lea edx, [esp + 0x40]
// 004cdbc2  52                   push edx
// 004cdbc3  8d8c249c000000       lea ecx, [esp + 0x9c]
// 004cdbca  e861c2ffff           call 0x4c9e30
// 004cdbcf  84c0                 test al, al
// 004cdbd1  7466                 je 0x4cdc39
// 004cdbd3  85ff                 test edi, edi
// 004cdbd5  7405                 je 0x4cdbdc
// 004cdbd7  8d47f4               lea eax, [edi - 0xc]
// 004cdbda  eb02                 jmp 0x4cdbde
// 004cdbdc  33c0                 xor eax, eax
// 004cdbde  56                   push esi
// 004cdbdf  8d8c2494000000       lea ecx, [esp + 0x94]
// 004cdbe6  51                   push ecx
// 004cdbe7  8d480c               lea ecx, [eax + 0xc]
// 004cdbea  e8f1e9ffff           call 0x4cc5e0
// 004cdbef  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 004cdbf6  c78424e8000000ffffffff mov dword ptr [esp + 0xe8], 0xffffffff
// 004cdc01  85f6                 test esi, esi
// 004cdc03  742a                 je 0x4cdc2f
// 004cdc05  8d5604               lea edx, [esi + 4]
// 004cdc08  83c8ff               or eax, 0xffffffff
// 004cdc0b  f00fc102             lock xadd dword ptr [edx], eax
// 004cdc0f  751e                 jne 0x4cdc2f
// 004cdc11  8b16                 mov edx, dword ptr [esi]
// 004cdc13  8b4204               mov eax, dword ptr [edx + 4]
// 004cdc16  8bce                 mov ecx, esi
// 004cdc18  ffd0                 call eax
// 004cdc1a  8d4e08               lea ecx, [esi + 8]
// 004cdc1d  83caff               or edx, 0xffffffff
// 004cdc20  f00fc111             lock xadd dword ptr [ecx], edx
// 004cdc24  7509                 jne 0x4cdc2f
// 004cdc26  8b06                 mov eax, dword ptr [esi]
// 004cdc28  8b5008               mov edx, dword ptr [eax + 8]
// 004cdc2b  8bce                 mov ecx, esi
// 004cdc2d  ffd2                 call edx
// 004cdc2f  85db                 test ebx, ebx
// 004cdc31  0f8f2bffffff         jg 0x4cdb62
// 004cdc37  eb40                 jmp 0x4cdc79
// 004cdc39  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 004cdc40  c78424e8000000ffffffff mov dword ptr [esp + 0xe8], 0xffffffff
// 004cdc4b  85f6                 test esi, esi
// 004cdc4d  742a                 je 0x4cdc79
// 004cdc4f  8d4604               lea eax, [esi + 4]
// 004cdc52  83c9ff               or ecx, 0xffffffff
// 004cdc55  f00fc108             lock xadd dword ptr [eax], ecx
// 004cdc59  751e                 jne 0x4cdc79
// 004cdc5b  8b16                 mov edx, dword ptr [esi]
// 004cdc5d  8b4204               mov eax, dword ptr [edx + 4]
// 004cdc60  8bce                 mov ecx, esi
// 004cdc62  ffd0                 call eax
// 004cdc64  8d4e08               lea ecx, [esi + 8]
// 004cdc67  83caff               or edx, 0xffffffff
// 004cdc6a  f00fc111             lock xadd dword ptr [ecx], edx
// 004cdc6e  7509                 jne 0x4cdc79
// 004cdc70  8b06                 mov eax, dword ptr [esi]
// 004cdc72  8b5008               mov edx, dword ptr [eax + 8]
// 004cdc75  8bce                 mov ecx, esi
// 004cdc77  ffd2                 call edx
// 004cdc79  8d4504               lea eax, [ebp + 4]
// 004cdc7c  85c0                 test eax, eax
// 004cdc7e  740a                 je 0x4cdc8a
// 004cdc80  83c00c               add eax, 0xc
// 004cdc83  7405                 je 0x4cdc8a
// 004cdc85  83c0f4               add eax, -0xc
// 004cdc88  eb02                 jmp 0x4cdc8c
// 004cdc8a  33c0                 xor eax, eax
// 004cdc8c  8b4004               mov eax, dword ptr [eax + 4]
// 004cdc8f  8b4064               mov eax, dword ptr [eax + 0x64]
// 004cdc92  85c0                 test eax, eax
// 004cdc94  7405                 je 0x4cdc9b
// 004cdc96  83c0a0               add eax, -0x60
// 004cdc99  eb02                 jmp 0x4cdc9d
// 004cdc9b  33c0                 xor eax, eax
// 004cdc9d  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 004cdca4  5f                   pop edi
// 004cdca5  5e                   pop esi
// 004cdca6  894538               mov dword ptr [ebp + 0x38], eax
// 004cdca9  5d                   pop ebp
// 004cdcaa  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdcb1  5b                   pop ebx
// 004cdcb2  81c4dc000000         add esp, 0xdc
// 004cdcb8  c3                   ret 
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_004cd920 {
    char pad0[0x38];
    int m_38;
    int m_3c;
    int m_40;
    int m_44;
    char pad48[0x4];
    char m_4c;

    int f();
};

extern "C" int __cdecl sub_4cd8d0(int);
extern "C" int __cdecl sub_618a40(int, int, int);
extern "C" int __cdecl sub_4025b0(int, int);
extern "C" int __cdecl sub_4cc720(int, int, int, int, int, int);
extern "C" int __cdecl sub_4cd370(int, int);
extern "C" int __cdecl sub_4a3340(int, int, int, int);
extern "C" int __cdecl sub_595540(int, int);
extern "C" int __cdecl sub_595370(int);
extern "C" int __cdecl sub_49f710(int);
extern "C" int __cdecl sub_4782d0(int);
extern "C" int __cdecl sub_598cb0(int);
extern "C" int __cdecl sub_49e890();
extern "C" int __cdecl sub_4c9d90(int, int);
extern "C" int __cdecl sub_4c9e30(int, int, int, int);
extern "C" int __cdecl sub_4cc5e0(int, int, int);

int S_func_004cd920::f()
{
    char tmp[0x100];
    _ReadWriteBarrier();
    if (m_44 == 0) {
        int v = sub_4cd8d0(m_3c);
        sub_618a40((int)tmp, v, 0);
        int edx = *(int*)tmp;
        m_44 = edx;
        sub_4025b0((int)&m_4c, (int)tmp + 4);
        int esi = *(int*)tmp;
        if (esi) {
            if (_InterlockedExchangeAdd((volatile long*)(esi + 4), -1) == 1) {
                (*(void(**)(int))*(int*)esi)(esi);
                if (_InterlockedExchangeAdd((volatile long*)(esi + 8), -1) == 1) {
                    (*(void(**)(int))(*(int*)esi + 8))(esi);
                }
            }
        }
        int a = *(int*)(m_44 + 0x150);
        int b = *(int*)(m_44 + 0x138);
        int c = *(int*)(m_44 + 0x150);
        int d = *(int*)(m_44 + 0x138);
        int e = *(int*)c;
        sub_4cc720((int)tmp, d, e, b, a, 0);
        sub_4cd370((int)tmp, 0);
        int p = m_44 ? m_44 + 0x14 : 0;
        sub_4a3340(0x97abec, (int)tmp, p, 10);
        sub_595540((int)&m_4c, (int)tmp);
        sub_595370((int)tmp);
        sub_49f710((int)tmp);
    }
    m_40++;
    sub_4782d0((int)tmp);
    int r = (*(int(**)(int))(*(int*)m_3c + 0x44))(m_3c);
    if (r) {
        int q = *(int*)(r + 0x170);
        if (q) {
            int ecx = *(int*)(q + 0x134);
            int edx = *(int*)(ecx + 4);
            int v2 = edx + q + 0x134;
            int r2 = (*(int(**)(int))*(int*)v2)(v2);
            if (r2) {
                int* src = (int*)sub_598cb0(r2);
                int dst[9];
                for (int i = 0; i < 9; i++) dst[i] = src[i];
                float f1 = *(float*)((char*)src + 0x24);
                float f2 = *(float*)((char*)src + 0x28);
                float f3 = *(float*)((char*)src + 0x2c);
                (void)f1; (void)f2; (void)f3;
            }
        }
    }
    int g = sub_49e890();
    int ecx2 = *(int*)(g + 0x13c);
    int edx2 = (int)(((long long)ecx2 * 0x88888889LL) >> 32);
    edx2 += ecx2;
    edx2 >>= 4;
    int ebx = edx2;
    ebx = (unsigned)ebx >> 31;
    ebx += edx2;
    if (ebx == 0) ebx = 1;
    int edi = (int)&m_38;
    if (edi) edi += 0xc;
    while (ebx > 0) {
        int eax2 = edi ? edi - 0xc : 0;
        int eax3 = *(int*)(eax2 + 4);
        int eax4 = *(int*)(eax3 + 0x54);
        int esi2 = eax4 ? eax4 - 0x50 : 0;
        int eax5 = edi ? edi - 0xc : 0;
        if (esi2 == *(int*)(eax5 + 4)) break;
        sub_4c9d90((int)tmp, esi2);
        if (*(int*)(tmp + 0x8c) > 0) ebx--;
        sub_4c9e30((int)tmp, (int)tmp, m_40, 0);
        if (tmp[0]) {
            int eax6 = edi ? edi - 0xc : 0;
            sub_4cc5e0(eax6 + 0xc, (int)tmp, esi2);
            int esi3 = *(int*)tmp;
            if (esi3) {
                if (_InterlockedExchangeAdd((volatile long*)(esi3 + 4), -1) == 1) {
                    (*(void(**)(int))*(int*)esi3)(esi3);
                    if (_InterlockedExchangeAdd((volatile long*)(esi3 + 8), -1) == 1) {
                        (*(void(**)(int))(*(int*)esi3 + 8))(esi3);
                    }
                }
            }
            if (ebx > 0) continue;
            break;
        } else {
            int esi4 = *(int*)tmp;
            if (esi4) {
                if (_InterlockedExchangeAdd((volatile long*)(esi4 + 4), -1) == 1) {
                    (*(void(**)(int))*(int*)esi4)(esi4);
                    if (_InterlockedExchangeAdd((volatile long*)(esi4 + 8), -1) == 1) {
                        (*(void(**)(int))(*(int*)esi4 + 8))(esi4);
                    }
                }
            }
            break;
        }
    }
    int eax7 = (int)&m_38;
    if (eax7) {
        eax7 += 0xc;
        if (eax7) eax7 -= 0xc;
        else eax7 = 0;
    } else eax7 = 0;
    int eax8 = *(int*)(eax7 + 4);
    int eax9 = *(int*)(eax8 + 0x64);
    m_38 = eax9 ? eax9 - 0x60 : 0;
    return 0;
}
