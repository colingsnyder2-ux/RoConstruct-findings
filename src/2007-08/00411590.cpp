// from server: 80% by colin
// roc 2007-08 00411590  unit: CopyVerb  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411590
//
// 00411590  56                   push esi
// 00411591  57                   push edi
// 00411592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00411596  85ff                 test edi, edi
// 00411598  8bf1                 mov esi, ecx
// 0041159a  750a                 jne 0x4115a6
// 0041159c  5f                   pop edi
// 0041159d  b803400080           mov eax, 0x80004003
// 004115a2  5e                   pop esi
// 004115a3  c20400               ret 4
// 004115a6  57                   push edi
// 004115a7  ff15d8e97700         call dword ptr [0x77e9d8]
// 004115ad  85c0                 test eax, eax
// 004115af  7c1c                 jl 0x4115cd
// 004115b1  6a10                 push 0x10
// 004115b3  56                   push esi
// 004115b4  6a10                 push 0x10
// 004115b6  57                   push edi
// 004115b7  ff15d4e67700         call dword ptr [0x77e6d4]
// 004115bd  50                   push eax
// 004115be  e81d01ffff           call 0x4016e0
// 004115c3  83c414               add esp, 0x14
// 004115c6  66c7060000           mov word ptr [esi], 0
// 004115cb  33c0                 xor eax, eax
// 004115cd  5f                   pop edi
// 004115ce  5e                   pop esi
// 004115cf  c20400               ret 4

struct CopyVerb {
    int doIt(void* dataState);
};

extern "C" int __stdcall VariantClear(void* pvarg);
extern "C" int __cdecl memcpy_s(void* dest, unsigned int destSize, const void* src, unsigned int count);

int CopyVerb::doIt(void* dataState) {
    if (dataState == 0) {
        return (int)0x80004003;
    }
    if (VariantClear(dataState) < 0) {
        return 0;
    }
    memcpy_s(this, 0x10, dataState, 0x10);
    *(unsigned short*)this = 0;
    return 0;
}
