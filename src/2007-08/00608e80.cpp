// roc 2007-08 00608e80  unit: RBX::SimJobStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608e80
//
// 00608e80  53                   push ebx
// 00608e81  56                   push esi
// 00608e82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00608e86  8b06                 mov eax, dword ptr [esi]
// 00608e88  8b5008               mov edx, dword ptr [eax + 8]
// 00608e8b  8bd9                 mov ebx, ecx
// 00608e8d  57                   push edi
// 00608e8e  8bce                 mov ecx, esi
// 00608e90  ffd2                 call edx
// 00608e92  8bce                 mov ecx, esi
// 00608e94  e887930800           call 0x692220
// 00608e99  8bf8                 mov edi, eax
// 00608e9b  56                   push esi
// 00608e9c  8bcf                 mov ecx, edi
// 00608e9e  e82d38faff           call 0x5ac6d0
// 00608ea3  837f0800             cmp dword ptr [edi + 8], 0
// 00608ea7  7508                 jne 0x608eb1
// 00608ea9  57                   push edi
// 00608eaa  8bcb                 mov ecx, ebx
// 00608eac  e88ffeffff           call 0x608d40
// 00608eb1  53                   push ebx
// 00608eb2  8bce                 mov ecx, esi
// 00608eb4  e887020000           call 0x609140
// 00608eb9  5f                   pop edi
// 00608eba  5e                   pop esi
// 00608ebb  5b                   pop ebx
// 00608ebc  c20400               ret 4
// library rbxgs/v8world\SimJobStage.cpp (function ?onAssemblyRemoving@SimJobStage@RBX@@QAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
