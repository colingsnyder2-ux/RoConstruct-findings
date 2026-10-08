// roc 2007-03 0057ded0  unit: seg_00570000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ded0
//
// 0057ded0  6aff                 push -1
// 0057ded2  68e8457500           push 0x7545e8
// 0057ded7  64a100000000         mov eax, dword ptr fs:[0]
// 0057dedd  50                   push eax
// 0057dede  64892500000000       mov dword ptr fs:[0], esp
// 0057dee5  83ec14               sub esp, 0x14
// 0057dee8  56                   push esi
// 0057dee9  57                   push edi
// 0057deea  8bf9                 mov edi, ecx
// 0057deec  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0057deef  85c9                 test ecx, ecx
// 0057def1  8b4734               mov eax, dword ptr [edi + 0x34]
// 0057def4  89442408             mov dword ptr [esp + 8], eax
// 0057def8  7409                 je 0x57df03
// 0057defa  8b11                 mov edx, dword ptr [ecx]
// 0057defc  8b4208               mov eax, dword ptr [edx + 8]
// 0057deff  ffd0                 call eax
// 0057df01  eb02                 jmp 0x57df05
// 0057df03  33c0                 xor eax, eax
// 0057df05  8944240c             mov dword ptr [esp + 0xc], eax
// 0057df09  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057df0d  8b16                 mov edx, dword ptr [esi]
// 0057df0f  8b5204               mov edx, dword ptr [edx + 4]
// 0057df12  8d442408             lea eax, [esp + 8]
// 0057df16  50                   push eax
// 0057df17  6a01                 push 1
// 0057df19  8bce                 mov ecx, esi
// 0057df1b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057df23  ffd2                 call edx
// 0057df25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057df29  6a00                 push 0
// 0057df2b  6814058a00           push 0x8a0514
// 0057df30  68d4118800           push 0x8811d4
// 0057df35  6a00                 push 0
// 0057df37  50                   push eax
// 0057df38  e889120a00           call 0x61f1c6
// 0057df3d  83c414               add esp, 0x14
// 0057df40  85c0                 test eax, eax
// 0057df42  751e                 jne 0x57df62
// 0057df44  68ac5e7800           push 0x785eac
// 0057df49  8d4c2414             lea ecx, [esp + 0x14]
// 0057df4d  ff1580e97700         call dword ptr [0x77e980]
// 0057df53  68c0218400           push 0x8421c0
// 0057df58  8d4c2414             lea ecx, [esp + 0x14]
// 0057df5c  51                   push ecx
// 0057df5d  e8cc100a00           call 0x61f02e
// 0057df62  8d542408             lea edx, [esp + 8]
// 0057df66  52                   push edx
// 0057df67  83c604               add esi, 4
// 0057df6a  56                   push esi
// 0057df6b  50                   push eax
// 0057df6c  8bcf                 mov ecx, edi
// 0057df6e  e87dfeffff           call 0x57ddf0
// 0057df73  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057df77  85c9                 test ecx, ecx
// 0057df79  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0057df81  7408                 je 0x57df8b
// 0057df83  8b01                 mov eax, dword ptr [ecx]
// 0057df85  8b10                 mov edx, dword ptr [eax]
// 0057df87  6a01                 push 1
// 0057df89  ffd2                 call edx
// 0057df8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057df8f  5f                   pop edi
// 0057df90  5e                   pop esi
// 0057df91  64890d00000000       mov dword ptr fs:[0], ecx
// 0057df98  83c420               add esp, 0x20
// 0057df9b  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?execute@?$BoundFuncDesc@VWorkspace@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
