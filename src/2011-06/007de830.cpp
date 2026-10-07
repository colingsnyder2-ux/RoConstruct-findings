// roc 2011-06 007de830  unit: seg_007d0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de830
//
// 007de830  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007de834  8a01                 mov al, byte ptr [ecx]
// 007de836  83ec10               sub esp, 0x10
// 007de839  3c40                 cmp al, 0x40
// 007de83b  7412                 je 0x7de84f
// 007de83d  3c3d                 cmp al, 0x3d
// 007de83f  740e                 je 0x7de84f
// 007de841  3c1b                 cmp al, 0x1b
// 007de843  750b                 jne 0x7de850
// 007de845  c744240c0ce4ab00     mov dword ptr [esp + 0xc], 0xabe40c
// 007de84d  eb05                 jmp 0x7de854
// 007de84f  41                   inc ecx
// 007de850  894c240c             mov dword ptr [esp + 0xc], ecx
// 007de854  8b442418             mov eax, dword ptr [esp + 0x18]
// 007de858  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007de85c  56                   push esi
// 007de85d  57                   push edi
// 007de85e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007de862  8d742408             lea esi, [esp + 8]
// 007de866  897c2408             mov dword ptr [esp + 8], edi
// 007de86a  8944240c             mov dword ptr [esp + 0xc], eax
// 007de86e  894c2410             mov dword ptr [esp + 0x10], ecx
// 007de872  e8f9feffff           call 0x7de770
// 007de877  6a02                 push 2
// 007de879  6808e4ab00           push 0xabe408
// 007de87e  57                   push edi
// 007de87f  e89cb9ffff           call 0x7da220
// 007de884  50                   push eax
// 007de885  8bd6                 mov edx, esi
// 007de887  52                   push edx
// 007de888  e8a3fcffff           call 0x7de530
// 007de88d  83c414               add esp, 0x14
// 007de890  5f                   pop edi
// 007de891  5e                   pop esi
// 007de892  83c410               add esp, 0x10
// 007de895  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
