// from server: 100% by king_originala
// roc 2008-06 005fe440  unit: RBX::VTool::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe440
//
// 005fe440  56                   push esi
// 005fe441  8b742408             mov esi, dword ptr [esp + 8]
// 005fe445  57                   push edi
// 005fe446  56                   push esi
// 005fe447  8bf9                 mov edi, ecx
// 005fe449  e8a2be0000           call 0x60a2f0
// 005fe44e  83c404               add esp, 4
// 005fe451  84c0                 test al, al
// 005fe453  7534                 jne 0x5fe489
// 005fe455  8d4708               lea eax, [edi + 8]
// 005fe458  85c0                 test eax, eax
// 005fe45a  7422                 je 0x5fe47e
// 005fe45c  8b0e                 mov ecx, dword ptr [esi]
// 005fe45e  8908                 mov dword ptr [eax], ecx
// 005fe460  8b5604               mov edx, dword ptr [esi + 4]
// 005fe463  895004               mov dword ptr [eax + 4], edx
// 005fe466  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fe469  894808               mov dword ptr [eax + 8], ecx
// 005fe46c  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fe46f  89500c               mov dword ptr [eax + 0xc], edx
// 005fe472  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fe475  894810               mov dword ptr [eax + 0x10], ecx
// 005fe478  8b5614               mov edx, dword ptr [esi + 0x14]
// 005fe47b  895014               mov dword ptr [eax + 0x14], edx
// 005fe47e  c70790198400         mov dword ptr [edi], 0x841990
// 005fe484  5f                   pop edi
// 005fe485  5e                   pop esi
// 005fe486  c20400               ret 4
// 005fe489  c70700000000         mov dword ptr [edi], 0
// 005fe48f  5f                   pop edi
// 005fe490  5e                   pop esi
// 005fe491  c20400               ret 4

struct Data
{
    unsigned int a, b, c, d, e, f;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char global_00841990;

struct S
{
    void* tag;
    unsigned int padding;
    Data data;

    void f(const Data* source);
};

void S::f(const Data* source)
{
    if (!((bool (__cdecl *)(const Data*))func_0060a2f0)(source))
    {
        Data* destination = &data;
        if (destination)
        {
            destination->a = source->a;
            destination->b = source->b;
            destination->c = source->c;
            destination->d = source->d;
            destination->e = source->e;
            destination->f = source->f;
        }
        tag = &global_00841990;
    }
    else
    {
        tag = 0;
    }
}
