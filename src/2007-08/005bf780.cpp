// from server: 78% by colin
// roc 2007-08 005bf780  unit: boost::detail::H::?$sp_counted_impl_p  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf780
//
// 005bf780  56                   push esi
// 005bf781  8bf1                 mov esi, ecx
// 005bf783  837e0800             cmp dword ptr [esi + 8], 0
// 005bf787  57                   push edi
// 005bf788  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 005bf78e  7502                 jne 0x5bf792
// 005bf790  ffd7                 call edi
// 005bf792  8b4608               mov eax, dword ptr [esi + 8]
// 005bf795  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bf798  3b4808               cmp ecx, dword ptr [eax + 8]
// 005bf79b  7202                 jb 0x5bf79f
// 005bf79d  ffd7                 call edi
// 005bf79f  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bf7a2  8b0a                 mov ecx, dword ptr [edx]
// 005bf7a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bf7a8  8b5604               mov edx, dword ptr [esi + 4]
// 005bf7ab  5f                   pop edi
// 005bf7ac  8908                 mov dword ptr [eax], ecx
// 005bf7ae  895004               mov dword ptr [eax + 4], edx
// 005bf7b1  5e                   pop esi
// 005bf7b2  c20400               ret 4

extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void f(void** out);
};

void S::f(void** out)
{
    if (field8 == 0)
        _invalid_parameter_noinfo();
    if (fieldC >= *(void**)((char*)field8 + 8))
        _invalid_parameter_noinfo();
    out[0] = *(void**)fieldC;
    out[1] = field4;
}
