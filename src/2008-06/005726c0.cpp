// roc 2008-06 005726c0  unit: RBX::ServiceProvider  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005726c0
//
// 005726c0  56                   push esi
// 005726c1  57                   push edi
// 005726c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005726c6  8bf1                 mov esi, ecx
// 005726c8  8b0f                 mov ecx, dword ptr [edi]
// 005726ca  8b01                 mov eax, dword ptr [ecx]
// 005726cc  8b5030               mov edx, dword ptr [eax + 0x30]
// 005726cf  6a00                 push 0
// 005726d1  56                   push esi
// 005726d2  ffd2                 call edx
// 005726d4  57                   push edi
// 005726d5  8bce                 mov ecx, esi
// 005726d7  e8b487feff           call 0x55ae90
// 005726dc  5f                   pop edi
// 005726dd  5e                   pop esi
// 005726de  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onDescendentRemoving@ServiceProvider@RBX@@MAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
