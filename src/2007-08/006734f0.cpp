// from server: 70% by colin
// roc 2007-08 006734f0  unit: CXTPCustomizeSheet  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006734f0
//
// 006734f0  a1388f8c00           mov eax, dword ptr [0x8c8f38]
// 006734f5  53                   push ebx
// 006734f6  55                   push ebp
// 006734f7  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006734fb  85ed                 test ebp, ebp
// 006734fd  8bd8                 mov ebx, eax
// 006734ff  7d0a                 jge 0x67350b
// 00673501  5d                   pop ebp
// 00673502  b801000000           mov eax, 1
// 00673507  5b                   pop ebx
// 00673508  c20c00               ret 0xc
// 0067350b  8b4808               mov ecx, dword ptr [eax + 8]
// 0067350e  8b4004               mov eax, dword ptr [eax + 4]
// 00673511  56                   push esi
// 00673512  8b742418             mov esi, dword ptr [esp + 0x18]
// 00673516  57                   push edi
// 00673517  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0067351b  56                   push esi
// 0067351c  57                   push edi
// 0067351d  ffd0                 call eax
// 0067351f  85c0                 test eax, eax
// 00673521  7413                 je 0x673536
// 00673523  8b0b                 mov ecx, dword ptr [ebx]
// 00673525  56                   push esi
// 00673526  57                   push edi
// 00673527  55                   push ebp
// 00673528  51                   push ecx
// 00673529  ff1530ee7700         call dword ptr [0x77ee30]
// 0067352f  5f                   pop edi
// 00673530  5e                   pop esi
// 00673531  5d                   pop ebp
// 00673532  5b                   pop ebx
// 00673533  c20c00               ret 0xc
// 00673536  5f                   pop edi
// 00673537  5e                   pop esi
// 00673538  5d                   pop ebp
// 00673539  b801000000           mov eax, 1
// 0067353e  5b                   pop ebx
// 0067353f  c20c00               ret 0xc

extern "C" int __stdcall CallNextHookEx(int, int, int, int);

struct S_global_8c8f38
{
    int* p0;
    int (__stdcall* p4)(int, int);
    int p8;
};

extern S_global_8c8f38* G_8c8f38;

int __stdcall f_006734f0(int a, int b, int c)
{
    S_global_8c8f38* g = G_8c8f38;
    if (a < 0)
        return 1;
    int (__stdcall* fn)(int, int) = g->p4;
    int r = fn(b, c);
    if (r != 0)
        return CallNextHookEx(g->p8, a, b, c);
    return 1;
}
