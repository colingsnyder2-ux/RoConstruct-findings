// from server: 71% by colin
// roc 2007-08 00411530  unit: CopyVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411530
//
// 00411530  56                   push esi
// 00411531  57                   push edi
// 00411532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00411536  85ff                 test edi, edi
// 00411538  8bf1                 mov esi, ecx
// 0041153a  7446                 je 0x411582
// 0041153c  8d44240c             lea eax, [esp + 0xc]
// 00411540  50                   push eax
// 00411541  57                   push edi
// 00411542  ff15d4e97700         call dword ptr [0x77e9d4]
// 00411548  85c0                 test eax, eax
// 0041154a  7c24                 jl 0x411570
// 0041154c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00411551  741d                 je 0x411570
// 00411553  56                   push esi
// 00411554  57                   push edi
// 00411555  e896ffffff           call 0x4114f0
// 0041155a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041155e  83c408               add esp, 8
// 00411561  66810e0020           or word ptr [esi], 0x2000
// 00411566  5f                   pop edi
// 00411567  894e08               mov dword ptr [esi + 8], ecx
// 0041156a  8bc6                 mov eax, esi
// 0041156c  5e                   pop esi
// 0041156d  c20400               ret 4
// 00411570  680e000780           push 0x8007000e
// 00411575  66c7060a00           mov word ptr [esi], 0xa
// 0041157a  894608               mov dword ptr [esi + 8], eax
// 0041157d  e87efafeff           call 0x401000
// 00411582  5f                   pop edi
// 00411583  66c7060000           mov word ptr [esi], 0
// 00411588  8bc6                 mov eax, esi
// 0041158a  5e                   pop esi
// 0041158b  c20400               ret 4

struct CopyVerb {
    unsigned short flags;
    unsigned short pad;
    int value;
    CopyVerb* copy(CopyVerb* other);
};

extern "C" long __stdcall SafeArrayCopy(void*, void*);

extern "C" void __cdecl sub_401000(unsigned int);

extern "C" void __cdecl sub_4114F0(CopyVerb*, CopyVerb*);

CopyVerb* CopyVerb::copy(CopyVerb* other) {
    if (other == 0) {
        flags = 0;
        return this;
    }

    void* dest = 0;
    long hr = SafeArrayCopy(other, &dest);
    if (hr < 0 || dest == 0) {
        flags = 0xa;
        value = hr;
        sub_401000(0x8007000e);
        return this;
    }

    sub_4114F0(this, other);
    flags |= 0x2000;
    value = (int)dest;
    return this;
}
