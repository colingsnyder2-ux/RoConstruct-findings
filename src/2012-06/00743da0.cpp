// roc 2012-06 00743da0  unit: boost::bad_lexical_cast  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00743da0
//
// 00743da0  51                   push ecx
// 00743da1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00743da5  803800               cmp byte ptr [eax], 0
// 00743da8  c7042400000000       mov dword ptr [esp], 0
// 00743daf  b83c37b800           mov eax, 0xb8373c
// 00743db4  7505                 jne 0x743dbb
// 00743db6  b80016b500           mov eax, 0xb51600
// 00743dbb  56                   push esi
// 00743dbc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00743dc0  50                   push eax
// 00743dc1  8bce                 mov ecx, esi
// 00743dc3  ff154826b200         call dword ptr [0xb22648]
// 00743dc9  8bc6                 mov eax, esi
// 00743dcb  5e                   pop esi
// 00743dcc  59                   pop ecx
// 00743dcd  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
