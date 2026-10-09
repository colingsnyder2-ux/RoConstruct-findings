// roc 2007-03 0056a610  unit: seg_00560000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a610
//
// 0056a610  56                   push esi
// 0056a611  57                   push edi
// 0056a612  8bf1                 mov esi, ecx
// 0056a614  8b5624               mov edx, dword ptr [esi + 0x24]
// 0056a617  56                   push esi
// 0056a618  8d4620               lea eax, [esi + 0x20]
// 0056a61b  b940985600           mov ecx, 0x569840
// 0056a620  51                   push ecx
// 0056a621  52                   push edx
// 0056a622  8bfa                 mov edi, edx
// 0056a624  8b3f                 mov edi, dword ptr [edi]
// 0056a626  50                   push eax
// 0056a627  57                   push edi
// 0056a628  50                   push eax
// 0056a629  e832ecffff           call 0x569260
// 0056a62e  83c418               add esp, 0x18
// 0056a631  8bce                 mov ecx, esi
// 0056a633  8bf8                 mov edi, eax
// 0056a635  e86688edff           call 0x442ea0
// 0056a63a  84c0                 test al, al
// 0056a63c  740d                 je 0x56a64b
// 0056a63e  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0056a641  7508                 jne 0x56a64b
// 0056a643  5f                   pop edi
// 0056a644  b801000000           mov eax, 1
// 0056a649  5e                   pop esi
// 0056a64a  c3                   ret 
// 0056a64b  5f                   pop edi
// 0056a64c  33c0                 xor eax, eax
// 0056a64e  5e                   pop esi
// 0056a64f  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
