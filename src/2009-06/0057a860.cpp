// from server: 100% by auto
// roc 2009-06 0057a860  unit: G3D::TextInput::TokenException  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a860
//
// 0057a860  6aff                 push -1
// 0057a862  68d9098600           push 0x8609d9
// 0057a867  64a100000000         mov eax, dword ptr fs:[0]
// 0057a86d  50                   push eax
// 0057a86e  64892500000000       mov dword ptr fs:[0], esp
// 0057a875  83ec20               sub esp, 0x20
// 0057a878  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057a87c  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057a880  55                   push ebp
// 0057a881  56                   push esi
// 0057a882  57                   push edi
// 0057a883  8bf1                 mov esi, ecx
// 0057a885  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057a889  50                   push eax
// 0057a88a  51                   push ecx
// 0057a88b  52                   push edx
// 0057a88c  8bce                 mov ecx, esi
// 0057a88e  89742418             mov dword ptr [esp + 0x18], esi
// 0057a892  e889fdffff           call 0x57a620
// 0057a897  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0057a89b  55                   push ebp
// 0057a89c  8d4e44               lea ecx, [esi + 0x44]
// 0057a89f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0057a8a7  c706a8bf8c00         mov dword ptr [esi], 0x8cbfa8
// 0057a8ad  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a8b3  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0057a8b7  57                   push edi
// 0057a8b8  8d4e60               lea ecx, [esi + 0x60]
// 0057a8bb  c644243801           mov byte ptr [esp + 0x38], 1
// 0057a8c0  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a8c6  b810000000           mov eax, 0x10
// 0057a8cb  c644243402           mov byte ptr [esp + 0x34], 2
// 0057a8d0  394718               cmp dword ptr [edi + 0x18], eax
// 0057a8d3  7205                 jb 0x57a8da
// 0057a8d5  8b7f04               mov edi, dword ptr [edi + 4]
// 0057a8d8  eb03                 jmp 0x57a8dd
// 0057a8da  83c704               add edi, 4
// 0057a8dd  394518               cmp dword ptr [ebp + 0x18], eax
// 0057a8e0  7205                 jb 0x57a8e7
// 0057a8e2  8b4504               mov eax, dword ptr [ebp + 4]
// 0057a8e5  eb03                 jmp 0x57a8ea
// 0057a8e7  8d4504               lea eax, [ebp + 4]
// 0057a8ea  57                   push edi
// 0057a8eb  50                   push eax
// 0057a8ec  8d442418             lea eax, [esp + 0x18]
// 0057a8f0  6878bf8c00           push 0x8cbf78
// 0057a8f5  50                   push eax
// 0057a8f6  e885eaffff           call 0x579380
// 0057a8fb  83c410               add esp, 0x10
// 0057a8fe  50                   push eax
// 0057a8ff  8d4e28               lea ecx, [esi + 0x28]
// 0057a902  c644243803           mov byte ptr [esp + 0x38], 3
// 0057a907  ff15ace48900         call dword ptr [0x89e4ac]
// 0057a90d  8d4c2410             lea ecx, [esp + 0x10]
// 0057a911  c644243402           mov byte ptr [esp + 0x34], 2
// 0057a916  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a91c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a920  5f                   pop edi
// 0057a921  8bc6                 mov eax, esi
// 0057a923  5e                   pop esi
// 0057a924  5d                   pop ebp
// 0057a925  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a92c  83c42c               add esp, 0x2c
// 0057a92f  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
