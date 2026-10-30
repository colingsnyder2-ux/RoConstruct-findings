// from server: 100% by auto
// roc 2008-06 0066ae00  unit: RBX::GroupDragTool  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ae00
//
// 0066ae00  51                   push ecx
// 0066ae01  53                   push ebx
// 0066ae02  55                   push ebp
// 0066ae03  56                   push esi
// 0066ae04  57                   push edi
// 0066ae05  8bd8                 mov ebx, eax
// 0066ae07  8b5304               mov edx, dword ptr [ebx + 4]
// 0066ae0a  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0066ae0d  51                   push ecx
// 0066ae0e  52                   push edx
// 0066ae0f  50                   push eax
// 0066ae10  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066ae14  e8373dffff           call 0x65eb50
// 0066ae19  8b3b                 mov edi, dword ptr [ebx]
// 0066ae1b  8b6f28               mov ebp, dword ptr [edi + 0x28]
// 0066ae1e  b903000000           mov ecx, 3
// 0066ae23  83c40c               add esp, 0xc
// 0066ae26  8d7728               lea esi, [edi + 0x28]
// 0066ae29  394808               cmp dword ptr [eax + 8], ecx
// 0066ae2c  750e                 jne 0x66ae3c
// 0066ae2e  dd00                 fld qword ptr [eax]
// 0066ae30  5f                   pop edi
// 0066ae31  5e                   pop esi
// 0066ae32  5d                   pop ebp
// 0066ae33  5b                   pop ebx
// 0066ae34  83c404               add esp, 4
// 0066ae37  e9b4690300           jmp 0x6a17f0
// 0066ae3c  db4328               fild dword ptr [ebx + 0x28]
// 0066ae3f  83c328               add ebx, 0x28
// 0066ae42  894808               mov dword ptr [eax + 8], ecx
// 0066ae45  dd18                 fstp qword ptr [eax]
// 0066ae47  8b03                 mov eax, dword ptr [ebx]
// 0066ae49  40                   inc eax
// 0066ae4a  3b06                 cmp eax, dword ptr [esi]
// 0066ae4c  7e21                 jle 0x66ae6f
// 0066ae4e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066ae51  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066ae55  68a4c58400           push 0x84c5a4
// 0066ae5a  68ffff0300           push 0x3ffff
// 0066ae5f  6a10                 push 0x10
// 0066ae61  56                   push esi
// 0066ae62  51                   push ecx
// 0066ae63  52                   push edx
// 0066ae64  e8d758ffff           call 0x660740
// 0066ae69  83c418               add esp, 0x18
// 0066ae6c  894708               mov dword ptr [edi + 8], eax
// 0066ae6f  3b2e                 cmp ebp, dword ptr [esi]
// 0066ae71  7d1c                 jge 0x66ae8f
// 0066ae73  8bc5                 mov eax, ebp
// 0066ae75  c1e004               shl eax, 4
// 0066ae78  33c9                 xor ecx, ecx
// 0066ae7a  8d9b00000000         lea ebx, [ebx]
// 0066ae80  8b5708               mov edx, dword ptr [edi + 8]
// 0066ae83  894c1008             mov dword ptr [eax + edx + 8], ecx
// 0066ae87  45                   inc ebp
// 0066ae88  83c010               add eax, 0x10
// 0066ae8b  3b2e                 cmp ebp, dword ptr [esi]
// 0066ae8d  7cf1                 jl 0x66ae80
// 0066ae8f  8b03                 mov eax, dword ptr [ebx]
// 0066ae91  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066ae95  8b11                 mov edx, dword ptr [ecx]
// 0066ae97  c1e004               shl eax, 4
// 0066ae9a  034708               add eax, dword ptr [edi + 8]
// 0066ae9d  8910                 mov dword ptr [eax], edx
// 0066ae9f  8b5104               mov edx, dword ptr [ecx + 4]
// 0066aea2  895004               mov dword ptr [eax + 4], edx
// 0066aea5  8b5108               mov edx, dword ptr [ecx + 8]
// 0066aea8  895008               mov dword ptr [eax + 8], edx
// 0066aeab  b804000000           mov eax, 4
// 0066aeb0  394108               cmp dword ptr [ecx + 8], eax
// 0066aeb3  7c1c                 jl 0x66aed1
// 0066aeb5  8b09                 mov ecx, dword ptr [ecx]
// 0066aeb7  f6410503             test byte ptr [ecx + 5], 3
// 0066aebb  7414                 je 0x66aed1
// 0066aebd  844705               test byte ptr [edi + 5], al
// 0066aec0  740f                 je 0x66aed1
// 0066aec2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066aec6  51                   push ecx
// 0066aec7  57                   push edi
// 0066aec8  50                   push eax
// 0066aec9  e8b215ffff           call 0x65c480
// 0066aece  83c40c               add esp, 0xc
// 0066aed1  8b03                 mov eax, dword ptr [ebx]
// 0066aed3  5f                   pop edi
// 0066aed4  5e                   pop esi
// 0066aed5  8d4801               lea ecx, [eax + 1]
// 0066aed8  5d                   pop ebp
// 0066aed9  890b                 mov dword ptr [ebx], ecx
// 0066aedb  5b                   pop ebx
// 0066aedc  59                   pop ecx
// 0066aedd  c3                   ret 
// library lua-5.1.4/lcode.c (function _addk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
