// roc 2012-06 009e8ff0  unit: CXTColorDialog  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8ff0
//
// 009e8ff0  6aff                 push -1
// 009e8ff2  680613ae00           push 0xae1306
// 009e8ff7  64a100000000         mov eax, dword ptr fs:[0]
// 009e8ffd  50                   push eax
// 009e8ffe  51                   push ecx
// 009e8fff  56                   push esi
// 009e9000  57                   push edi
// 009e9001  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e9006  33c4                 xor eax, esp
// 009e9008  50                   push eax
// 009e9009  8d442410             lea eax, [esp + 0x10]
// 009e900d  64a300000000         mov dword ptr fs:[0], eax
// 009e9013  8bf9                 mov edi, ecx
// 009e9015  897c240c             mov dword ptr [esp + 0xc], edi
// 009e9019  c707d47dc100         mov dword ptr [edi], 0xc17dd4
// 009e901f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009e9027  33f6                 xor esi, esi
// 009e9029  e8d40b0b00           call 0xa99c02
// 009e902e  85c0                 test eax, eax
// 009e9030  7e39                 jle 0x9e906b
// 009e9032  85f6                 test esi, esi
// 009e9034  7c66                 jl 0x9e909c
// 009e9036  3bb790000000         cmp esi, dword ptr [edi + 0x90]
// 009e903c  7d5e                 jge 0x9e909c
// 009e903e  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 009e9044  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009e9047  33c0                 xor eax, eax
// 009e9049  85c9                 test ecx, ecx
// 009e904b  0f95c0               setne al
// 009e904e  85c0                 test eax, eax
// 009e9050  744a                 je 0x9e909c
// 009e9052  85c9                 test ecx, ecx
// 009e9054  7409                 je 0x9e905f
// 009e9056  8b11                 mov edx, dword ptr [ecx]
// 009e9058  8b4204               mov eax, dword ptr [edx + 4]
// 009e905b  6a01                 push 1
// 009e905d  ffd0                 call eax
// 009e905f  8bcf                 mov ecx, edi
// 009e9061  46                   inc esi
// 009e9062  e89b0b0b00           call 0xa99c02
// 009e9067  3bf0                 cmp esi, eax
// 009e9069  7cc7                 jl 0x9e9032
// 009e906b  8d8fb0000000         lea ecx, [edi + 0xb0]
// 009e9071  c644241800           mov byte ptr [esp + 0x18], 0
// 009e9076  e839050b00           call 0xa995b4
// 009e907b  8bcf                 mov ecx, edi
// 009e907d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 009e9085  e8420b0b00           call 0xa99bcc
// 009e908a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e908e  64890d00000000       mov dword ptr fs:[0], ecx
// 009e9095  59                   pop ecx
// 009e9096  5f                   pop edi
// 009e9097  5e                   pop esi
// 009e9098  83c410               add esp, 0x10
// 009e909b  c3                   ret 
// 009e909c  e81f93f9ff           call 0x9823c0
// copied from an identical function in another client (function ??1CXTColorDialog@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp