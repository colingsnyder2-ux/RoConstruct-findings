// roc 2009-12 00740db0  unit: RBX::VDebrisService::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00740db0
//
// 00740db0  6aff                 push -1
// 00740db2  68089a9400           push 0x949a08
// 00740db7  64a100000000         mov eax, dword ptr fs:[0]
// 00740dbd  50                   push eax
// 00740dbe  64892500000000       mov dword ptr fs:[0], esp
// 00740dc5  51                   push ecx
// 00740dc6  56                   push esi
// 00740dc7  57                   push edi
// 00740dc8  8bf9                 mov edi, ecx
// 00740dca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00740dce  83ec08               sub esp, 8
// 00740dd1  8bc4                 mov eax, esp
// 00740dd3  8908                 mov dword ptr [eax], ecx
// 00740dd5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00740dd9  895004               mov dword ptr [eax + 4], edx
// 00740ddc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00740de0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00740de8  89642410             mov dword ptr [esp + 0x10], esp
// 00740dec  85c0                 test eax, eax
// 00740dee  740c                 je 0x740dfc
// 00740df0  83c004               add eax, 4
// 00740df3  b901000000           mov ecx, 1
// 00740df8  f00fc108             lock xadd dword ptr [eax], ecx
// 00740dfc  8bcf                 mov ecx, edi
// 00740dfe  e8ddfeffff           call 0x740ce0
// 00740e03  8b742420             mov esi, dword ptr [esp + 0x20]
// 00740e07  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00740e0f  85f6                 test esi, esi
// 00740e11  742a                 je 0x740e3d
// 00740e13  8d5604               lea edx, [esi + 4]
// 00740e16  83c8ff               or eax, 0xffffffff
// 00740e19  f00fc102             lock xadd dword ptr [edx], eax
// 00740e1d  751e                 jne 0x740e3d
// 00740e1f  8b16                 mov edx, dword ptr [esi]
// 00740e21  8b4204               mov eax, dword ptr [edx + 4]
// 00740e24  8bce                 mov ecx, esi
// 00740e26  ffd0                 call eax
// 00740e28  8d4e08               lea ecx, [esi + 8]
// 00740e2b  83caff               or edx, 0xffffffff
// 00740e2e  f00fc111             lock xadd dword ptr [ecx], edx
// 00740e32  7509                 jne 0x740e3d
// 00740e34  8b06                 mov eax, dword ptr [esi]
// 00740e36  8b5008               mov edx, dword ptr [eax + 8]
// 00740e39  8bce                 mov ecx, esi
// 00740e3b  ffd2                 call edx
// 00740e3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00740e41  8bc7                 mov eax, edi
// 00740e43  5f                   pop edi
// 00740e44  64890d00000000       mov dword ptr fs:[0], ecx
// 00740e4b  5e                   pop esi
// 00740e4c  83c410               add esp, 0x10
// 00740e4f  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
