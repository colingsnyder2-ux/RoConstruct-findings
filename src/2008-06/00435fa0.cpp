// from server: 100% by king_originala
// roc 2008-06 00435fa0  unit: CClassTreeView  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435fa0
//
// 00435fa0  8b442404             mov eax, dword ptr [esp + 4]
// 00435fa4  56                   push esi
// 00435fa5  8b705c               mov esi, dword ptr [eax + 0x5c]
// 00435fa8  57                   push edi
// 00435fa9  8bf9                 mov edi, ecx
// 00435fab  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 00435fb2  7450                 je 0x436004
// 00435fb4  6a00                 push 0
// 00435fb6  689cf39200           push 0x92f39c
// 00435fbb  68e88f9200           push 0x928fe8
// 00435fc0  6a00                 push 0
// 00435fc2  56                   push esi
// 00435fc3  e8feb72600           call 0x6a17c6
// 00435fc8  83c414               add esp, 0x14
// 00435fcb  85c0                 test eax, eax
// 00435fcd  740e                 je 0x435fdd
// 00435fcf  8b8fa8000000         mov ecx, dword ptr [edi + 0xa8]
// 00435fd5  50                   push eax
// 00435fd6  e8a5fcffff           call 0x435c80
// 00435fdb  eb27                 jmp 0x436004
// 00435fdd  6a00                 push 0
// 00435fdf  68ccf39200           push 0x92f3cc
// 00435fe4  68e88f9200           push 0x928fe8
// 00435fe9  6a00                 push 0
// 00435feb  56                   push esi
// 00435fec  e8d5b72600           call 0x6a17c6
// 00435ff1  83c414               add esp, 0x14
// 00435ff4  85c0                 test eax, eax
// 00435ff6  740c                 je 0x436004
// 00435ff8  8b8fa8000000         mov ecx, dword ptr [edi + 0xa8]
// 00435ffe  50                   push eax
// 00435fff  e87cf1ffff           call 0x435180
// 00436004  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 0043600a  85c9                 test ecx, ecx
// 0043600c  7415                 je 0x436023
// 0043600e  56                   push esi
// 0043600f  e84cf8ffff           call 0x435860
// 00436014  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00436018  5f                   pop edi
// 00436019  c70100000000         mov dword ptr [ecx], 0
// 0043601f  5e                   pop esi
// 00436020  c20800               ret 8
// 00436023  8b542410             mov edx, dword ptr [esp + 0x10]
// 00436027  5f                   pop edi
// 00436028  c70200000000         mov dword ptr [edx], 0
// 0043602e  5e                   pop esi
// 0043602f  c20800               ret 8

extern unsigned char descriptor_00928fe8;
extern unsigned char descriptor_0092f39c;
extern unsigned char descriptor_0092f3cc;

extern "C" void* __cdecl func_006a17c6(
    void*, int, const void*, const void*, int);

struct Handler
{
    void func_00435c80(void*);
    void func_00435180(void*);
    void func_00435860(void*);
};

struct Argument
{
    unsigned char padding[0x5c];
    void* descriptor;
};

struct CClassTreeView
{
    unsigned char padding[0xa8];
    Handler* primary;
    Handler* secondary;

    void func_00435fa0(Argument*, int*);
};

void CClassTreeView::func_00435fa0(Argument* argument, int* result)
{
    void* descriptor = argument->descriptor;

    if (primary)
    {
        void* converted = func_006a17c6(
            descriptor, 0, &descriptor_00928fe8, &descriptor_0092f39c, 0);

        if (converted)
        {
            primary->func_00435c80(converted);
        }
        else
        {
            converted = func_006a17c6(
                descriptor, 0, &descriptor_00928fe8, &descriptor_0092f3cc, 0);

            if (converted)
                primary->func_00435180(converted);
        }
    }

    if (secondary)
        secondary->func_00435860(descriptor);

    *result = 0;
}
