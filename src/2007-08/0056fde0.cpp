// roc 2007-08 0056fde0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056fde0
//
// 0056fde0  6aff                 push -1
// 0056fde2  6803637500           push 0x756303
// 0056fde7  64a100000000         mov eax, dword ptr fs:[0]
// 0056fded  50                   push eax
// 0056fdee  64892500000000       mov dword ptr fs:[0], esp
// 0056fdf5  83ec0c               sub esp, 0xc
// 0056fdf8  53                   push ebx
// 0056fdf9  55                   push ebp
// 0056fdfa  56                   push esi
// 0056fdfb  8bf1                 mov esi, ecx
// 0056fdfd  57                   push edi
// 0056fdfe  89742410             mov dword ptr [esp + 0x10], esi
// 0056fe02  c706bca07a00         mov dword ptr [esi], 0x7aa0bc
// 0056fe08  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0056fe0b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0056fe0e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0056fe14  c744242408000000     mov dword ptr [esp + 0x24], 8
// 0056fe1c  7602                 jbe 0x56fe20
// 0056fe1e  ffd3                 call ebx
// 0056fe20  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0056fe23  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0056fe26  7602                 jbe 0x56fe2a
// 0056fe28  ffd3                 call ebx
// 0056fe2a  33db                 xor ebx, ebx
// 0056fe2c  3bfd                 cmp edi, ebp
// 0056fe2e  7415                 je 0x56fe45
// 0056fe30  8b0f                 mov ecx, dword ptr [edi]
// 0056fe32  3bcb                 cmp ecx, ebx
// 0056fe34  7408                 je 0x56fe3e
// 0056fe36  8b01                 mov eax, dword ptr [ecx]
// 0056fe38  8b10                 mov edx, dword ptr [eax]
// 0056fe3a  6a01                 push 1
// 0056fe3c  ffd2                 call edx
// 0056fe3e  83c704               add edi, 4
// 0056fe41  3bfd                 cmp edi, ebp
// 0056fe43  75eb                 jne 0x56fe30
// 0056fe45  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0056fe4b  3bc3                 cmp eax, ebx
// 0056fe4d  7409                 je 0x56fe58
// 0056fe4f  50                   push eax
// 0056fe50  e80dfe0b00           call 0x62fc62
// 0056fe55  83c404               add esp, 4
// 0056fe58  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0056fe5e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 0056fe64  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0056fe6a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0056fe6d  3bc3                 cmp eax, ebx
// 0056fe6f  7409                 je 0x56fe7a
// 0056fe71  50                   push eax
// 0056fe72  e8ebfd0b00           call 0x62fc62
// 0056fe77  83c404               add esp, 4
// 0056fe7a  8d4e68               lea ecx, [esi + 0x68]
// 0056fe7d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0056fe80  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0056fe86  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0056fe8c  c644242405           mov byte ptr [esp + 0x24], 5
// 0056fe91  e8caa3e9ff           call 0x40a260
// 0056fe96  8b4660               mov eax, dword ptr [esi + 0x60]
// 0056fe99  8b08                 mov ecx, dword ptr [eax]
// 0056fe9b  8d7e5c               lea edi, [esi + 0x5c]
// 0056fe9e  50                   push eax
// 0056fe9f  57                   push edi
// 0056fea0  51                   push ecx
// 0056fea1  57                   push edi
// 0056fea2  8d442424             lea eax, [esp + 0x24]
// 0056fea6  50                   push eax
// 0056fea7  8bcf                 mov ecx, edi
// 0056fea9  c644243804           mov byte ptr [esp + 0x38], 4
// 0056feae  e8ad35fdff           call 0x543460
// 0056feb3  8b4704               mov eax, dword ptr [edi + 4]
// 0056feb6  50                   push eax
// 0056feb7  e8a6fd0b00           call 0x62fc62
// 0056febc  895f04               mov dword ptr [edi + 4], ebx
// 0056febf  895f08               mov dword ptr [edi + 8], ebx
// 0056fec2  8b4654               mov eax, dword ptr [esi + 0x54]
// 0056fec5  8b08                 mov ecx, dword ptr [eax]
// 0056fec7  83c404               add esp, 4
// 0056feca  8d7e50               lea edi, [esi + 0x50]
// 0056fecd  50                   push eax
// 0056fece  57                   push edi
// 0056fecf  51                   push ecx
// 0056fed0  57                   push edi
// 0056fed1  8d4c2424             lea ecx, [esp + 0x24]
// 0056fed5  51                   push ecx
// 0056fed6  8bcf                 mov ecx, edi
// 0056fed8  c644243803           mov byte ptr [esp + 0x38], 3
// 0056fedd  e87e35fdff           call 0x543460
// 0056fee2  8b4704               mov eax, dword ptr [edi + 4]
// 0056fee5  50                   push eax
// 0056fee6  e877fd0b00           call 0x62fc62
// 0056feeb  895f04               mov dword ptr [edi + 4], ebx
// 0056feee  895f08               mov dword ptr [edi + 8], ebx
// 0056fef1  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056fef4  83c404               add esp, 4
// 0056fef7  3bc3                 cmp eax, ebx
// 0056fef9  7409                 je 0x56ff04
// 0056fefb  50                   push eax
// 0056fefc  e861fd0b00           call 0x62fc62
// 0056ff01  83c404               add esp, 4
// 0056ff04  8d7e34               lea edi, [esi + 0x34]
// 0056ff07  895e44               mov dword ptr [esi + 0x44], ebx
// 0056ff0a  895e48               mov dword ptr [esi + 0x48], ebx
// 0056ff0d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0056ff10  8b4704               mov eax, dword ptr [edi + 4]
// 0056ff13  8b08                 mov ecx, dword ptr [eax]
// 0056ff15  50                   push eax
// 0056ff16  57                   push edi
// 0056ff17  51                   push ecx
// 0056ff18  57                   push edi
// 0056ff19  8d542424             lea edx, [esp + 0x24]
// 0056ff1d  52                   push edx
// 0056ff1e  8bcf                 mov ecx, edi
// 0056ff20  c644243801           mov byte ptr [esp + 0x38], 1
// 0056ff25  e806750400           call 0x5b7430
// 0056ff2a  8b4704               mov eax, dword ptr [edi + 4]
// 0056ff2d  50                   push eax
// 0056ff2e  e82ffd0b00           call 0x62fc62
// 0056ff33  895f04               mov dword ptr [edi + 4], ebx
// 0056ff36  895f08               mov dword ptr [edi + 8], ebx
// 0056ff39  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0056ff3c  8b08                 mov ecx, dword ptr [eax]
// 0056ff3e  83c404               add esp, 4
// 0056ff41  8d7e28               lea edi, [esi + 0x28]
// 0056ff44  50                   push eax
// 0056ff45  57                   push edi
// 0056ff46  51                   push ecx
// 0056ff47  57                   push edi
// 0056ff48  8d442424             lea eax, [esp + 0x24]
// 0056ff4c  50                   push eax
// 0056ff4d  8bcf                 mov ecx, edi
// 0056ff4f  885c2438             mov byte ptr [esp + 0x38], bl
// 0056ff53  e8d8740400           call 0x5b7430
// 0056ff58  8b4704               mov eax, dword ptr [edi + 4]
// 0056ff5b  50                   push eax
// 0056ff5c  e801fd0b00           call 0x62fc62
// 0056ff61  83c404               add esp, 4
// 0056ff64  8bce                 mov ecx, esi
// 0056ff66  895f04               mov dword ptr [edi + 4], ebx
// 0056ff69  895f08               mov dword ptr [edi + 8], ebx
// 0056ff6c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0056ff74  e807730100           call 0x587280
// 0056ff79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ff7d  5f                   pop edi
// 0056ff7e  5e                   pop esi
// 0056ff7f  5d                   pop ebp
// 0056ff80  5b                   pop ebx
// 0056ff81  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ff88  83c418               add esp, 0x18
// 0056ff8b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
