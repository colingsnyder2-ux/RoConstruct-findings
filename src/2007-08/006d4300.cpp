// from server: 80% by colin
// roc 2007-08 006d4300  unit: CXTPReportRow_Batch  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4300
//
// 006d4300  57                   push edi
// 006d4301  8bf9                 mov edi, ecx
// 006d4303  837f4c00             cmp dword ptr [edi + 0x4c], 0
// 006d4307  7504                 jne 0x6d430d
// 006d4309  33c0                 xor eax, eax
// 006d430b  5f                   pop edi
// 006d430c  c3                   ret 
// 006d430d  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 006d4310  8b01                 mov eax, dword ptr [ecx]
// 006d4312  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006d4318  56                   push esi
// 006d4319  ffd2                 call edx
// 006d431b  8bf0                 mov esi, eax
// 006d431d  8bce                 mov ecx, esi
// 006d431f  e82cf9f8ff           call 0x663c50
// 006d4324  85c0                 test eax, eax
// 006d4326  7e22                 jle 0x6d434a
// 006d4328  53                   push ebx
// 006d4329  8b1e                 mov ebx, dword ptr [esi]
// 006d432b  8bce                 mov ecx, esi
// 006d432d  e81ef9f8ff           call 0x663c50
// 006d4332  83e801               sub eax, 1
// 006d4335  50                   push eax
// 006d4336  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 006d4339  8bce                 mov ecx, esi
// 006d433b  ffd0                 call eax
// 006d433d  3bc7                 cmp eax, edi
// 006d433f  5b                   pop ebx
// 006d4340  7508                 jne 0x6d434a
// 006d4342  5e                   pop esi
// 006d4343  b801000000           mov eax, 1
// 006d4348  5f                   pop edi
// 006d4349  c3                   ret 
// 006d434a  5e                   pop esi
// 006d434b  33c0                 xor eax, eax
// 006d434d  5f                   pop edi
// 006d434e  c3                   ret 

struct CXTPReportRow_Batch;

struct Inner {
    virtual int vfunc_b8();
    virtual int vfunc_5c(int);
};

struct Outer {
    virtual Inner* vfunc_b8();
};

struct CXTPReportRow_Batch {
    char pad[0x4c];
    Outer* field_4c;
    int method();
};

extern int __fastcall helper_663c50(Inner*);

int CXTPReportRow_Batch::method()
{
    if (field_4c == 0)
        return 0;
    Inner* p = field_4c->vfunc_b8();
    if (helper_663c50(p) > 0) {
        int n = helper_663c50(p) - 1;
        if (p->vfunc_5c(n) == (int)this)
            return 1;
    }
    return 0;
}
