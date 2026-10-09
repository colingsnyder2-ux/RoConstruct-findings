// roc 2008-06 0064cc40  unit: RBX::HUMAN::Climbing  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cc40
//
// 0064cc40  6aff                 push -1
// 0064cc42  683beb7d00           push 0x7deb3b
// 0064cc47  64a100000000         mov eax, dword ptr fs:[0]
// 0064cc4d  50                   push eax
// 0064cc4e  64892500000000       mov dword ptr fs:[0], esp
// 0064cc55  83ec60               sub esp, 0x60
// 0064cc58  53                   push ebx
// 0064cc59  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0064cc5d  55                   push ebp
// 0064cc5e  56                   push esi
// 0064cc5f  57                   push edi
// 0064cc60  6a09                 push 9
// 0064cc62  53                   push ebx
// 0064cc63  8bf9                 mov edi, ecx
// 0064cc65  e8f6fdffff           call 0x64ca60
// 0064cc6a  6888000000           push 0x88
// 0064cc6f  8be8                 mov ebp, eax
// 0064cc71  e8aa3c0500           call 0x6a0920
// 0064cc76  8bf0                 mov esi, eax
// 0064cc78  83c40c               add esp, 0xc
// 0064cc7b  89b42480000000       mov dword ptr [esp + 0x80], esi
// 0064cc82  c744247800000000     mov dword ptr [esp + 0x78], 0
// 0064cc8a  85f6                 test esi, esi
// 0064cc8c  7426                 je 0x64ccb4
// 0064cc8e  8d4c2410             lea ecx, [esp + 0x10]
// 0064cc92  e839b6e2ff           call 0x4782d0
// 0064cc97  50                   push eax
// 0064cc98  8d4c2444             lea ecx, [esp + 0x44]
// 0064cc9c  e82fb6e2ff           call 0x4782d0
// 0064cca1  50                   push eax
// 0064cca2  6a00                 push 0
// 0064cca4  53                   push ebx
// 0064cca5  8bce                 mov ecx, esi
// 0064cca7  e81489ffff           call 0x6455c0
// 0064ccac  c706ccb08400         mov dword ptr [esi], 0x84b0cc
// 0064ccb2  eb02                 jmp 0x64ccb6
// 0064ccb4  33f6                 xor esi, esi
// 0064ccb6  57                   push edi
// 0064ccb7  8bce                 mov ecx, esi
// 0064ccb9  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0064ccc1  e86a8bffff           call 0x645830
// 0064ccc6  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064ccc9  8b01                 mov eax, dword ptr [ecx]
// 0064cccb  8b5010               mov edx, dword ptr [eax + 0x10]
// 0064ccce  56                   push esi
// 0064cccf  ffd2                 call edx
// 0064ccd1  8b07                 mov eax, dword ptr [edi]
// 0064ccd3  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064ccd6  55                   push ebp
// 0064ccd7  8bcf                 mov ecx, edi
// 0064ccd9  ffd2                 call edx
// 0064ccdb  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0064ccdf  5f                   pop edi
// 0064cce0  5e                   pop esi
// 0064cce1  5d                   pop ebp
// 0064cce2  5b                   pop ebx
// 0064cce3  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ccea  83c46c               add esp, 0x6c
// 0064cced  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?onPrimitiveAddedAnchor@ClumpStage@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
