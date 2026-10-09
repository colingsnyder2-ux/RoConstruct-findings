// from server: 80% by colin
// roc 2007-08 005a8aa0  unit: RBX::Humanoid  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8aa0
//
// 005a8aa0  56                   push esi
// 005a8aa1  57                   push edi
// 005a8aa2  8bf9                 mov edi, ecx
// 005a8aa4  8db70cffffff         lea esi, [edi - 0xf4]
// 005a8aaa  56                   push esi
// 005a8aab  e890cdeeff           call 0x495840
// 005a8ab0  83c404               add esp, 4
// 005a8ab3  85c0                 test eax, eax
// 005a8ab5  7409                 je 0x5a8ac0
// 005a8ab7  8bc8                 mov ecx, eax
// 005a8ab9  e86276ffff           call 0x5a0120
// 005a8abe  eb02                 jmp 0x5a8ac2
// 005a8ac0  33c0                 xor eax, eax
// 005a8ac2  81c70cffffff         add edi, 0xffffff0c
// 005a8ac8  3bf8                 cmp edi, eax
// 005a8aca  7427                 je 0x5a8af3
// 005a8acc  56                   push esi
// 005a8acd  e84e4afdff           call 0x57d520
// 005a8ad2  83c404               add esp, 4
// 005a8ad5  85c0                 test eax, eax
// 005a8ad7  741a                 je 0x5a8af3
// 005a8ad9  8d8828020000         lea ecx, [eax + 0x228]
// 005a8adf  8b01                 mov eax, dword ptr [ecx]
// 005a8ae1  8b5008               mov edx, dword ptr [eax + 8]
// 005a8ae4  ffd2                 call edx
// 005a8ae6  50                   push eax
// 005a8ae7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a8aeb  50                   push eax
// 005a8aec  8bce                 mov ecx, esi
// 005a8aee  e8bdfcffff           call 0x5a87b0
// 005a8af3  5f                   pop edi
// 005a8af4  5e                   pop esi
// 005a8af5  c20400               ret 4

struct Humanoid {
    void func_005a8aa0(int);
};

extern "C" int __stdcall sub_495840(void*);
extern "C" int __stdcall sub_57d520(void*);
extern "C" int __cdecl sub_5a0120(void*);
extern "C" void __cdecl sub_5a87b0(void*, int, int);

void Humanoid::func_005a8aa0(int a)
{
    char* base = (char*)this - 0xf4;
    int r = sub_495840(base);
    if (r != 0)
        r = sub_5a0120((void*)r);
    else
        r = 0;

    if ((char*)this - 0xf4 == (char*)r)
        return;

    int s = sub_57d520(base);
    if (s == 0)
        return;

    char* p = (char*)s + 0x228;
    int v = (*(int (__thiscall**)(void*))(*(int*)p + 8))(p);
    sub_5a87b0(base, a, v);
}
