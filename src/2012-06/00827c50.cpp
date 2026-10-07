// roc 2012-06 00827c50  unit: RBX::$01::?$SurfaceDescriptor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00827c50
//
// 00827c50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00827c54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00827c58  56                   push esi
// 00827c59  8b742408             mov esi, dword ptr [esp + 8]
// 00827c5d  50                   push eax
// 00827c5e  51                   push ecx
// 00827c5f  56                   push esi
// 00827c60  e86bfaffff           call 0x8276d0
// 00827c65  83c40c               add esp, 0xc
// 00827c68  8bc6                 mov eax, esi
// 00827c6a  5e                   pop esi
// 00827c6b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?status_api@detail@filesystem@boost@@YA?AVfile_status@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
