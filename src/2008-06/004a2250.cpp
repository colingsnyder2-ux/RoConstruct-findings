// from server: 100% by king_originala
// roc 2008-06 004a2250  unit: RBX::Network::P8Players::?$GetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2250
//
// 004a2250  56                   push esi
// 004a2251  8bf1                 mov esi, ecx
// 004a2253  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 004a2259  85c0                 test eax, eax
// 004a225b  7435                 je 0x4a2292
// 004a225d  53                   push ebx
// 004a225e  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004a2264  57                   push edi
// 004a2265  8b7810               mov edi, dword ptr [eax + 0x10]
// 004a2268  39780c               cmp dword ptr [eax + 0xc], edi
// 004a226b  7602                 jbe 0x4a226f
// 004a226d  ffd3                 call ebx
// 004a226f  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 004a2275  8b700c               mov esi, dword ptr [eax + 0xc]
// 004a2278  3b7010               cmp esi, dword ptr [eax + 0x10]
// 004a227b  7602                 jbe 0x4a227f
// 004a227d  ffd3                 call ebx
// 004a227f  68f0174a00           push 0x4a17f0
// 004a2284  57                   push edi
// 004a2285  56                   push esi
// 004a2286  e865f8ffff           call 0x4a1af0
// 004a228b  83c40c               add esp, 0xc
// 004a228e  5f                   pop edi
// 004a228f  5b                   pop ebx
// 004a2290  5e                   pop esi
// 004a2291  c3                   ret 
// 004a2292  33c0                 xor eax, eax
// 004a2294  5e                   pop esi
// 004a2295  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void __cdecl range_callback(void *);
extern "C" int __cdecl process_range(
    void *, void *, void (__cdecl *)(void *));

struct Range {
    unsigned char padding[12];
    unsigned char *begin;
    unsigned char *end;
};

struct S {
    unsigned char padding[264];
    Range *range;
    int f();
};

int S::f()
{
    Range *r = range;
    if (r) {
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        unsigned char *last = r->end;
        if (r->begin > last)
            invalid();

        unsigned char *first = range->begin;
        if (first > range->end)
            invalid();

        return process_range(first, last, range_callback);
    }
    return 0;
}
