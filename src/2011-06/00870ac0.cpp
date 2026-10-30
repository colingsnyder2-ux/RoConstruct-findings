// roc 2011-06 00870ac0  unit: CXTColorDialog  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870ac0
//
// 00870ac0  6aff                 push -1
// 00870ac2  684677a000           push 0xa07746
// 00870ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00870acd  50                   push eax
// 00870ace  51                   push ecx
// 00870acf  56                   push esi
// 00870ad0  57                   push edi
// 00870ad1  a12058c900           mov eax, dword ptr [0xc95820]
// 00870ad6  33c4                 xor eax, esp
// 00870ad8  50                   push eax
// 00870ad9  8d442410             lea eax, [esp + 0x10]
// 00870add  64a300000000         mov dword ptr fs:[0], eax
// 00870ae3  8bf9                 mov edi, ecx
// 00870ae5  897c240c             mov dword ptr [esp + 0xc], edi
// 00870ae9  c707e4c6ac00         mov dword ptr [edi], 0xacc6e4
// 00870aef  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00870af7  33f6                 xor esi, esi
// 00870af9  e856c11500           call 0x9ccc54
// 00870afe  85c0                 test eax, eax
// 00870b00  7e39                 jle 0x870b3b
// 00870b02  85f6                 test esi, esi
// 00870b04  7c66                 jl 0x870b6c
// 00870b06  3bb790000000         cmp esi, dword ptr [edi + 0x90]
// 00870b0c  7d5e                 jge 0x870b6c
// 00870b0e  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00870b14  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00870b17  33c0                 xor eax, eax
// 00870b19  85c9                 test ecx, ecx
// 00870b1b  0f95c0               setne al
// 00870b1e  85c0                 test eax, eax
// 00870b20  744a                 je 0x870b6c
// 00870b22  85c9                 test ecx, ecx
// 00870b24  7409                 je 0x870b2f
// 00870b26  8b11                 mov edx, dword ptr [ecx]
// 00870b28  8b4204               mov eax, dword ptr [edx + 4]
// 00870b2b  6a01                 push 1
// 00870b2d  ffd0                 call eax
// 00870b2f  8bcf                 mov ecx, edi
// 00870b31  46                   inc esi
// 00870b32  e81dc11500           call 0x9ccc54
// 00870b37  3bf0                 cmp esi, eax
// 00870b39  7cc7                 jl 0x870b02
// 00870b3b  8d8fb0000000         lea ecx, [edi + 0xb0]
// 00870b41  c644241800           mov byte ptr [esp + 0x18], 0
// 00870b46  e8afba1500           call 0x9cc5fa
// 00870b4b  8bcf                 mov ecx, edi
// 00870b4d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00870b55  e8c4c01500           call 0x9ccc1e
// 00870b5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00870b5e  64890d00000000       mov dword ptr fs:[0], ecx
// 00870b65  59                   pop ecx
// 00870b66  5f                   pop edi
// 00870b67  5e                   pop esi
// 00870b68  83c410               add esp, 0x10
// 00870b6b  c3                   ret 
// 00870b6c  e89997f9ff           call 0x80a30a
// copied from an identical function in another client (function ??1CXTColorDialog@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp