// from server: 85% by atomic.potato
// roc 2007-08 0059f400  unit: RBX::Backpack  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f400
//
// 0059f400  51                   push ecx
// 0059f401  55                   push ebp
// 0059f402  56                   push esi
// 0059f403  57                   push edi
// 0059f404  8bf9                 mov edi, ecx
// 0059f406  8db7e0feffff         lea esi, [edi - 0x120]
// 0059f40c  56                   push esi
// 0059f40d  e8beeceeff           call 0x48e0d0
// 0059f412  8be8                 mov ebp, eax
// 0059f414  83c404               add esp, 4
// 0059f417  85ed                 test ebp, ebp
// 0059f419  7473                 je 0x59f48e
// 0059f41b  8b7f9c               mov edi, dword ptr [edi - 0x64]
// 0059f41e  53                   push ebx
// 0059f41f  56                   push esi
// 0059f420  e8fb63efff           call 0x495820
// 0059f425  3bf8                 cmp edi, eax
// 0059f427  6a01                 push 1
// 0059f429  56                   push esi
// 0059f42a  0f9444241e           sete byte ptr [esp + 0x1e]
// 0059f42f  e8bc21efff           call 0x4915f0
// 0059f434  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059f438  6a00                 push 0
// 0059f43a  68cca78900           push 0x89a7cc
// 0059f43f  68704f8800           push 0x884f70
// 0059f444  6a00                 push 0
// 0059f446  56                   push esi
// 0059f447  88442433             mov byte ptr [esp + 0x33], al
// 0059f44b  e8e6180900           call 0x630d36
// 0059f450  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0059f456  6a00                 push 0
// 0059f458  6850f68900           push 0x89f650
// 0059f45d  684c1f8800           push 0x881f4c
// 0059f462  85c0                 test eax, eax
// 0059f464  6a00                 push 0
// 0059f466  56                   push esi
// 0059f467  0f95c3               setne bl
// 0059f46a  e8c7180900           call 0x630d36
// 0059f46f  83c434               add esp, 0x34
// 0059f472  85c0                 test eax, eax
// 0059f474  0f95c0               setne al
// 0059f477  84db                 test bl, bl
// 0059f479  5b                   pop ebx
// 0059f47a  751b                 jne 0x59f497
// 0059f47c  84c0                 test al, al
// 0059f47e  7407                 je 0x59f487
// 0059f480  807c240e00           cmp byte ptr [esp + 0xe], 0
// 0059f485  7517                 jne 0x59f49e
// 0059f487  807c240f00           cmp byte ptr [esp + 0xf], 0
// 0059f48c  7510                 jne 0x59f49e
// 0059f48e  5f                   pop edi
// 0059f48f  5e                   pop esi
// 0059f490  33c0                 xor eax, eax
// 0059f492  5d                   pop ebp
// 0059f493  59                   pop ecx
// 0059f494  c20400               ret 4
// 0059f497  807c240e00           cmp byte ptr [esp + 0xe], 0
// 0059f49c  74f0                 je 0x59f48e
// 0059f49e  5f                   pop edi
// 0059f49f  5e                   pop esi
// 0059f4a0  8d85d0020000         lea eax, [ebp + 0x2d0]
// 0059f4a6  5d                   pop ebp
// 0059f4a7  59                   pop ecx
// 0059f4a8  c20400               ret 4

struct Backpack {
    void* scriptShouldRun(void* script);
};

extern "C" void* __cdecl sub_48E0D0(void*);
extern "C" int __cdecl sub_4915F0(void*, int);
extern "C" void* __cdecl sub_495820(void*);
extern "C" void* __cdecl sub_630D36(void*, int, void*, void*, int);

void* Backpack::scriptShouldRun(void* script)
{
    char* self = (char*)this - 0x120;
    void* v = sub_48E0D0(self);
    if (!v)
        return 0;

    void* a = *(void**)((char*)this - 0x64);
    void* b = sub_495820(self);
    bool flag1 = (a == b);

    sub_4915F0(self, 1);

    void* r1 = sub_630D36(script, 0, (void*)0x884F70, (void*)0x89A7CC, 0);
    bool flag2 = (r1 != 0);

    void* inner = *(void**)((char*)script + 0xbc);
    void* r2 = sub_630D36(inner, 0, (void*)0x881F4C, (void*)0x89F650, 0);
    bool flag3 = (r2 != 0);

    if (flag2) {
        if (!flag1)
            return 0;
    } else {
        if (flag3 && flag1)
            return (void*)((char*)v + 0x2d0);
        if (!flag1)
            return 0;
    }

    return (void*)((char*)v + 0x2d0);
}
