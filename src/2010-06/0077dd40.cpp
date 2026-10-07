// roc 2010-06 0077dd40  unit: RBX::PartDropTool  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077dd40
//
// 0077dd40  55                   push ebp
// 0077dd41  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077dd45  8d4701               lea eax, [edi + 1]
// 0077dd48  56                   push esi
// 0077dd49  83f8ed               cmp eax, -0x13
// 0077dd4c  7609                 jbe 0x77dd57
// 0077dd4e  53                   push ebx
// 0077dd4f  e88c0c0000           call 0x77e9e0
// 0077dd54  83c404               add esp, 4
// 0077dd57  8d4f11               lea ecx, [edi + 0x11]
// 0077dd5a  51                   push ecx
// 0077dd5b  6a00                 push 0
// 0077dd5d  6a00                 push 0
// 0077dd5f  53                   push ebx
// 0077dd60  e89b0c0000           call 0x77ea00
// 0077dd65  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077dd69  8bf0                 mov esi, eax
// 0077dd6b  897e0c               mov dword ptr [esi + 0xc], edi
// 0077dd6e  896e08               mov dword ptr [esi + 8], ebp
// 0077dd71  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0077dd74  8a4214               mov al, byte ptr [edx + 0x14]
// 0077dd77  57                   push edi
// 0077dd78  51                   push ecx
// 0077dd79  8d5610               lea edx, [esi + 0x10]
// 0077dd7c  2403                 and al, 3
// 0077dd7e  52                   push edx
// 0077dd7f  884605               mov byte ptr [esi + 5], al
// 0077dd82  c6460404             mov byte ptr [esi + 4], 4
// 0077dd86  c6460600             mov byte ptr [esi + 6], 0
// 0077dd8a  e897b00200           call 0x7a8e26
// 0077dd8f  c6443e1000           mov byte ptr [esi + edi + 0x10], 0
// 0077dd94  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0077dd97  8b4808               mov ecx, dword ptr [eax + 8]
// 0077dd9a  8b10                 mov edx, dword ptr [eax]
// 0077dd9c  49                   dec ecx
// 0077dd9d  23e9                 and ebp, ecx
// 0077dd9f  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 0077dda2  890e                 mov dword ptr [esi], ecx
// 0077dda4  8b10                 mov edx, dword ptr [eax]
// 0077dda6  8934aa               mov dword ptr [edx + ebp*4], esi
// 0077dda9  ff4004               inc dword ptr [eax + 4]
// 0077ddac  8b4804               mov ecx, dword ptr [eax + 4]
// 0077ddaf  8b4008               mov eax, dword ptr [eax + 8]
// 0077ddb2  83c41c               add esp, 0x1c
// 0077ddb5  3bc8                 cmp ecx, eax
// 0077ddb7  7613                 jbe 0x77ddcc
// 0077ddb9  3dfeffff3f           cmp eax, 0x3ffffffe
// 0077ddbe  7f0c                 jg 0x77ddcc
// 0077ddc0  03c0                 add eax, eax
// 0077ddc2  50                   push eax
// 0077ddc3  53                   push ebx
// 0077ddc4  e8b7feffff           call 0x77dc80
// 0077ddc9  83c408               add esp, 8
// 0077ddcc  8bc6                 mov eax, esi
// 0077ddce  5e                   pop esi
// 0077ddcf  5d                   pop ebp
// 0077ddd0  c3                   ret 
// library lua-5.1.4/lstring.c (function _newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
