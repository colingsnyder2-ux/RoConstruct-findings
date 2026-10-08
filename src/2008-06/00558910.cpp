// roc 2008-06 00558910  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558910
//
// 00558910  6aff                 push -1
// 00558912  6838077d00           push 0x7d0738
// 00558917  64a100000000         mov eax, dword ptr fs:[0]
// 0055891d  50                   push eax
// 0055891e  64892500000000       mov dword ptr fs:[0], esp
// 00558925  51                   push ecx
// 00558926  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055892a  56                   push esi
// 0055892b  8bf1                 mov esi, ecx
// 0055892d  50                   push eax
// 0055892e  56                   push esi
// 0055892f  8974240c             mov dword ptr [esp + 0xc], esi
// 00558933  e808010c00           call 0x618a40
// 00558938  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055893c  51                   push ecx
// 0055893d  8d5608               lea edx, [esi + 8]
// 00558940  52                   push edx
// 00558941  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00558949  e8f2000c00           call 0x618a40
// 0055894e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558952  83c410               add esp, 0x10
// 00558955  8bc6                 mov eax, esi
// 00558957  5e                   pop esi
// 00558958  64890d00000000       mov dword ptr fs:[0], ecx
// 0055895f  83c410               add esp, 0x10
// 00558962  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ??0DescendentAdded@RBX@@AAE@PAVInstance@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
