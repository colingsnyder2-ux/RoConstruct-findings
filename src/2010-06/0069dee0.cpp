// roc 2010-06 0069dee0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069dee0
//
// 0069dee0  8b442408             mov eax, dword ptr [esp + 8]
// 0069dee4  56                   push esi
// 0069dee5  8bf1                 mov esi, ecx
// 0069dee7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069deeb  50                   push eax
// 0069deec  51                   push ecx
// 0069deed  e81e65efff           call 0x594410
// 0069def2  83c404               add esp, 4
// 0069def5  50                   push eax
// 0069def6  8bce                 mov ecx, esi
// 0069def8  e843f1f0ff           call 0x5ad040
// 0069defd  5e                   pop esi
// 0069defe  c20800               ret 8
// library boost-1.44.0/libs\iostreams\src\file_descriptor.cpp (function ?open@file_descriptor_impl@detail@iostreams@boost@@QAEXHW4flags@1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/iostreams/src/file_descriptor.cpp
