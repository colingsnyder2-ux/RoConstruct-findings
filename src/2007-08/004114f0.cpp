// from server: 72% by colin
// roc 2007-08 004114f0  unit: CopyVerb  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004114f0
//
// 004114f0  56                   push esi
// 004114f1  8b742408             mov esi, dword ptr [esp + 8]
// 004114f5  57                   push edi
// 004114f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004114fa  57                   push edi
// 004114fb  56                   push esi
// 004114fc  ff15d0e97700         call dword ptr [0x77e9d0]
// 00411502  85c0                 test eax, eax
// 00411504  7c24                 jl 0x41152a
// 00411506  85ff                 test edi, edi
// 00411508  7420                 je 0x41152a
// 0041150a  66833f0d             cmp word ptr [edi], 0xd
// 0041150e  751a                 jne 0x41152a
// 00411510  85f6                 test esi, esi
// 00411512  7416                 je 0x41152a
// 00411514  0fb74e02             movzx ecx, word ptr [esi + 2]
// 00411518  f6c140               test cl, 0x40
// 0041151b  740d                 je 0x41152a
// 0041151d  f7c100040000         test ecx, 0x400
// 00411523  7405                 je 0x41152a
// 00411525  66c7070900           mov word ptr [edi], 9
// 0041152a  5f                   pop edi
// 0041152b  5e                   pop esi
// 0041152c  c3                   ret 

extern "C" __declspec(dllimport) int __stdcall SafeArrayGetVartype(void*, unsigned short*);

struct CopyVerb {
    void doIt(void* dataState);
};

void CopyVerb::doIt(void* dataState) {
    unsigned short* p = (unsigned short*)dataState;
    void* sa = (void*)((char*)dataState + 8);
    if (SafeArrayGetVartype(sa, p) < 0) return;
    if (p == 0) return;
    if (*p != 0xd) return;
    if (sa == 0) return;
    unsigned short flags = *(unsigned short*)((char*)sa + 2);
    if (!(flags & 0x40)) return;
    if (!(flags & 0x400)) return;
    *p = 9;
}
