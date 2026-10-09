// roc 2009-06 00620da0  unit: TextXmlParser  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620da0
//
// 00620da0  6aff                 push -1
// 00620da2  6878ef8600           push 0x86ef78
// 00620da7  64a100000000         mov eax, dword ptr fs:[0]
// 00620dad  50                   push eax
// 00620dae  64892500000000       mov dword ptr fs:[0], esp
// 00620db5  51                   push ecx
// 00620db6  56                   push esi
// 00620db7  57                   push edi
// 00620db8  8bf9                 mov edi, ecx
// 00620dba  6a04                 push 4
// 00620dbc  8d7704               lea esi, [edi + 4]
// 00620dbf  e8747c0f00           call 0x718a38
// 00620dc4  33c9                 xor ecx, ecx
// 00620dc6  83c404               add esp, 4
// 00620dc9  3bc1                 cmp eax, ecx
// 00620dcb  7404                 je 0x620dd1
// 00620dcd  8930                 mov dword ptr [eax], esi
// 00620dcf  eb02                 jmp 0x620dd3
// 00620dd1  33c0                 xor eax, eax
// 00620dd3  8906                 mov dword ptr [esi], eax
// 00620dd5  894e0c               mov dword ptr [esi + 0xc], ecx
// 00620dd8  894e10               mov dword ptr [esi + 0x10], ecx
// 00620ddb  894e14               mov dword ptr [esi + 0x14], ecx
// 00620dde  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00620de2  8bc7                 mov eax, edi
// 00620de4  5f                   pop edi
// 00620de5  5e                   pop esi
// 00620de6  64890d00000000       mov dword ptr fs:[0], ecx
// 00620ded  83c410               add esp, 0x10
// 00620df0  c3                   ret 
// library openrbx-client/App\v8datamodel\RootInstance.cpp (function ??0ICameraOwner@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/RootInstance.cpp
