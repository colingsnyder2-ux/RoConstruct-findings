// from server: 48% by colin
// from server: 47% by colin
// roc 2008-06 006a189b  unit: ActiveDocView  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a189b
//
// 006a189b  688e216a00           push 0x6a218e
// 006a18a0  e80affffff           call 0x6a17af
// 006a18a5  a1fcdc9700           mov eax, dword ptr [0x97dcfc]
// 006a18aa  c70424dcdc9700       mov dword ptr [esp], 0x97dcdc
// 006a18b1  ff35f8dc9700         push dword ptr [0x97dcf8]
// 006a18b7  a3dcdc9700           mov dword ptr [0x97dcdc], eax
// 006a18bc  68ccdc9700           push 0x97dccc
// 006a18c1  68d0dc9700           push 0x97dcd0
// 006a18c6  68c8dc9700           push 0x97dcc8
// 006a18cb  ff1588268000         call dword ptr [0x802688]
// 006a18d1  83c414               add esp, 0x14
// 006a18d4  a3d8dc9700           mov dword ptr [0x97dcd8], eax
// 006a18d9  85c0                 test eax, eax
// 006a18db  7d08                 jge 0x6a18e5
// 006a18dd  6a08                 push 8
// 006a18df  e87e080000           call 0x6a2162
// 006a18e4  59                   pop ecx
// 006a18e5  c3                   ret 
// 006a18e6  6a58                 push 0x58
// 006a18e8  68400b9000           push 0x900b40
// 006a18ed  e8ca060000           call 0x6a1fbc
// 006a18f2  33db                 xor ebx, ebx
// 006a18f4  895de4               mov dword ptr [ebp - 0x1c], ebx
// 006a18f7  895dfc               mov dword ptr [ebp - 4], ebx
// 006a18fa  8d4598               lea eax, [ebp - 0x68]
// 006a18fd  50                   push eax
// 006a18fe  ff15c4228000         call dword ptr [0x8022c4]
// 006a1904  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 006a190b  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006a1912  64a118000000         mov eax, dword ptr fs:[0x18]
// 006a1918  8b7004               mov esi, dword ptr [eax + 4]
// 006a191b  bffcf69700           mov edi, 0x97f6fc
// 006a1920  6a00                 push 0
// 006a1922  56                   push esi
// 006a1923  57                   push edi
// 006a1924  ff157c228000         call dword ptr [0x80227c]
// 006a192a  85c0                 test eax, eax
// 006a192c  7418                 je 0x6a1946
// 006a192e  3bc6                 cmp eax, esi
// 006a1930  7507                 jne 0x6a1939
// 006a1932  33f6                 xor esi, esi
// 006a1934  46                   inc esi
// 006a1935  8bde                 mov ebx, esi
// 006a1937  eb10                 jmp 0x6a1949
// 006a1939  68e8030000           push 0x3e8
// 006a193e  ff1560228000         call dword ptr [0x802260]
// 006a1944  ebda                 jmp 0x6a1920
// 006a1946  33f6                 xor esi, esi
// 006a1948  46                   inc esi
// 006a1949  a1f8f69700           mov eax, dword ptr [0x97f6f8]
// 006a194e  3bc6                 cmp eax, esi
// 006a1950  750a                 jne 0x6a195c
// 006a1952  6a1f                 push 0x1f
// 006a1954  e809080000           call 0x6a2162
// 006a1959  59                   pop ecx
// 006a195a  eb2f                 jmp 0x6a198b
// 006a195c  a1f8f69700           mov eax, dword ptr [0x97f6f8]
// 006a1961  85c0                 test eax, eax
// 006a1963  7520                 jne 0x6a1985
// 006a1965  8935f8f69700         mov dword ptr [0x97f6f8], esi
// 006a196b  6820aa8000           push 0x80aa20
// 006a1970  680caa8000           push 0x80aa0c
// 006a1975  e89a090000           call 0x6a2314
// 006a197a  59                   pop ecx
// 006a197b  59                   pop ecx
// 006a197c  85c0                 test eax, eax
// 006a197e  740b                 je 0x6a198b
// 006a1980  e92e010000           jmp 0x6a1ab3
// 006a1985  8935e4dc9700         mov dword ptr [0x97dce4], esi
// 006a198b  a1f8f69700           mov eax, dword ptr [0x97f6f8]
// 006a1990  3bc6                 cmp eax, esi
// 006a1992  751b                 jne 0x6a19af
// 006a1994  6808aa8000           push 0x80aa08
// 006a1999  68744f8000           push 0x804f74
// 006a199e  e86b090000           call 0x6a230e
// 006a19a3  59                   pop ecx
// 006a19a4  59                   pop ecx
// 006a19a5  c705f8f6970002000000 mov dword ptr [0x97f6f8], 2
// 006a19af  85db                 test ebx, ebx
// 006a19b1  7508                 jne 0x6a19bb
// 006a19b3  53                   push ebx
// 006a19b4  57                   push edi
// 006a19b5  ff1584228000         call dword ptr [0x802284]
// 006a19bb  833d04f7970000       cmp dword ptr [0x97f704], 0
// 006a19c2  741b                 je 0x6a19df
// 006a19c4  6804f79700           push 0x97f704
// 006a19c9  e882080000           call 0x6a2250
// 006a19ce  59                   pop ecx
// 006a19cf  85c0                 test eax, eax
// 006a19d1  740c                 je 0x6a19df
// 006a19d3  6a00                 push 0
// 006a19d5  6a02                 push 2
// 006a19d7  6a00                 push 0
// 006a19d9  ff1504f79700         call dword ptr [0x97f704]
// 006a19df  a178268000           mov eax, dword ptr [0x802678]
// 006a19e4  8b30                 mov esi, dword ptr [eax]
// 006a19e6  8975e0               mov dword ptr [ebp - 0x20], esi
// 006a19e9  8a06                 mov al, byte ptr [esi]
// 006a19eb  3c20                 cmp al, 0x20
// 006a19ed  774c                 ja 0x6a1a3b
// 006a19ef  84c0                 test al, al
// 006a19f1  7406                 je 0x6a19f9
// 006a19f3  837de400             cmp dword ptr [ebp - 0x1c], 0
// 006a19f7  7542                 jne 0x6a1a3b
// 006a19f9  8a06                 mov al, byte ptr [esi]
// 006a19fb  84c0                 test al, al
// 006a19fd  740a                 je 0x6a1a09
// 006a19ff  3c20                 cmp al, 0x20
// 006a1a01  7706                 ja 0x6a1a09
// 006a1a03  46                   inc esi
// 006a1a04  8975e0               mov dword ptr [ebp - 0x20], esi
// 006a1a07  ebf0                 jmp 0x6a19f9
// 006a1a09  f645c401             test byte ptr [ebp - 0x3c], 1
// 006a1a0d  7406                 je 0x6a1a15
// 006a1a0f  0fb745c8             movzx eax, word ptr [ebp - 0x38]
// 006a1a13  eb03                 jmp 0x6a1a18
// 006a1a15  6a0a                 push 0xa
// 006a1a17  58                   pop eax
// 006a1a18  50                   push eax
// 006a1a19  56                   push esi
// 006a1a1a  6a00                 push 0
// 006a1a1c  6800004000           push 0x400000
// 006a1a21  e8daaf1100           call 0x7bca00
// 006a1a26  a3e0dc9700           mov dword ptr [0x97dce0], eax
// 006a1a2b  833dd4dc970000       cmp dword ptr [0x97dcd4], 0
// 006a1a32  755b                 jne 0x6a1a8f
// 006a1a34  50                   push eax
// 006a1a35  ff15f4278000         call dword ptr [0x8027f4]
// 006a1a3b  3c22                 cmp al, 0x22
// 006a1a3d  750b                 jne 0x6a1a4a
// 006a1a3f  33c9                 xor ecx, ecx
// 006a1a41  394de4               cmp dword ptr [ebp - 0x1c], ecx
// 006a1a44  0f94c1               sete cl
// 006a1a47  894de4               mov dword ptr [ebp - 0x1c], ecx
// 006a1a4a  0fb6c0               movzx eax, al
// 006a1a4d  50                   push eax
// 006a1a4e  ff150c288000         call dword ptr [0x80280c]
// 006a1a54  59                   pop ecx
// 006a1a55  85c0                 test eax, eax
// 006a1a57  7404                 je 0x6a1a5d
// 006a1a59  46                   inc esi
// 006a1a5a  8975e0               mov dword ptr [ebp - 0x20], esi
// 006a1a5d  46                   inc esi
// 006a1a5e  eb86                 jmp 0x6a19e6
#include <intrin.h>

