// roc 2007-08 00571500  unit: RBX::Reflection::ClassDescriptor  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571500
//
// 00571500  6aff                 push -1
// 00571502  68e8047500           push 0x7504e8
// 00571507  64a100000000         mov eax, dword ptr fs:[0]
// 0057150d  50                   push eax
// 0057150e  64892500000000       mov dword ptr fs:[0], esp
// 00571515  83ec08               sub esp, 8
// 00571518  56                   push esi
// 00571519  8bf1                 mov esi, ecx
// 0057151b  57                   push edi
// 0057151c  8b3e                 mov edi, dword ptr [esi]
// 0057151e  8bcf                 mov ecx, edi
// 00571520  897c2408             mov dword ptr [esp + 8], edi
// 00571524  e827421b00           call 0x725750
// 00571529  c644240c01           mov byte ptr [esp + 0xc], 1
// 0057152e  8b36                 mov esi, dword ptr [esi]
// 00571530  8d4e08               lea ecx, [esi + 8]
// 00571533  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057153b  e810541b00           call 0x726950
// 00571540  8bcf                 mov ecx, edi
// 00571542  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057154a  e821421b00           call 0x725770
// 0057154f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00571553  5f                   pop edi
// 00571554  5e                   pop esi
// 00571555  64890d00000000       mov dword ptr fs:[0], ecx
// 0057155c  83c414               add esp, 0x14
// 0057155f  c3                   ret 
// library rbxgs/util\boost.cpp (function ?wake@worker_thread@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
