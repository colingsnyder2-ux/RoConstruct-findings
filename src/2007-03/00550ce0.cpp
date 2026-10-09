// roc 2007-03 00550ce0  unit: seg_00550000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550ce0
//
// 00550ce0  56                   push esi
// 00550ce1  57                   push edi
// 00550ce2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00550ce6  8bf1                 mov esi, ecx
// 00550ce8  8b0f                 mov ecx, dword ptr [edi]
// 00550cea  8b01                 mov eax, dword ptr [ecx]
// 00550cec  8b5030               mov edx, dword ptr [eax + 0x30]
// 00550cef  6a00                 push 0
// 00550cf1  56                   push esi
// 00550cf2  ffd2                 call edx
// 00550cf4  57                   push edi
// 00550cf5  8bce                 mov ecx, esi
// 00550cf7  e82413ffff           call 0x542020
// 00550cfc  5f                   pop edi
// 00550cfd  5e                   pop esi
// 00550cfe  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onDescendentRemoving@ServiceProvider@RBX@@MAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
