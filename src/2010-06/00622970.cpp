// from server: 100% by auto
// roc 2010-06 00622970  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622970
//
// 00622970  8b442404             mov eax, dword ptr [esp + 4]
// 00622974  56                   push esi
// 00622975  8bf1                 mov esi, ecx
// 00622977  50                   push eax
// 00622978  8d4c240c             lea ecx, [esp + 0xc]
// 0062297c  e82ffbffff           call 0x6224b0
// 00622981  3bc6                 cmp eax, esi
// 00622983  7408                 je 0x62298d
// 00622985  8b16                 mov edx, dword ptr [esi]
// 00622987  8b08                 mov ecx, dword ptr [eax]
// 00622989  8910                 mov dword ptr [eax], edx
// 0062298b  890e                 mov dword ptr [esi], ecx
// 0062298d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00622991  85c9                 test ecx, ecx
// 00622993  7408                 je 0x62299d
// 00622995  8b01                 mov eax, dword ptr [ecx]
// 00622997  8b10                 mov edx, dword ptr [eax]
// 00622999  6a01                 push 1
// 0062299b  ffd2                 call edx
// 0062299d  8bc6                 mov eax, esi
// 0062299f  5e                   pop esi
// 006229a0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
