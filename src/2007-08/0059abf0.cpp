// roc 2007-08 0059abf0  unit: RBX::VCamera::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059abf0
//
// 0059abf0  6aff                 push -1
// 0059abf2  6803637500           push 0x756303
// 0059abf7  64a100000000         mov eax, dword ptr fs:[0]
// 0059abfd  50                   push eax
// 0059abfe  64892500000000       mov dword ptr fs:[0], esp
// 0059ac05  83ec0c               sub esp, 0xc
// 0059ac08  53                   push ebx
// 0059ac09  55                   push ebp
// 0059ac0a  56                   push esi
// 0059ac0b  8bf1                 mov esi, ecx
// 0059ac0d  57                   push edi
// 0059ac0e  89742410             mov dword ptr [esp + 0x10], esi
// 0059ac12  c70660167b00         mov dword ptr [esi], 0x7b1660
// 0059ac18  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0059ac1b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0059ac1e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0059ac24  c744242408000000     mov dword ptr [esp + 0x24], 8
// 0059ac2c  7602                 jbe 0x59ac30
// 0059ac2e  ffd3                 call ebx
// 0059ac30  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0059ac33  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0059ac36  7602                 jbe 0x59ac3a
// 0059ac38  ffd3                 call ebx
// 0059ac3a  33db                 xor ebx, ebx
// 0059ac3c  3bfd                 cmp edi, ebp
// 0059ac3e  7415                 je 0x59ac55
// 0059ac40  8b0f                 mov ecx, dword ptr [edi]
// 0059ac42  3bcb                 cmp ecx, ebx
// 0059ac44  7408                 je 0x59ac4e
// 0059ac46  8b01                 mov eax, dword ptr [ecx]
// 0059ac48  8b10                 mov edx, dword ptr [eax]
// 0059ac4a  6a01                 push 1
// 0059ac4c  ffd2                 call edx
// 0059ac4e  83c704               add edi, 4
// 0059ac51  3bfd                 cmp edi, ebp
// 0059ac53  75eb                 jne 0x59ac40
// 0059ac55  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0059ac5b  3bc3                 cmp eax, ebx
// 0059ac5d  7409                 je 0x59ac68
// 0059ac5f  50                   push eax
// 0059ac60  e8fd4f0900           call 0x62fc62
// 0059ac65  83c404               add esp, 4
// 0059ac68  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0059ac6e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 0059ac74  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0059ac7a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059ac7d  3bc3                 cmp eax, ebx
// 0059ac7f  7409                 je 0x59ac8a
// 0059ac81  50                   push eax
// 0059ac82  e8db4f0900           call 0x62fc62
// 0059ac87  83c404               add esp, 4
// 0059ac8a  8d4e68               lea ecx, [esi + 0x68]
// 0059ac8d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0059ac90  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0059ac96  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0059ac9c  c644242405           mov byte ptr [esp + 0x24], 5
// 0059aca1  e8baf5e6ff           call 0x40a260
// 0059aca6  8b4660               mov eax, dword ptr [esi + 0x60]
// 0059aca9  8b08                 mov ecx, dword ptr [eax]
// 0059acab  8d7e5c               lea edi, [esi + 0x5c]
// 0059acae  50                   push eax
// 0059acaf  57                   push edi
// 0059acb0  51                   push ecx
// 0059acb1  57                   push edi
// 0059acb2  8d442424             lea eax, [esp + 0x24]
// 0059acb6  50                   push eax
// 0059acb7  8bcf                 mov ecx, edi
// 0059acb9  c644243804           mov byte ptr [esp + 0x38], 4
// 0059acbe  e89d87faff           call 0x543460
// 0059acc3  8b4704               mov eax, dword ptr [edi + 4]
// 0059acc6  50                   push eax
// 0059acc7  e8964f0900           call 0x62fc62
// 0059accc  895f04               mov dword ptr [edi + 4], ebx
// 0059accf  895f08               mov dword ptr [edi + 8], ebx
// 0059acd2  8b4654               mov eax, dword ptr [esi + 0x54]
// 0059acd5  8b08                 mov ecx, dword ptr [eax]
// 0059acd7  83c404               add esp, 4
// 0059acda  8d7e50               lea edi, [esi + 0x50]
// 0059acdd  50                   push eax
// 0059acde  57                   push edi
// 0059acdf  51                   push ecx
// 0059ace0  57                   push edi
// 0059ace1  8d4c2424             lea ecx, [esp + 0x24]
// 0059ace5  51                   push ecx
// 0059ace6  8bcf                 mov ecx, edi
// 0059ace8  c644243803           mov byte ptr [esp + 0x38], 3
// 0059aced  e86e87faff           call 0x543460
// 0059acf2  8b4704               mov eax, dword ptr [edi + 4]
// 0059acf5  50                   push eax
// 0059acf6  e8674f0900           call 0x62fc62
// 0059acfb  895f04               mov dword ptr [edi + 4], ebx
// 0059acfe  895f08               mov dword ptr [edi + 8], ebx
// 0059ad01  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059ad04  83c404               add esp, 4
// 0059ad07  3bc3                 cmp eax, ebx
// 0059ad09  7409                 je 0x59ad14
// 0059ad0b  50                   push eax
// 0059ad0c  e8514f0900           call 0x62fc62
// 0059ad11  83c404               add esp, 4
// 0059ad14  8d7e34               lea edi, [esi + 0x34]
// 0059ad17  895e44               mov dword ptr [esi + 0x44], ebx
// 0059ad1a  895e48               mov dword ptr [esi + 0x48], ebx
// 0059ad1d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0059ad20  8b4704               mov eax, dword ptr [edi + 4]
// 0059ad23  8b08                 mov ecx, dword ptr [eax]
// 0059ad25  50                   push eax
// 0059ad26  57                   push edi
// 0059ad27  51                   push ecx
// 0059ad28  57                   push edi
// 0059ad29  8d542424             lea edx, [esp + 0x24]
// 0059ad2d  52                   push edx
// 0059ad2e  8bcf                 mov ecx, edi
// 0059ad30  c644243801           mov byte ptr [esp + 0x38], 1
// 0059ad35  e8f6c60100           call 0x5b7430
// 0059ad3a  8b4704               mov eax, dword ptr [edi + 4]
// 0059ad3d  50                   push eax
// 0059ad3e  e81f4f0900           call 0x62fc62
// 0059ad43  895f04               mov dword ptr [edi + 4], ebx
// 0059ad46  895f08               mov dword ptr [edi + 8], ebx
// 0059ad49  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0059ad4c  8b08                 mov ecx, dword ptr [eax]
// 0059ad4e  83c404               add esp, 4
// 0059ad51  8d7e28               lea edi, [esi + 0x28]
// 0059ad54  50                   push eax
// 0059ad55  57                   push edi
// 0059ad56  51                   push ecx
// 0059ad57  57                   push edi
// 0059ad58  8d442424             lea eax, [esp + 0x24]
// 0059ad5c  50                   push eax
// 0059ad5d  8bcf                 mov ecx, edi
// 0059ad5f  885c2438             mov byte ptr [esp + 0x38], bl
// 0059ad63  e8c8c60100           call 0x5b7430
// 0059ad68  8b4704               mov eax, dword ptr [edi + 4]
// 0059ad6b  50                   push eax
// 0059ad6c  e8f14e0900           call 0x62fc62
// 0059ad71  83c404               add esp, 4
// 0059ad74  8bce                 mov ecx, esi
// 0059ad76  895f04               mov dword ptr [edi + 4], ebx
// 0059ad79  895f08               mov dword ptr [edi + 8], ebx
// 0059ad7c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0059ad84  e8f7c4feff           call 0x587280
// 0059ad89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059ad8d  5f                   pop edi
// 0059ad8e  5e                   pop esi
// 0059ad8f  5d                   pop ebp
// 0059ad90  5b                   pop ebx
// 0059ad91  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ad98  83c418               add esp, 0x18
// 0059ad9b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
