// from server: 80% by colin
// roc 2007-08 007293b0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007293b0
//
// 007293b0  55                   push ebp
// 007293b1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007293b5  85ed                 test ebp, ebp
// 007293b7  56                   push esi
// 007293b8  57                   push edi
// 007293b9  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 007293bf  7502                 jne 0x7293c3
// 007293c1  ffd7                 call edi
// 007293c3  8b742424             mov esi, dword ptr [esp + 0x24]
// 007293c7  3b7504               cmp esi, dword ptr [ebp + 4]
// 007293ca  7502                 jne 0x7293ce
// 007293cc  ffd7                 call edi
// 007293ce  53                   push ebx
// 007293cf  8d4e08               lea ecx, [esi + 8]
// 007293d2  e879efffff           call 0x728350
// 007293d7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007293db  85db                 test ebx, ebx
// 007293dd  7502                 jne 0x7293e1
// 007293df  ffd7                 call edi
// 007293e1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007293e5  3b7b18               cmp edi, dword ptr [ebx + 0x18]
// 007293e8  5b                   pop ebx
// 007293e9  7506                 jne 0x7293f1
// 007293eb  ff15d8e67700         call dword ptr [0x77e6d8]
// 007293f1  56                   push esi
// 007293f2  55                   push ebp
// 007293f3  8d442418             lea eax, [esp + 0x18]
// 007293f7  50                   push eax
// 007293f8  8d4f18               lea ecx, [edi + 0x18]
// 007293fb  e8c0fdffff           call 0x7291c0
// 00729400  5f                   pop edi
// 00729401  5e                   pop esi
// 00729402  5d                   pop ebp
// 00729403  c21c00               ret 0x1c

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner1
{
    void method0();
};

struct Inner2
{
    void method1(void*, void*, void*);
};

void __stdcall func_007293b0(void* arg1, void* arg2, void* arg3, void* arg4, void* arg5, void* arg6, void* arg7)
{
    void* ebp = arg5;
    if (ebp == 0)
        _invalid_parameter_noinfo();
    void* esi = arg6;
    if (esi == *(void**)((char*)ebp + 4))
        _invalid_parameter_noinfo();
    Inner1* p1 = (Inner1*)((char*)esi + 8);
    p1->method0();
    void* ebx = arg2;
    if (ebx == 0)
        _invalid_parameter_noinfo();
    void* edi = arg3;
    if (edi == *(void**)((char*)ebx + 0x18))
        _invalid_parameter_noinfo();
    Inner2* p2 = (Inner2*)((char*)edi + 0x18);
    p2->method1(esi, ebp, arg4);
}
