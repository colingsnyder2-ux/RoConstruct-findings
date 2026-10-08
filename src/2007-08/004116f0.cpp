// from server: 67% by colin
// roc 2007-08 004116f0  unit: boost::bad_any_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004116f0
//
// 004116f0  56                   push esi
// 004116f1  8b742408             mov esi, dword ptr [esp + 8]
// 004116f5  85f6                 test esi, esi
// 004116f7  742c                 je 0x411725
// 004116f9  8b0e                 mov ecx, dword ptr [esi]
// 004116fb  85c9                 test ecx, ecx
// 004116fd  7409                 je 0x411708
// 004116ff  8b01                 mov eax, dword ptr [ecx]
// 00411701  8b5004               mov edx, dword ptr [eax + 4]
// 00411704  ffd2                 call edx
// 00411706  eb05                 jmp 0x41170d
// 00411708  b8c8278800           mov eax, 0x8827c8
// 0041170d  68d4278800           push 0x8827d4
// 00411712  8bc8                 mov ecx, eax
// 00411714  ff1508e77700         call dword ptr [0x77e708]
// 0041171a  84c0                 test al, al
// 0041171c  7407                 je 0x411725
// 0041171e  8b06                 mov eax, dword ptr [esi]
// 00411720  83c004               add eax, 4
// 00411723  5e                   pop esi
// 00411724  c3                   ret 
// 00411725  33c0                 xor eax, eax
// 00411727  5e                   pop esi
// 00411728  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S_func_004116f0 {
    void* f(void*);
};

void* S_func_004116f0::f(void* p)
{
    if (p == 0)
        goto fail;
    {
        type_info* ti = *(type_info**)p;
        type_info* other;
        if (ti != 0) {
            other = (type_info*)(*(void***)ti)[1];
        } else {
            other = (type_info*)0x8827c8;
        }
        if (!other->operator==(*(type_info*)0x8827d4))
            goto fail;
        return (char*)*(void**)p + 4;
    }
fail:
    return 0;
}
