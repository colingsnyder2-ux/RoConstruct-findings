// roc 2008-06 0048d9e0  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d9e0
//
// 0048d9e0  6aff                 push -1
// 0048d9e2  6828637c00           push 0x7c6328
// 0048d9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0048d9ed  50                   push eax
// 0048d9ee  64892500000000       mov dword ptr fs:[0], esp
// 0048d9f5  83ec10               sub esp, 0x10
// 0048d9f8  53                   push ebx
// 0048d9f9  56                   push esi
// 0048d9fa  57                   push edi
// 0048d9fb  8bf9                 mov edi, ecx
// 0048d9fd  8d44242c             lea eax, [esp + 0x2c]
// 0048da01  50                   push eax
// 0048da02  8d4c2430             lea ecx, [esp + 0x30]
// 0048da06  51                   push ecx
// 0048da07  8bcf                 mov ecx, edi
// 0048da09  897c2414             mov dword ptr [esp + 0x14], edi
// 0048da0d  e8fef4ffff           call 0x48cf10
// 0048da12  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0048da16  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0048da1a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0048da22  3bf3                 cmp esi, ebx
// 0048da24  7412                 je 0x48da38
// 0048da26  56                   push esi
// 0048da27  8d542414             lea edx, [esp + 0x14]
// 0048da2b  52                   push edx
// 0048da2c  8bcf                 mov ecx, edi
// 0048da2e  e89deeffff           call 0x48c8d0
// 0048da33  46                   inc esi
// 0048da34  3bf3                 cmp esi, ebx
// 0048da36  75ee                 jne 0x48da26
// 0048da38  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048da3c  8bc7                 mov eax, edi
// 0048da3e  5f                   pop edi
// 0048da3f  5e                   pop esi
// 0048da40  5b                   pop ebx
// 0048da41  64890d00000000       mov dword ptr fs:[0], ecx
// 0048da48  83c41c               add esp, 0x1c
// 0048da4b  c20800               ret 8
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$?0PBD@?$set@DU?$less@D@std@@V?$allocator@D@2@@std@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
