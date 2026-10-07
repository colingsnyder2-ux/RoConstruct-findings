// roc 2012-06 0041c0c0  unit: VCRbxObject::?$CComObjectNoLock  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041c0c0
//
// 0041c0c0  51                   push ecx
// 0041c0c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041c0c5  56                   push esi
// 0041c0c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041c0ca  57                   push edi
// 0041c0cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041c0cf  c644240800           mov byte ptr [esp + 8], 0
// 0041c0d4  8b442408             mov eax, dword ptr [esp + 8]
// 0041c0d8  50                   push eax
// 0041c0d9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041c0dd  52                   push edx
// 0041c0de  51                   push ecx
// 0041c0df  50                   push eax
// 0041c0e0  56                   push esi
// 0041c0e1  57                   push edi
// 0041c0e2  e879fbffff           call 0x41bc60
// 0041c0e7  8bce                 mov ecx, esi
// 0041c0e9  83c418               add esp, 0x18
// 0041c0ec  c1e104               shl ecx, 4
// 0041c0ef  03ce                 add ecx, esi
// 0041c0f1  8d048f               lea eax, [edi + ecx*4]
// 0041c0f4  5f                   pop edi
// 0041c0f5  5e                   pop esi
// 0041c0f6  59                   pop ecx
// 0041c0f7  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
