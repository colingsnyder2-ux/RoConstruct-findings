// roc 2007-03 00550cc0  unit: seg_00550000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550cc0
//
// 00550cc0  56                   push esi
// 00550cc1  57                   push edi
// 00550cc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00550cc6  57                   push edi
// 00550cc7  8bf1                 mov esi, ecx
// 00550cc9  e882fcfeff           call 0x540950
// 00550cce  8b07                 mov eax, dword ptr [edi]
// 00550cd0  8b5030               mov edx, dword ptr [eax + 0x30]
// 00550cd3  56                   push esi
// 00550cd4  6a00                 push 0
// 00550cd6  8bcf                 mov ecx, edi
// 00550cd8  ffd2                 call edx
// 00550cda  5f                   pop edi
// 00550cdb  5e                   pop esi
// 00550cdc  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onDescendentAdded@ServiceProvider@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
