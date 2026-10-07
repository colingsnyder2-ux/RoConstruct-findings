// roc 2010-06 004e84d0  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e84d0
//
// 004e84d0  8b442404             mov eax, dword ptr [esp + 4]
// 004e84d4  56                   push esi
// 004e84d5  8bf1                 mov esi, ecx
// 004e84d7  50                   push eax
// 004e84d8  8d4c240c             lea ecx, [esp + 0xc]
// 004e84dc  e84fedffff           call 0x4e7230
// 004e84e1  3bc6                 cmp eax, esi
// 004e84e3  7408                 je 0x4e84ed
// 004e84e5  8b16                 mov edx, dword ptr [esi]
// 004e84e7  8b08                 mov ecx, dword ptr [eax]
// 004e84e9  8910                 mov dword ptr [eax], edx
// 004e84eb  890e                 mov dword ptr [esi], ecx
// 004e84ed  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e84f1  85c9                 test ecx, ecx
// 004e84f3  7408                 je 0x4e84fd
// 004e84f5  8b01                 mov eax, dword ptr [ecx]
// 004e84f7  8b10                 mov edx, dword ptr [eax]
// 004e84f9  6a01                 push 1
// 004e84fb  ffd2                 call edx
// 004e84fd  8bc6                 mov eax, esi
// 004e84ff  5e                   pop esi
// 004e8500  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
