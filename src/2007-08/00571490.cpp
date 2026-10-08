// roc 2007-08 00571490  unit: RBX::Reflection::ClassDescriptor  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571490
//
// 00571490  6aff                 push -1
// 00571492  68e8047500           push 0x7504e8
// 00571497  64a100000000         mov eax, dword ptr fs:[0]
// 0057149d  50                   push eax
// 0057149e  64892500000000       mov dword ptr fs:[0], esp
// 005714a5  83ec08               sub esp, 8
// 005714a8  56                   push esi
// 005714a9  8bf1                 mov esi, ecx
// 005714ab  57                   push edi
// 005714ac  8b3e                 mov edi, dword ptr [esi]
// 005714ae  8bcf                 mov ecx, edi
// 005714b0  897c2408             mov dword ptr [esp + 8], edi
// 005714b4  e897421b00           call 0x725750
// 005714b9  b101                 mov cl, 1
// 005714bb  884c240c             mov byte ptr [esp + 0xc], cl
// 005714bf  8b06                 mov eax, dword ptr [esi]
// 005714c1  884820               mov byte ptr [eax + 0x20], cl
// 005714c4  8b06                 mov eax, dword ptr [esi]
// 005714c6  8d4808               lea ecx, [eax + 8]
// 005714c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005714d1  e87a541b00           call 0x726950
// 005714d6  8bcf                 mov ecx, edi
// 005714d8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005714e0  e88b421b00           call 0x725770
// 005714e5  8d4e08               lea ecx, [esi + 8]
// 005714e8  e8634f1b00           call 0x726450
// 005714ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005714f1  5f                   pop edi
// 005714f2  5e                   pop esi
// 005714f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005714fa  83c414               add esp, 0x14
// 005714fd  c3                   ret 
// library rbxgs/util\boost.cpp (function ?join@worker_thread@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
