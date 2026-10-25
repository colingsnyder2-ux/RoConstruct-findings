// from server: 100% by king_originala
// roc 2008-06 00501860  unit: boost::bad_lexical_cast  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501860
//
// 00501860  56                   push esi
// 00501861  57                   push edi
// 00501862  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00501866  57                   push edi
// 00501867  8bf1                 mov esi, ecx
// 00501869  ff155c288000         call dword ptr [0x80285c]
// 0050186f  c70624728200         mov dword ptr [esi], 0x827224
// 00501875  8b470c               mov eax, dword ptr [edi + 0xc]
// 00501878  89460c               mov dword ptr [esi + 0xc], eax
// 0050187b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0050187e  5f                   pop edi
// 0050187f  894e10               mov dword ptr [esi + 0x10], ecx
// 00501882  8bc6                 mov eax, esi
// 00501884  5e                   pop esi
// 00501885  c20400               ret 4

struct S {
    void* vtable;
    unsigned char baseData[8];
    const void* sourceType;
    const void* targetType;

    S(const S& other);
};

extern void* (__thiscall* copyBadCast)(S*, const S&);

S::S(const S& other)
{
    copyBadCast(this, other);
    vtable = reinterpret_cast<void*>(0x827224);
    sourceType = other.sourceType;
    targetType = other.targetType;
}
