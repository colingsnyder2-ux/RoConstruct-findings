// roc 2009-06 006637a0  unit: RBX::$01::?$SurfaceDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006637a0
//
// 006637a0  8b442408             mov eax, dword ptr [esp + 8]
// 006637a4  56                   push esi
// 006637a5  8bf1                 mov esi, ecx
// 006637a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006637ab  50                   push eax
// 006637ac  51                   push ecx
// 006637ad  e8cea1f6ff           call 0x5cd980
// 006637b2  83c404               add esp, 4
// 006637b5  50                   push eax
// 006637b6  8bce                 mov ecx, esi
// 006637b8  e893adf8ff           call 0x5ee550
// 006637bd  5e                   pop esi
// 006637be  c20800               ret 8
// library boost-1.44.0/libs\iostreams\src\file_descriptor.cpp (function ?open@file_descriptor_impl@detail@iostreams@boost@@QAEXHW4flags@1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/iostreams/src/file_descriptor.cpp
