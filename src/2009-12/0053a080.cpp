// roc 2009-12 0053a080  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053a080
//
// 0053a080  8b442404             mov eax, dword ptr [esp + 4]
// 0053a084  56                   push esi
// 0053a085  8bf1                 mov esi, ecx
// 0053a087  50                   push eax
// 0053a088  8d4c240c             lea ecx, [esp + 0xc]
// 0053a08c  e84fedffff           call 0x538de0
// 0053a091  3bc6                 cmp eax, esi
// 0053a093  7408                 je 0x53a09d
// 0053a095  8b16                 mov edx, dword ptr [esi]
// 0053a097  8b08                 mov ecx, dword ptr [eax]
// 0053a099  8910                 mov dword ptr [eax], edx
// 0053a09b  890e                 mov dword ptr [esi], ecx
// 0053a09d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053a0a1  85c9                 test ecx, ecx
// 0053a0a3  7408                 je 0x53a0ad
// 0053a0a5  8b01                 mov eax, dword ptr [ecx]
// 0053a0a7  8b10                 mov edx, dword ptr [eax]
// 0053a0a9  6a01                 push 1
// 0053a0ab  ffd2                 call edx
// 0053a0ad  8bc6                 mov eax, esi
// 0053a0af  5e                   pop esi
// 0053a0b0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
