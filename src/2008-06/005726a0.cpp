// roc 2008-06 005726a0  unit: RBX::ServiceProvider  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005726a0
//
// 005726a0  56                   push esi
// 005726a1  57                   push edi
// 005726a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005726a6  57                   push edi
// 005726a7  8bf1                 mov esi, ecx
// 005726a9  e87287feff           call 0x55ae20
// 005726ae  8b07                 mov eax, dword ptr [edi]
// 005726b0  8b5030               mov edx, dword ptr [eax + 0x30]
// 005726b3  56                   push esi
// 005726b4  6a00                 push 0
// 005726b6  8bcf                 mov ecx, edi
// 005726b8  ffd2                 call edx
// 005726ba  5f                   pop edi
// 005726bb  5e                   pop esi
// 005726bc  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onDescendentAdded@ServiceProvider@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
