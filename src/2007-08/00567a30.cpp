// roc 2007-08 00567a30  unit: TextXmlParser  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567a30
//
// 00567a30  6aff                 push -1
// 00567a32  68683f7500           push 0x753f68
// 00567a37  64a100000000         mov eax, dword ptr fs:[0]
// 00567a3d  50                   push eax
// 00567a3e  64892500000000       mov dword ptr fs:[0], esp
// 00567a45  83ec24               sub esp, 0x24
// 00567a48  8b442434             mov eax, dword ptr [esp + 0x34]
// 00567a4c  56                   push esi
// 00567a4d  8bf1                 mov esi, ecx
// 00567a4f  56                   push esi
// 00567a50  50                   push eax
// 00567a51  6a00                 push 0
// 00567a53  8d4c2410             lea ecx, [esp + 0x10]
// 00567a57  e8d4930700           call 0x5e0e30
// 00567a5c  d944243c             fld dword ptr [esp + 0x3c]
// 00567a60  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00567a64  51                   push ecx
// 00567a65  83ec0c               sub esp, 0xc
// 00567a68  8bc4                 mov eax, esp
// 00567a6a  d918                 fstp dword ptr [eax]
// 00567a6c  8d542414             lea edx, [esp + 0x14]
// 00567a70  d9442450             fld dword ptr [esp + 0x50]
// 00567a74  89642448             mov dword ptr [esp + 0x48], esp
// 00567a78  d95804               fstp dword ptr [eax + 4]
// 00567a7b  52                   push edx
// 00567a7c  d9442458             fld dword ptr [esp + 0x58]
// 00567a80  8bce                 mov ecx, esi
// 00567a82  d95808               fstp dword ptr [eax + 8]
// 00567a85  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00567a8d  e83effffff           call 0x5679d0
// 00567a92  8d4c2404             lea ecx, [esp + 4]
// 00567a96  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00567a9e  e84d940700           call 0x5e0ef0
// 00567aa3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00567aa7  64890d00000000       mov dword ptr fs:[0], ecx
// 00567aae  5e                   pop esi
// 00567aaf  83c430               add esp, 0x30
// 00567ab2  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
