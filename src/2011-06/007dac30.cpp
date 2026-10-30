// from server: 100% by auto
// roc 2011-06 007dac30  unit: seg_007d0000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dac30
//
// 007dac30  53                   push ebx
// 007dac31  55                   push ebp
// 007dac32  56                   push esi
// 007dac33  8b742418             mov esi, dword ptr [esp + 0x18]
// 007dac37  57                   push edi
// 007dac38  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007dac3c  8b4720               mov eax, dword ptr [edi + 0x20]
// 007dac3f  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007dac43  7406                 je 0x7dac4b
// 007dac45  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007dac49  7402                 je 0x7dac4d
// 007dac4b  33c0                 xor eax, eax
// 007dac4d  e8cefcffff           call 0x7da920
// 007dac52  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dac56  8b473c               mov eax, dword ptr [edi + 0x3c]
// 007dac59  89442414             mov dword ptr [esp + 0x14], eax
// 007dac5d  7519                 jne 0x7dac78
// 007dac5f  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dac62  8b06                 mov eax, dword ptr [esi]
// 007dac64  51                   push ecx
// 007dac65  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dac68  6a04                 push 4
// 007dac6a  8d54241c             lea edx, [esp + 0x1c]
// 007dac6e  52                   push edx
// 007dac6f  50                   push eax
// 007dac70  ffd1                 call ecx
// 007dac72  83c410               add esp, 0x10
// 007dac75  894610               mov dword ptr [esi + 0x10], eax
// 007dac78  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dac7c  8b5740               mov edx, dword ptr [edi + 0x40]
// 007dac7f  89542414             mov dword ptr [esp + 0x14], edx
// 007dac83  7519                 jne 0x7dac9e
// 007dac85  8b4608               mov eax, dword ptr [esi + 8]
// 007dac88  8b16                 mov edx, dword ptr [esi]
// 007dac8a  50                   push eax
// 007dac8b  8b4604               mov eax, dword ptr [esi + 4]
// 007dac8e  6a04                 push 4
// 007dac90  8d4c241c             lea ecx, [esp + 0x1c]
// 007dac94  51                   push ecx
// 007dac95  52                   push edx
// 007dac96  ffd0                 call eax
// 007dac98  83c410               add esp, 0x10
// 007dac9b  894610               mov dword ptr [esi + 0x10], eax
// 007dac9e  837e1000             cmp dword ptr [esi + 0x10], 0
// 007daca2  8a4f48               mov cl, byte ptr [edi + 0x48]
// 007daca5  884c2414             mov byte ptr [esp + 0x14], cl
// 007daca9  7519                 jne 0x7dacc4
// 007dacab  8b5608               mov edx, dword ptr [esi + 8]
// 007dacae  8b0e                 mov ecx, dword ptr [esi]
// 007dacb0  52                   push edx
// 007dacb1  8b5604               mov edx, dword ptr [esi + 4]
// 007dacb4  6a01                 push 1
// 007dacb6  8d44241c             lea eax, [esp + 0x1c]
// 007dacba  50                   push eax
// 007dacbb  51                   push ecx
// 007dacbc  ffd2                 call edx
// 007dacbe  83c410               add esp, 0x10
// 007dacc1  894610               mov dword ptr [esi + 0x10], eax
// 007dacc4  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dacc8  8a4749               mov al, byte ptr [edi + 0x49]
// 007daccb  88442414             mov byte ptr [esp + 0x14], al
// 007daccf  7519                 jne 0x7dacea
// 007dacd1  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dacd4  8b06                 mov eax, dword ptr [esi]
// 007dacd6  51                   push ecx
// 007dacd7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dacda  6a01                 push 1
// 007dacdc  8d54241c             lea edx, [esp + 0x1c]
// 007dace0  52                   push edx
// 007dace1  50                   push eax
// 007dace2  ffd1                 call ecx
// 007dace4  83c410               add esp, 0x10
// 007dace7  894610               mov dword ptr [esi + 0x10], eax
// 007dacea  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dacee  8a574a               mov dl, byte ptr [edi + 0x4a]
// 007dacf1  88542414             mov byte ptr [esp + 0x14], dl
// 007dacf5  7519                 jne 0x7dad10
// 007dacf7  8b4608               mov eax, dword ptr [esi + 8]
// 007dacfa  8b16                 mov edx, dword ptr [esi]
// 007dacfc  50                   push eax
// 007dacfd  8b4604               mov eax, dword ptr [esi + 4]
// 007dad00  6a01                 push 1
// 007dad02  8d4c241c             lea ecx, [esp + 0x1c]
// 007dad06  51                   push ecx
// 007dad07  52                   push edx
// 007dad08  ffd0                 call eax
// 007dad0a  83c410               add esp, 0x10
// 007dad0d  894610               mov dword ptr [esi + 0x10], eax
// 007dad10  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dad14  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 007dad17  884c2414             mov byte ptr [esp + 0x14], cl
// 007dad1b  7519                 jne 0x7dad36
// 007dad1d  8b5608               mov edx, dword ptr [esi + 8]
// 007dad20  8b0e                 mov ecx, dword ptr [esi]
// 007dad22  52                   push edx
// 007dad23  8b5604               mov edx, dword ptr [esi + 4]
// 007dad26  6a01                 push 1
// 007dad28  8d44241c             lea eax, [esp + 0x1c]
// 007dad2c  50                   push eax
// 007dad2d  51                   push ecx
// 007dad2e  ffd2                 call edx
// 007dad30  83c410               add esp, 0x10
// 007dad33  894610               mov dword ptr [esi + 0x10], eax
// 007dad36  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dad3a  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 007dad3d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007dad40  895c2414             mov dword ptr [esp + 0x14], ebx
// 007dad44  7538                 jne 0x7dad7e
// 007dad46  8b4608               mov eax, dword ptr [esi + 8]
// 007dad49  8b16                 mov edx, dword ptr [esi]
// 007dad4b  50                   push eax
// 007dad4c  8b4604               mov eax, dword ptr [esi + 4]
// 007dad4f  6a04                 push 4
// 007dad51  8d4c241c             lea ecx, [esp + 0x1c]
// 007dad55  51                   push ecx
// 007dad56  52                   push edx
// 007dad57  ffd0                 call eax
// 007dad59  83c410               add esp, 0x10
// 007dad5c  894610               mov dword ptr [esi + 0x10], eax
// 007dad5f  85c0                 test eax, eax
// 007dad61  751b                 jne 0x7dad7e
// 007dad63  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dad66  8b06                 mov eax, dword ptr [esi]
// 007dad68  51                   push ecx
// 007dad69  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dad6c  8d149d00000000       lea edx, [ebx*4]
// 007dad73  52                   push edx
// 007dad74  55                   push ebp
// 007dad75  50                   push eax
// 007dad76  ffd1                 call ecx
// 007dad78  83c410               add esp, 0x10
// 007dad7b  894610               mov dword ptr [esi + 0x10], eax
// 007dad7e  57                   push edi
// 007dad7f  8bc6                 mov eax, esi
// 007dad81  e81afcffff           call 0x7da9a0
// 007dad86  57                   push edi
// 007dad87  8bc6                 mov eax, esi
// 007dad89  e852fdffff           call 0x7daae0
// 007dad8e  83c408               add esp, 8
// 007dad91  5f                   pop edi
// 007dad92  5e                   pop esi
// 007dad93  5d                   pop ebp
// 007dad94  5b                   pop ebx
// 007dad95  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
