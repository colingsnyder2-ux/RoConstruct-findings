// from server: 75% by atomic.potato
// roc 2011-06 0078ca80  unit: RBX::NewNullTool  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078ca80
//
// 0078ca80  83ec0c               sub esp, 0xc
// 0078ca83  53                   push ebx
// 0078ca84  57                   push edi
// 0078ca85  8bf9                 mov edi, ecx
// 0078ca87  33db                 xor ebx, ebx
// 0078ca89  385f38               cmp byte ptr [edi + 0x38], bl
// 0078ca8c  0f849b000000         je 0x78cb2d
// 0078ca92  8b4718               mov eax, dword ptr [edi + 0x18]
// 0078ca95  50                   push eax
// 0078ca96  e8a53eebff           call 0x640940
// 0078ca9b  83c404               add esp, 4
// 0078ca9e  3bc3                 cmp eax, ebx
// 0078caa0  0f8487000000         je 0x78cb2d
// 0078caa6  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 0078caac  3bcb                 cmp ecx, ebx
// 0078caae  747d                 je 0x78cb2d
// 0078cab0  8d542408             lea edx, [esp + 8]
// 0078cab4  52                   push edx
// 0078cab5  885c240c             mov byte ptr [esp + 0xc], bl
// 0078cab9  885c240d             mov byte ptr [esp + 0xd], bl
// 0078cabd  885c240e             mov byte ptr [esp + 0xe], bl
// 0078cac1  885c240f             mov byte ptr [esp + 0xf], bl
// 0078cac5  885c2410             mov byte ptr [esp + 0x10], bl
// 0078cac9  885c2411             mov byte ptr [esp + 0x11], bl
// 0078cacd  885c2412             mov byte ptr [esp + 0x12], bl
// 0078cad1  885c2413             mov byte ptr [esp + 0x13], bl
// 0078cad5  885c2414             mov byte ptr [esp + 0x14], bl
// 0078cad9  885c2415             mov byte ptr [esp + 0x15], bl
// 0078cadd  885c2416             mov byte ptr [esp + 0x16], bl
// 0078cae1  e8daebedff           call 0x66b6c0
// 0078cae6  8b4718               mov eax, dword ptr [edi + 0x18]
// 0078cae9  50                   push eax
// 0078caea  e8e18fd4ff           call 0x4d5ad0
// 0078caef  83c404               add esp, 4
// 0078caf2  3bc3                 cmp eax, ebx
// 0078caf4  7437                 je 0x78cb2d
// 0078caf6  56                   push esi
// 0078caf7  50                   push eax
// 0078caf8  e83332efff           call 0x67fd30
// 0078cafd  8bf0                 mov esi, eax
// 0078caff  83c404               add esp, 4
// 0078cb02  3bf3                 cmp esi, ebx
// 0078cb04  7426                 je 0x78cb2c
// 0078cb06  8d4c240c             lea ecx, [esp + 0xc]
// 0078cb0a  e88110ebff           call 0x63db90
// 0078cb0f  84c0                 test al, al
// 0078cb11  7519                 jne 0x78cb2c
// 0078cb13  389e1c020000         cmp byte ptr [esi + 0x21c], bl
// 0078cb19  7411                 je 0x78cb2c
// 0078cb1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078cb1f  83c73c               add edi, 0x3c
// 0078cb22  57                   push edi
// 0078cb23  51                   push ecx
// 0078cb24  e80787efff           call 0x685230
// 0078cb29  83c408               add esp, 8
// 0078cb2c  5e                   pop esi
// 0078cb2d  5f                   pop edi
// 0078cb2e  5b                   pop ebx
// 0078cb2f  83c40c               add esp, 0xc
// 0078cb32  c20400               ret 4

struct S {
    char pad0[0x18];
    void* field18;
    char pad1[0x1c];
    char field38;
    char pad2[0x3];
    char field3c;
    int f(void* arg);
};

extern "C" void* func_640940(void*);
extern "C" void func_66b6c0(void*);
extern "C" void* func_4d5ad0(void*);
extern "C" void* func_67fd30(void*);
extern "C" char func_63db90(void*);
extern "C" void func_685230(void*, void*);

int S::f(void* arg)
{
    if (field38 == 0)
        return 0;
    void* p = func_640940(field18);
    if (p == 0)
        return 0;
    void* q = *(void**)((char*)p + 0x94);
    if (q == 0)
        return 0;
    char buf[12];
    buf[0] = 0; buf[1] = 0; buf[2] = 0; buf[3] = 0;
    buf[4] = 0; buf[5] = 0; buf[6] = 0; buf[7] = 0;
    buf[8] = 0; buf[9] = 0; buf[10] = 0;
    func_66b6c0(buf);
    void* r = func_4d5ad0(field18);
    if (r == 0)
        return 0;
    void* s = func_67fd30(r);
    if (s == 0)
        return 0;
    if (func_63db90(buf))
        return 0;
    if (*((char*)s + 0x21c) == 0)
        return 0;
    func_685230(arg, &field3c);
    return 0;
}
