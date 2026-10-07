// roc 2009-06 006fa660  unit: RBX::GroupDragTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa660
//
// 006fa660  55                   push ebp
// 006fa661  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006fa665  837d000c             cmp dword ptr [ebp], 0xc
// 006fa669  56                   push esi
// 006fa66a  8bf0                 mov esi, eax
// 006fa66c  7440                 je 0x6fa6ae
// 006fa66e  8b06                 mov eax, dword ptr [esi]
// 006fa670  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 006fa674  53                   push ebx
// 006fa675  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006fa678  43                   inc ebx
// 006fa679  3bd9                 cmp ebx, ecx
// 006fa67b  57                   push edi
// 006fa67c  7e1e                 jle 0x6fa69c
// 006fa67e  81fbfa000000         cmp ebx, 0xfa
// 006fa684  7c11                 jl 0x6fa697
// 006fa686  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fa689  683cea8e00           push 0x8eea3c
// 006fa68e  52                   push edx
// 006fa68f  e85c6cffff           call 0x6f12f0
// 006fa694  83c408               add esp, 8
// 006fa697  8b06                 mov eax, dword ptr [esi]
// 006fa699  88584b               mov byte ptr [eax + 0x4b], bl
// 006fa69c  ff4624               inc dword ptr [esi + 0x24]
// 006fa69f  8b4624               mov eax, dword ptr [esi + 0x24]
// 006fa6a2  8d78ff               lea edi, [eax - 1]
// 006fa6a5  8bdd                 mov ebx, ebp
// 006fa6a7  e8a4feffff           call 0x6fa550
// 006fa6ac  5f                   pop edi
// 006fa6ad  5b                   pop ebx
// 006fa6ae  5e                   pop esi
// 006fa6af  5d                   pop ebp
// 006fa6b0  c3                   ret 
// library lua-5.1.4/lcode.c (function _discharge2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
