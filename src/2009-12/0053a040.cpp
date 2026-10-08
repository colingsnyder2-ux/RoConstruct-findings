// roc 2009-12 0053a040  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053a040
//
// 0053a040  8b442404             mov eax, dword ptr [esp + 4]
// 0053a044  56                   push esi
// 0053a045  8bf1                 mov esi, ecx
// 0053a047  50                   push eax
// 0053a048  8d4c240c             lea ecx, [esp + 0xc]
// 0053a04c  e82fedffff           call 0x538d80
// 0053a051  3bc6                 cmp eax, esi
// 0053a053  7408                 je 0x53a05d
// 0053a055  8b16                 mov edx, dword ptr [esi]
// 0053a057  8b08                 mov ecx, dword ptr [eax]
// 0053a059  8910                 mov dword ptr [eax], edx
// 0053a05b  890e                 mov dword ptr [esi], ecx
// 0053a05d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053a061  85c9                 test ecx, ecx
// 0053a063  7408                 je 0x53a06d
// 0053a065  8b01                 mov eax, dword ptr [ecx]
// 0053a067  8b10                 mov edx, dword ptr [eax]
// 0053a069  6a01                 push 1
// 0053a06b  ffd2                 call edx
// 0053a06d  8bc6                 mov eax, esi
// 0053a06f  5e                   pop esi
// 0053a070  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