extern "C" {
    int __stdcall GetStartupInfoA(void*);
    int __stdcall InterlockedCompareExchange(int*, int, int);
    int __stdcall InterlockedExchange(int*, int);
    void __stdcall Sleep(unsigned int);
    void __cdecl __getmainargs(int*, char***, char***, int, void*);
    char** __cdecl _acmdln();
    void __cdecl _amsg_exit(int);
    int __cdecl _initterm_e(void*, void*);
    void __cdecl _initterm(void*, void*);
    int __cdecl _ismbblead(unsigned int);
    void __cdecl exit(int);
}

void f_6a17af(int);
void f_6a2162(int);
void f_6a1fbc(int, int);
int f_6a2250(void*);
int f_6a230e(void*, void*);
int f_6a2314(void*, void*);
int f_7bca00(int, int, int, int);

extern int g_97dcfc;
extern int g_97dcdc;
extern int g_97dcf8;
extern int g_97dccc;
extern int g_97dcd0;
extern int g_97dcc8;
extern int g_97dcd8;
extern int g_97dce4;
extern int g_97f6fc;
extern int g_97f6f8;
extern int g_97f704;
extern int g_97dce0;
extern int g_97dcd4;
extern int g_802688;
extern int g_8022c4;
extern int g_80227c;
extern int g_802260;
extern int g_802284;
extern int g_802678;
extern int g_8027f4;
extern int g_80280c;

