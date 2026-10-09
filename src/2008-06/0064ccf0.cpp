// roc 2008-06 0064ccf0  unit: RBX::HUMAN::Climbing  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ccf0
//
// 0064ccf0  6aff                 push -1
// 0064ccf2  683beb7d00           push 0x7deb3b
// 0064ccf7  64a100000000         mov eax, dword ptr fs:[0]
// 0064ccfd  50                   push eax
// 0064ccfe  64892500000000       mov dword ptr fs:[0], esp
// 0064cd05  83ec60               sub esp, 0x60
// 0064cd08  53                   push ebx
// 0064cd09  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0064cd0d  55                   push ebp
// 0064cd0e  56                   push esi
// 0064cd0f  57                   push edi
// 0064cd10  6a05                 push 5
// 0064cd12  53                   push ebx
// 0064cd13  8bf9                 mov edi, ecx
// 0064cd15  e846fdffff           call 0x64ca60
// 0064cd1a  6888000000           push 0x88
// 0064cd1f  8be8                 mov ebp, eax
// 0064cd21  e8fa3b0500           call 0x6a0920
// 0064cd26  8bf0                 mov esi, eax
// 0064cd28  83c40c               add esp, 0xc
// 0064cd2b  89b42480000000       mov dword ptr [esp + 0x80], esi
// 0064cd32  c744247800000000     mov dword ptr [esp + 0x78], 0
// 0064cd3a  85f6                 test esi, esi
// 0064cd3c  7426                 je 0x64cd64
// 0064cd3e  8d4c2410             lea ecx, [esp + 0x10]
// 0064cd42  e889b5e2ff           call 0x4782d0
// 0064cd47  50                   push eax
// 0064cd48  8d4c2444             lea ecx, [esp + 0x44]
// 0064cd4c  e87fb5e2ff           call 0x4782d0
// 0064cd51  50                   push eax
// 0064cd52  6a00                 push 0
// 0064cd54  53                   push ebx
// 0064cd55  8bce                 mov ecx, esi
// 0064cd57  e86488ffff           call 0x6455c0
// 0064cd5c  c7060cb18400         mov dword ptr [esi], 0x84b10c
// 0064cd62  eb02                 jmp 0x64cd66
// 0064cd64  33f6                 xor esi, esi
// 0064cd66  57                   push edi
// 0064cd67  8bce                 mov ecx, esi
// 0064cd69  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0064cd71  e8ba8affff           call 0x645830
// 0064cd76  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064cd79  8b01                 mov eax, dword ptr [ecx]
// 0064cd7b  8b5010               mov edx, dword ptr [eax + 0x10]
// 0064cd7e  56                   push esi
// 0064cd7f  ffd2                 call edx
// 0064cd81  8b07                 mov eax, dword ptr [edi]
// 0064cd83  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064cd86  55                   push ebp
// 0064cd87  8bcf                 mov ecx, edi
// 0064cd89  ffd2                 call edx
// 0064cd8b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0064cd8f  5f                   pop edi
// 0064cd90  5e                   pop esi
// 0064cd91  5d                   pop ebp
// 0064cd92  5b                   pop ebx
// 0064cd93  64890d00000000       mov dword ptr fs:[0], ecx
// 0064cd9a  83c46c               add esp, 0x6c
// 0064cd9d  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?onPrimitiveRemovedAnchor@ClumpStage@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
