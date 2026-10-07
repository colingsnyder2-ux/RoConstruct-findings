// roc 2008-06 0066ada0  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ada0
//
// 0066ada0  53                   push ebx
// 0066ada1  56                   push esi
// 0066ada2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066ada6  8b06                 mov eax, dword ptr [esi]
// 0066ada8  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0066adab  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0066adaf  57                   push edi
// 0066adb0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066adb4  03df                 add ebx, edi
// 0066adb6  3bd9                 cmp ebx, ecx
// 0066adb8  7e1e                 jle 0x66add8
// 0066adba  81fbfa000000         cmp ebx, 0xfa
// 0066adc0  7c11                 jl 0x66add3
// 0066adc2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066adc5  6888d08400           push 0x84d088
// 0066adca  52                   push edx
// 0066adcb  e84094ffff           call 0x664210
// 0066add0  83c408               add esp, 8
// 0066add3  8b06                 mov eax, dword ptr [esi]
// 0066add5  88584b               mov byte ptr [eax + 0x4b], bl
// 0066add8  017e24               add dword ptr [esi + 0x24], edi
// 0066addb  5f                   pop edi
// 0066addc  5e                   pop esi
// 0066addd  5b                   pop ebx
// 0066adde  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