void f_6a189b()
{
    f_6a17af(0x6a218e);
    g_97dcdc = g_97dcfc;
    int r = ((int (__stdcall*)(int, int*, int*, int*, int))g_802688)(g_97dcf8, &g_97dcc8, &g_97dcd0, &g_97dccc, (int)&g_97dcdc);
    g_97dcd8 = r;
    if (r < 0)
        f_6a2162(8);
}

void f_6a18e6()
{
    f_6a1fbc(0x58, 0x900b40);
    int ebx = 0;
    _ReadWriteBarrier();
    int quoted = 0;
    char buf[0x50];
    ((void (__stdcall*)(void*))g_8022c4)(buf);
    int esi = *(int*)(*(int*)(*(int*)0x18) + 4);
    int edi = (int)&g_97f6fc;
    for (;;) {
        int r = ((int (__stdcall*)(int, int, int))g_80227c)(edi, esi, 0);
        if (r == 0) {
            esi = 1;
            break;
        }
        if (r == esi) {
            esi = 1;
            ebx = 1;
            break;
        }
        ((void (__stdcall*)(int))g_802260)(1000);
    }
    if (g_97f6f8 == esi) {
        f_6a2162(0x1f);
    } else if (g_97f6f8 == 0) {
        g_97f6f8 = esi;
        if (f_6a2314((void*)0x80aa0c, (void*)0x80aa20)) {
            return;
        }
    } else {
        g_97dce4 = esi;
    }
    if (g_97f6f8 == esi) {
        f_6a230e((void*)0x804f74, (void*)0x80aa08);
        g_97f6f8 = 2;
    }
    if (ebx == 0) {
        ((void (__stdcall*)(int, int))g_802284)(edi, ebx);
    }
    if (g_97f704 != 0) {
        if (f_6a2250(&g_97f704)) {
            ((void (__stdcall*)(int, int, int))g_97f704)(0, 2, 0);
        }
    }
    char* p = *(char**)g_802678;
    for (;;) {
        char c = *p;
        if ((unsigned char)c <= 0x20 && (c != 0 || quoted == 0)) {
            while (*p != 0 && (unsigned char)*p <= 0x20)
                p++;
            int term = (buf[0x2c] & 1) ? *(unsigned short*)(buf + 0x30) : 10;
            g_97dce0 = f_7bca00(0x400000, 0, (int)p, term);
            if (g_97dcd4 == 0) {
                ((void (__stdcall*)(int))g_8027f4)(g_97dce0);
            }
        }
        if (c == '"') {
            quoted = (quoted == 0);
        }
        if (((int (__stdcall*)(int))g_80280c)((unsigned char)c))
            p++;
        p++;
    }
}
