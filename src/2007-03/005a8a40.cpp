// roc 2007-03 005a8a40  unit: seg_005a0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8a40
//
// 005a8a40  53                   push ebx
// 005a8a41  56                   push esi
// 005a8a42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a8a46  8b06                 mov eax, dword ptr [esi]
// 005a8a48  8b5008               mov edx, dword ptr [eax + 8]
// 005a8a4b  8bd9                 mov ebx, ecx
// 005a8a4d  57                   push edi
// 005a8a4e  8bce                 mov ecx, esi
// 005a8a50  ffd2                 call edx
// 005a8a52  8bce                 mov ecx, esi
// 005a8a54  e8f7511100           call 0x6bdc50
// 005a8a59  8bf8                 mov edi, eax
// 005a8a5b  56                   push esi
// 005a8a5c  8bcf                 mov ecx, edi
// 005a8a5e  e80df8ffff           call 0x5a8270
// 005a8a63  837f0800             cmp dword ptr [edi + 8], 0
// 005a8a67  7508                 jne 0x5a8a71
// 005a8a69  57                   push edi
// 005a8a6a  8bcb                 mov ecx, ebx
// 005a8a6c  e88ffeffff           call 0x5a8900
// 005a8a71  53                   push ebx
// 005a8a72  8bce                 mov ecx, esi
// 005a8a74  e837170400           call 0x5ea1b0
// 005a8a79  5f                   pop edi
// 005a8a7a  5e                   pop esi
// 005a8a7b  5b                   pop ebx
// 005a8a7c  c20400               ret 4
// library rbxgs/v8world\SimJobStage.cpp (function ?onAssemblyRemoving@SimJobStage@RBX@@QAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
