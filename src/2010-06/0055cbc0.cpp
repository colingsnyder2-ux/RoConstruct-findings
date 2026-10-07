// roc 2010-06 0055cbc0  unit: G3D::TextInput::TokenException  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cbc0
//
// 0055cbc0  6aff                 push -1
// 0055cbc2  68f9159900           push 0x9915f9
// 0055cbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0055cbcd  50                   push eax
// 0055cbce  64892500000000       mov dword ptr fs:[0], esp
// 0055cbd5  83ec20               sub esp, 0x20
// 0055cbd8  8b442438             mov eax, dword ptr [esp + 0x38]
// 0055cbdc  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055cbe0  55                   push ebp
// 0055cbe1  56                   push esi
// 0055cbe2  57                   push edi
// 0055cbe3  8bf1                 mov esi, ecx
// 0055cbe5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055cbe9  50                   push eax
// 0055cbea  51                   push ecx
// 0055cbeb  52                   push edx
// 0055cbec  8bce                 mov ecx, esi
// 0055cbee  89742418             mov dword ptr [esp + 0x18], esi
// 0055cbf2  e889fdffff           call 0x55c980
// 0055cbf7  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0055cbfb  55                   push ebp
// 0055cbfc  8d4e44               lea ecx, [esi + 0x44]
// 0055cbff  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055cc07  c706400ba200         mov dword ptr [esi], 0xa20b40
// 0055cc0d  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055cc13  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0055cc17  57                   push edi
// 0055cc18  8d4e60               lea ecx, [esi + 0x60]
// 0055cc1b  c644243801           mov byte ptr [esp + 0x38], 1
// 0055cc20  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055cc26  b810000000           mov eax, 0x10
// 0055cc2b  c644243402           mov byte ptr [esp + 0x34], 2
// 0055cc30  394718               cmp dword ptr [edi + 0x18], eax
// 0055cc33  7205                 jb 0x55cc3a
// 0055cc35  8b7f04               mov edi, dword ptr [edi + 4]
// 0055cc38  eb03                 jmp 0x55cc3d
// 0055cc3a  83c704               add edi, 4
// 0055cc3d  394518               cmp dword ptr [ebp + 0x18], eax
// 0055cc40  7205                 jb 0x55cc47
// 0055cc42  8b4504               mov eax, dword ptr [ebp + 4]
// 0055cc45  eb03                 jmp 0x55cc4a
// 0055cc47  8d4504               lea eax, [ebp + 4]
// 0055cc4a  57                   push edi
// 0055cc4b  50                   push eax
// 0055cc4c  8d442418             lea eax, [esp + 0x18]
// 0055cc50  68100ba200           push 0xa20b10
// 0055cc55  50                   push eax
// 0055cc56  e855a8ffff           call 0x5574b0
// 0055cc5b  83c410               add esp, 0x10
// 0055cc5e  50                   push eax
// 0055cc5f  8d4e28               lea ecx, [esi + 0x28]
// 0055cc62  c644243803           mov byte ptr [esp + 0x38], 3
// 0055cc67  ff1518a49e00         call dword ptr [0x9ea418]
// 0055cc6d  8d4c2410             lea ecx, [esp + 0x10]
// 0055cc71  c644243402           mov byte ptr [esp + 0x34], 2
// 0055cc76  ff1500a49e00         call dword ptr [0x9ea400]
// 0055cc7c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055cc80  5f                   pop edi
// 0055cc81  8bc6                 mov eax, esi
// 0055cc83  5e                   pop esi
// 0055cc84  5d                   pop ebp
// 0055cc85  64890d00000000       mov dword ptr fs:[0], ecx
// 0055cc8c  83c42c               add esp, 0x2c
// 0055cc8f  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
