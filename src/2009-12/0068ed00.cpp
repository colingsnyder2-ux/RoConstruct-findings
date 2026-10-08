// roc 2009-12 0068ed00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ed00
//
// 0068ed00  8b442404             mov eax, dword ptr [esp + 4]
// 0068ed04  56                   push esi
// 0068ed05  8bf1                 mov esi, ecx
// 0068ed07  50                   push eax
// 0068ed08  8d4c240c             lea ecx, [esp + 0xc]
// 0068ed0c  e85ffdffff           call 0x68ea70
// 0068ed11  3bc6                 cmp eax, esi
// 0068ed13  7408                 je 0x68ed1d
// 0068ed15  8b16                 mov edx, dword ptr [esi]
// 0068ed17  8b08                 mov ecx, dword ptr [eax]
// 0068ed19  8910                 mov dword ptr [eax], edx
// 0068ed1b  890e                 mov dword ptr [esi], ecx
// 0068ed1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068ed21  85c9                 test ecx, ecx
// 0068ed23  7408                 je 0x68ed2d
// 0068ed25  8b01                 mov eax, dword ptr [ecx]
// 0068ed27  8b10                 mov edx, dword ptr [eax]
// 0068ed29  6a01                 push 1
// 0068ed2b  ffd2                 call edx
// 0068ed2d  8bc6                 mov eax, esi
// 0068ed2f  5e                   pop esi
// 0068ed30  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
