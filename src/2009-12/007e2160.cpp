// roc 2009-12 007e2160  unit: PasteVerb  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e2160
//
// 007e2160  51                   push ecx
// 007e2161  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e2165  56                   push esi
// 007e2166  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e216a  8d442414             lea eax, [esp + 0x14]
// 007e216e  50                   push eax
// 007e216f  51                   push ecx
// 007e2170  56                   push esi
// 007e2171  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007e2179  e8f2fdffff           call 0x7e1f70
// 007e217e  83c40c               add esp, 0xc
// 007e2181  8bc6                 mov eax, esi
// 007e2183  5e                   pop esi
// 007e2184  59                   pop ecx
// 007e2185  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
