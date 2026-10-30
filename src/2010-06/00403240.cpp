// roc 2010-06 00403240  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403240
//
// 00403240  56                   push esi
// 00403241  57                   push edi
// 00403242  8b3d64ba9e00         mov edi, dword ptr [0x9eba64]
// 00403248  8bf1                 mov esi, ecx
// 0040324a  8d9b00000000         lea ebx, [ebx]
// 00403250  8b06                 mov eax, dword ptr [esi]
// 00403252  0fbe08               movsx ecx, byte ptr [eax]
// 00403255  83c1f7               add ecx, -9
// 00403258  83f917               cmp ecx, 0x17
// 0040325b  7715                 ja 0x403272
// 0040325d  0fb68980324000       movzx ecx, byte ptr [ecx + 0x403280]
// 00403264  ff248d78324000       jmp dword ptr [ecx*4 + 0x403278]
// 0040326b  50                   push eax
// 0040326c  ffd7                 call edi
// 0040326e  8906                 mov dword ptr [esi], eax
// 00403270  ebde                 jmp 0x403250
// 00403272  5f                   pop edi
// 00403273  5e                   pop esi
// 00403274  c3                   ret 
// 00403275  8d4900               lea ecx, [ecx]
// 00403278  6b3240               imul esi, dword ptr [edx], 0x40
// 0040327b  007232               add byte ptr [edx + 0x32], dh
// 0040327e  40                   inc eax
// 0040327f  0000                 add byte ptr [eax], al
// 00403281  0001                 add byte ptr [ecx], al
// 00403283  0100                 add dword ptr [eax], eax
// 00403285  0101                 add dword ptr [ecx], eax
// 00403287  0101                 add dword ptr [ecx], eax
// 00403289  0101                 add dword ptr [ecx], eax
// 0040328b  0101                 add dword ptr [ecx], eax
// 0040328d  0101                 add dword ptr [ecx], eax
// 0040328f  0101                 add dword ptr [ecx], eax
// 00403291  0101                 add dword ptr [ecx], eax
// 00403293  0101                 add dword ptr [ecx], eax
// 00403295  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?SkipWhiteSpace@CRegParser@ATL@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp