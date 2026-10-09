// roc 2007-03 006805d0  unit: seg_00680000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006805d0
//
// 006805d0  56                   push esi
// 006805d1  57                   push edi
// 006805d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006805d6  85ff                 test edi, edi
// 006805d8  8bf1                 mov esi, ecx
// 006805da  7423                 je 0x6805ff
// 006805dc  57                   push edi
// 006805dd  ff1560d17700         call dword ptr [0x77d160]
// 006805e3  83f802               cmp eax, 2
// 006805e6  7517                 jne 0x6805ff
// 006805e8  33c0                 xor eax, eax
// 006805ea  8d8eb4000000         lea ecx, [esi + 0xb4]
// 006805f0  3b39                 cmp edi, dword ptr [ecx]
// 006805f2  7412                 je 0x680606
// 006805f4  83c001               add eax, 1
// 006805f7  83c104               add ecx, 4
// 006805fa  83f81f               cmp eax, 0x1f
// 006805fd  7cf1                 jl 0x6805f0
// 006805ff  5f                   pop edi
// 00680600  33c0                 xor eax, eax
// 00680602  5e                   pop esi
// 00680603  c20400               ret 4
// 00680606  5f                   pop edi
// 00680607  b801000000           mov eax, 1
// 0068060c  5e                   pop esi
// 0068060d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManager.cpp (function ?IsMetricObject@CXTPSkinManagerMetrics@@QBEHPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManager.cpp
