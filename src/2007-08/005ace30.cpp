// roc 2007-08 005ace30  unit: RBX::VLighting::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ace30
//
// 005ace30  6aff                 push -1
// 005ace32  6848887500           push 0x758848
// 005ace37  64a100000000         mov eax, dword ptr fs:[0]
// 005ace3d  50                   push eax
// 005ace3e  64892500000000       mov dword ptr fs:[0], esp
// 005ace45  51                   push ecx
// 005ace46  56                   push esi
// 005ace47  57                   push edi
// 005ace48  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ace4c  8bf1                 mov esi, ecx
// 005ace4e  57                   push edi
// 005ace4f  8974240c             mov dword ptr [esp + 0xc], esi
// 005ace53  e848feffff           call 0x5acca0
// 005ace58  8b4744               mov eax, dword ptr [edi + 0x44]
// 005ace5b  894644               mov dword ptr [esi + 0x44], eax
// 005ace5e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005ace61  894e48               mov dword ptr [esi + 0x48], ecx
// 005ace64  8b574c               mov edx, dword ptr [edi + 0x4c]
// 005ace67  89564c               mov dword ptr [esi + 0x4c], edx
// 005ace6a  8b4750               mov eax, dword ptr [edi + 0x50]
// 005ace6d  894650               mov dword ptr [esi + 0x50], eax
// 005ace70  8a4f54               mov cl, byte ptr [edi + 0x54]
// 005ace73  83c758               add edi, 0x58
// 005ace76  884e54               mov byte ptr [esi + 0x54], cl
// 005ace79  57                   push edi
// 005ace7a  8d4e58               lea ecx, [esi + 0x58]
// 005ace7d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ace85  ff159ce67700         call dword ptr [0x77e69c]
// 005ace8b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ace8f  5f                   pop edi
// 005ace90  8bc6                 mov eax, esi
// 005ace92  5e                   pop esi
// 005ace93  64890d00000000       mov dword ptr fs:[0], ecx
// 005ace9a  83c410               add esp, 0x10
// 005ace9d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
