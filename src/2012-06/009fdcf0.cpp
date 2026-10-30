// roc 2012-06 009fdcf0  unit: CXTPControlGallery  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fdcf0
//
// 009fdcf0  83ec10               sub esp, 0x10
// 009fdcf3  53                   push ebx
// 009fdcf4  56                   push esi
// 009fdcf5  57                   push edi
// 009fdcf6  8bf9                 mov edi, ecx
// 009fdcf8  837f6800             cmp dword ptr [edi + 0x68], 0
// 009fdcfc  7408                 je 0x9fdd06
// 009fdcfe  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 009fdd04  eb06                 jmp 0x9fdd0c
// 009fdd06  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 009fdd0c  8d44240c             lea eax, [esp + 0xc]
// 009fdd10  8d9f7cfeffff         lea ebx, [edi - 0x184]
// 009fdd16  50                   push eax
// 009fdd17  8bcb                 mov ecx, ebx
// 009fdd19  e8d2cfffff           call 0x9facf0
// 009fdd1e  8bcb                 mov ecx, ebx
// 009fdd20  e8dbbeffff           call 0x9f9c00
// 009fdd25  85c0                 test eax, eax
// 009fdd27  0f848a000000         je 0x9fddb7
// 009fdd2d  55                   push ebp
// 009fdd2e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 009fdd32  83fd07               cmp ebp, 7
// 009fdd35  7747                 ja 0x9fdd7e
// 009fdd37  ff24adc0dd9f00       jmp dword ptr [ebp*4 + 0x9fddc0]
// 009fdd3e  33f6                 xor esi, esi
// 009fdd40  eb3c                 jmp 0x9fdd7e
// 009fdd42  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 009fdd48  eb34                 jmp 0x9fdd7e
// 009fdd4a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009fdd4d  2b7024               sub esi, dword ptr [eax + 0x24]
// 009fdd50  894c2410             mov dword ptr [esp + 0x10], ecx
// 009fdd54  eb28                 jmp 0x9fdd7e
// 009fdd56  8b5020               mov edx, dword ptr [eax + 0x20]
// 009fdd59  037024               add esi, dword ptr [eax + 0x24]
// 009fdd5c  89542410             mov dword ptr [esp + 0x10], edx
// 009fdd60  eb1c                 jmp 0x9fdd7e
// 009fdd62  8b442414             mov eax, dword ptr [esp + 0x14]
// 009fdd66  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 009fdd6a  03f0                 add esi, eax
// 009fdd6c  eb10                 jmp 0x9fdd7e
// 009fdd6e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009fdd72  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 009fdd76  03f1                 add esi, ecx
// 009fdd78  eb04                 jmp 0x9fdd7e
// 009fdd7a  8b742428             mov esi, dword ptr [esp + 0x28]
// 009fdd7e  8b13                 mov edx, dword ptr [ebx]
// 009fdd80  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 009fdd86  8bcb                 mov ecx, ebx
// 009fdd88  ffd0                 call eax
// 009fdd8a  85c0                 test eax, eax
// 009fdd8c  7420                 je 0x9fddae
// 009fdd8e  85ed                 test ebp, ebp
// 009fdd90  740a                 je 0x9fdd9c
// 009fdd92  83fd01               cmp ebp, 1
// 009fdd95  7405                 je 0x9fdd9c
// 009fdd97  83fd08               cmp ebp, 8
// 009fdd9a  7512                 jne 0x9fddae
// 009fdd9c  56                   push esi
// 009fdd9d  8bcb                 mov ecx, ebx
// 009fdd9f  e8accfffff           call 0x9fad50
// 009fdda4  5d                   pop ebp
// 009fdda5  5f                   pop edi
// 009fdda6  5e                   pop esi
// 009fdda7  5b                   pop ebx
// 009fdda8  83c410               add esp, 0x10
// 009fddab  c20800               ret 8
// 009fddae  56                   push esi
// 009fddaf  8bcb                 mov ecx, ebx
// 009fddb1  e8daf6ffff           call 0x9fd490
// 009fddb6  5d                   pop ebp
// 009fddb7  5f                   pop edi
// 009fddb8  5e                   pop esi
// 009fddb9  5b                   pop ebx
// 009fddba  83c410               add esp, 0x10
// 009fddbd  c20800               ret 8
// 009fddc0  4a                   dec edx
// 009fddc1  dd9f0056dd9f         fstp qword ptr [edi - 0x6022aa00]
// 009fddc7  0062dd               add byte ptr [edx - 0x23], ah
// 009fddca  9f                   lahf 
// 009fddcb  006edd               add byte ptr [esi - 0x23], ch
// 009fddce  9f                   lahf 
// 009fddcf  007edd               add byte ptr [esi - 0x23], bh
// 009fddd2  9f                   lahf 
// 009fddd3  007add               add byte ptr [edx - 0x23], bh
// 009fddd6  9f                   lahf 
// 009fddd7  003e                 add byte ptr [esi], bh
// 009fddd9  dd9f0042dd9f         fstp qword ptr [edi - 0x6022be00]
// copied from an identical function in another client (function ?DoScroll@CXTPControlGallery@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp