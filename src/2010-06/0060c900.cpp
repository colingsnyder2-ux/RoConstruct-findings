// from server: 72% by atomic.potato
// roc 2010-06 0060c900  unit: RBX::VScriptContext::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c900
//
// 0060c900  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060c905  56                   push esi
// 0060c906  57                   push edi
// 0060c907  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060c90b  50                   push eax
// 0060c90c  6a02                 push 2
// 0060c90e  57                   push edi
// 0060c90f  e8fc641100           call 0x722e10
// 0060c914  8b0d582abe00         mov ecx, dword ptr [0xbe2a58]
// 0060c91a  51                   push ecx
// 0060c91b  6a01                 push 1
// 0060c91d  57                   push edi
// 0060c91e  8bf0                 mov esi, eax
// 0060c920  e8eb641100           call 0x722e10
// 0060c925  8bc8                 mov ecx, eax
// 0060c927  f30f1001             movss xmm0, dword ptr [ecx]
// 0060c92b  83c418               add esp, 0x18
// 0060c92e  0f2e06               ucomiss xmm0, dword ptr [esi]
// 0060c931  9f                   lahf 
// 0060c932  f6c444               test ah, 0x44
// 0060c935  7a16                 jp 0x60c94d
// 0060c937  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0060c93c  0f2e4604             ucomiss xmm0, dword ptr [esi + 4]
// 0060c940  9f                   lahf 
// 0060c941  f6c444               test ah, 0x44
// 0060c944  7a07                 jp 0x60c94d
// 0060c946  b801000000           mov eax, 1
// 0060c94b  eb02                 jmp 0x60c94f
// 0060c94d  33c0                 xor eax, eax
// 0060c94f  0fb6d0               movzx edx, al
// 0060c952  52                   push edx
// 0060c953  57                   push edi
// 0060c954  e8a74d1100           call 0x721700
// 0060c959  83c408               add esp, 8
// 0060c95c  5f                   pop edi
// 0060c95d  b801000000           mov eax, 1
// 0060c962  5e                   pop esi
// 0060c963  c3                   ret 

extern "C" {
    extern int g_00be2a58;
    int __cdecl sub_722e10(int, int, int);
    int __cdecl sub_721700(int, int);
}

struct S {
};

int __cdecl f(int a) {
    int v = g_00be2a58;
    int esi = sub_722e10(a, 2, v);
    int ecx = sub_722e10(a, 1, g_00be2a58);
    int r;
    if (*(float*)ecx == *(float*)esi && *(float*)(ecx + 4) == *(float*)(esi + 4))
        r = 1;
    else
        r = 0;
    sub_721700(a, r & 0xff);
    return 1;
}
