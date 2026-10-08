// roc 2007-03 004edc20  unit: seg_004e0000  size: 954 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004edc20
//
// 004edc20  83ec14               sub esp, 0x14
// 004edc23  53                   push ebx
// 004edc24  55                   push ebp
// 004edc25  56                   push esi
// 004edc26  8b742424             mov esi, dword ptr [esp + 0x24]
// 004edc2a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004edc2d  57                   push edi
// 004edc2e  8bf9                 mov edi, ecx
// 004edc30  33db                 xor ebx, ebx
// 004edc32  8d8fb8010000         lea ecx, [edi + 0x1b8]
// 004edc38  89442420             mov dword ptr [esp + 0x20], eax
// 004edc3c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004edc40  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004edc44  895c2418             mov dword ptr [esp + 0x18], ebx
// 004edc48  e823f50000           call 0x4fd170
// 004edc4d  53                   push ebx
// 004edc4e  8bce                 mov ecx, esi
// 004edc50  e8ab60f8ff           call 0x473d00
// 004edc55  53                   push ebx
// 004edc56  8bce                 mov ecx, esi
// 004edc58  e8f35cf8ff           call 0x473950
// 004edc5d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004edc61  55                   push ebp
// 004edc62  8bce                 mov ecx, esi
// 004edc64  e8079ff8ff           call 0x477b70
// 004edc69  385f70               cmp byte ptr [edi + 0x70], bl
// 004edc6c  740d                 je 0x4edc7b
// 004edc6e  56                   push esi
// 004edc6f  e88c440000           call 0x4f2100
// 004edc74  8bc8                 mov ecx, eax
// 004edc76  e8b5220700           call 0x55ff30
// 004edc7b  8d8ff0020000         lea ecx, [edi + 0x2f0]
// 004edc81  51                   push ecx
// 004edc82  8bce                 mov ecx, esi
// 004edc84  e8375df8ff           call 0x4739c0
// 004edc89  399fec020000         cmp dword ptr [edi + 0x2ec], ebx
// 004edc8f  7409                 je 0x4edc9a
// 004edc91  385f6f               cmp byte ptr [edi + 0x6f], bl
// 004edc94  7404                 je 0x4edc9a
// 004edc96  32c0                 xor al, al
// 004edc98  eb05                 jmp 0x4edc9f
// 004edc9a  b801000000           mov eax, 1
// 004edc9f  bb01000000           mov ebx, 1
// 004edca4  53                   push ebx
// 004edca5  53                   push ebx
// 004edca6  50                   push eax
// 004edca7  8bce                 mov ecx, esi
// 004edca9  e8b2bbf8ff           call 0x479860
// 004edcae  8b8fec020000         mov ecx, dword ptr [edi + 0x2ec]
// 004edcb4  85c9                 test ecx, ecx
// 004edcb6  7413                 je 0x4edccb
// 004edcb8  807f6f00             cmp byte ptr [edi + 0x6f], 0
// 004edcbc  740d                 je 0x4edccb
// 004edcbe  8d97f8030000         lea edx, [edi + 0x3f8]
// 004edcc4  52                   push edx
// 004edcc5  56                   push esi
// 004edcc6  e855872400           call 0x736420
// 004edccb  55                   push ebp
// 004edccc  56                   push esi
// 004edccd  8bcf                 mov ecx, edi
// 004edccf  e88cfeffff           call 0x4edb60
// 004edcd4  015e78               add dword ptr [esi + 0x78], ebx
// 004edcd7  399e4c040000         cmp dword ptr [esi + 0x44c], ebx
// 004edcdd  7414                 je 0x4edcf3
// 004edcdf  68011d0000           push 0x1d01
// 004edce4  899e4c040000         mov dword ptr [esi + 0x44c], ebx
// 004edcea  ff15b8eb7700         call dword ptr [0x77ebb8]
// 004edcf0  015e70               add dword ptr [esi + 0x70], ebx
// 004edcf3  6a03                 push 3
// 004edcf5  8bce                 mov ecx, esi
// 004edcf7  e8d45df8ff           call 0x473ad0
// 004edcfc  dd05a09b7800         fld qword ptr [0x789ba0]
// 004edd02  83ec08               sub esp, 8
// 004edd05  dd1c24               fstp qword ptr [esp]
// 004edd08  6a00                 push 0
// 004edd0a  8bce                 mov ecx, esi
// 004edd0c  e8bf60f8ff           call 0x473dd0
// 004edd11  8bce                 mov ecx, esi
// 004edd13  e8c8baf8ff           call 0x4797e0
// 004edd18  0fb6476e             movzx eax, byte ptr [edi + 0x6e]
// 004edd1c  50                   push eax
// 004edd1d  56                   push esi
// 004edd1e  8bcf                 mov ecx, edi
// 004edd20  e8cbd5ffff           call 0x4eb2f0
// 004edd25  6a00                 push 0
// 004edd27  53                   push ebx
// 004edd28  56                   push esi
// 004edd29  e8a2b7ffff           call 0x4e94d0
// 004edd2e  83c40c               add esp, 0xc
// 004edd31  80bfe802000000       cmp byte ptr [edi + 0x2e8], 0
// 004edd38  7514                 jne 0x4edd4e
// 004edd3a  8b6e3c               mov ebp, dword ptr [esi + 0x3c]
// 004edd3d  56                   push esi
// 004edd3e  8bcf                 mov ecx, edi
// 004edd40  e87bd8ffff           call 0x4eb5c0
// 004edd45  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004edd48  2bc5                 sub eax, ebp
// 004edd4a  8944241c             mov dword ptr [esp + 0x1c], eax
// 004edd4e  56                   push esi
// 004edd4f  e81c99ffff           call 0x4e7670
// 004edd54  83c404               add esp, 4
// 004edd57  8bce                 mov ecx, esi
// 004edd59  e8c2baf8ff           call 0x479820
// 004edd5e  807f6c00             cmp byte ptr [edi + 0x6c], 0
// 004edd62  0f843b010000         je 0x4edea3
// 004edd68  8bce                 mov ecx, esi
// 004edd6a  e871baf8ff           call 0x4797e0
// 004edd6f  015e78               add dword ptr [esi + 0x78], ebx
// 004edd72  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004edd79  7412                 je 0x4edd8d
// 004edd7b  015e70               add dword ptr [esi + 0x70], ebx
// 004edd7e  6a00                 push 0
// 004edd80  ff15b4eb7700         call dword ptr [0x77ebb4]
// 004edd86  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 004edd8d  6a03                 push 3
// 004edd8f  8bce                 mov ecx, esi
// 004edd91  e83a5df8ff           call 0x473ad0
// 004edd96  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 004edd9c  33c0                 xor eax, eax
// 004edd9e  394150               cmp dword ptr [ecx + 0x50], eax
// 004edda1  89442428             mov dword ptr [esp + 0x28], eax
// 004edda5  0f8eef000000         jle 0x4ede9a
// 004eddab  89442410             mov dword ptr [esp + 0x10], eax
// 004eddaf  90                   nop 
// 004eddb0  837c242800           cmp dword ptr [esp + 0x28], 0
// 004eddb5  7e0c                 jle 0x4eddc3
// 004eddb7  53                   push ebx
// 004eddb8  6a00                 push 0
// 004eddba  6a00                 push 0
// 004eddbc  8bce                 mov ecx, esi
// 004eddbe  e89dbaf8ff           call 0x479860
// 004eddc3  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 004eddc9  8b6a4c               mov ebp, dword ptr [edx + 0x4c]
// 004eddcc  036c2410             add ebp, dword ptr [esp + 0x10]
// 004eddd0  807f6d00             cmp byte ptr [edi + 0x6d], 0
// 004eddd4  7420                 je 0x4eddf6
// 004eddd6  6a02                 push 2
// 004eddd8  6a02                 push 2
// 004eddda  6a02                 push 2
// 004edddc  8bce                 mov ecx, esi
// 004eddde  e88d64f8ff           call 0x474270
// 004edde3  8bce                 mov ecx, esi
// 004edde5  e88667f8ff           call 0x474570
// 004eddea  55                   push ebp
// 004eddeb  6a00                 push 0
// 004edded  8bce                 mov ecx, esi
// 004eddef  e88c7bf8ff           call 0x475980
// 004eddf4  eb09                 jmp 0x4eddff
// 004eddf6  53                   push ebx
// 004eddf7  56                   push esi
// 004eddf8  8bcf                 mov ecx, edi
// 004eddfa  e8f1d4ffff           call 0x4eb2f0
// 004eddff  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ede03  8b5e3c               mov ebx, dword ptr [esi + 0x3c]
// 004ede06  55                   push ebp
// 004ede07  50                   push eax
// 004ede08  56                   push esi
// 004ede09  8bcf                 mov ecx, edi
// 004ede0b  e860f2ffff           call 0x4ed070
// 004ede10  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004ede13  2bcb                 sub ecx, ebx
// 004ede15  014c2414             add dword ptr [esp + 0x14], ecx
// 004ede19  80bfe802000000       cmp byte ptr [edi + 0x2e8], 0
// 004ede20  7554                 jne 0x4ede76
// 004ede22  6a00                 push 0
// 004ede24  8bce                 mov ecx, esi
// 004ede26  e8d55ef8ff           call 0x473d00
// 004ede2b  6a03                 push 3
// 004ede2d  8bce                 mov ecx, esi
// 004ede2f  e89c5cf8ff           call 0x473ad0
// 004ede34  d9ee                 fldz 
// 004ede36  8b6e3c               mov ebp, dword ptr [esi + 0x3c]
// 004ede39  83ec08               sub esp, 8
// 004ede3c  8bce                 mov ecx, esi
// 004ede3e  dd1c24               fstp qword ptr [esp]
// 004ede41  e8ba6cf8ff           call 0x474b00
// 004ede46  6a05                 push 5
// 004ede48  8bce                 mov ecx, esi
// 004ede4a  e8e15ef8ff           call 0x473d30
// 004ede4f  6a00                 push 0
// 004ede51  6a01                 push 1
// 004ede53  56                   push esi
// 004ede54  e877b6ffff           call 0x4e94d0
// 004ede59  83c40c               add esp, 0xc
// 004ede5c  56                   push esi
// 004ede5d  8bcf                 mov ecx, edi
// 004ede5f  e85cd7ffff           call 0x4eb5c0
// 004ede64  56                   push esi
// 004ede65  e80698ffff           call 0x4e7670
// 004ede6a  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004ede6d  2bd5                 sub edx, ebp
// 004ede6f  83c404               add esp, 4
// 004ede72  01542418             add dword ptr [esp + 0x18], edx
// 004ede76  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ede7a  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 004ede80  8344241050           add dword ptr [esp + 0x10], 0x50
// 004ede85  83c001               add eax, 1
// 004ede88  3b4150               cmp eax, dword ptr [ecx + 0x50]
// 004ede8b  89442428             mov dword ptr [esp + 0x28], eax
// 004ede8f  bb01000000           mov ebx, 1
// 004ede94  0f8c16ffffff         jl 0x4eddb0
// 004ede9a  8bce                 mov ecx, esi
// 004ede9c  e87fb9f8ff           call 0x479820
// 004edea1  eb14                 jmp 0x4edeb7
// 004edea3  8daf10020000         lea ebp, [edi + 0x210]
// 004edea9  8bcd                 mov ecx, ebp
// 004edeab  e8c0f20000           call 0x4fd170
// 004edeb0  8bcd                 mov ecx, ebp
// 004edeb2  e8c9f30000           call 0x4fd280
// 004edeb7  8bce                 mov ecx, esi
// 004edeb9  e822b9f8ff           call 0x4797e0
// 004edebe  6a00                 push 0
// 004edec0  53                   push ebx
// 004edec1  56                   push esi
// 004edec2  e809b6ffff           call 0x4e94d0
// 004edec7  83c40c               add esp, 0xc
// 004edeca  56                   push esi
// 004edecb  8bcf                 mov ecx, edi
// 004edecd  e81eddffff           call 0x4ebbf0
// 004eded2  56                   push esi
// 004eded3  e89897ffff           call 0x4e7670
// 004eded8  83c404               add esp, 4
// 004ededb  8bce                 mov ecx, esi
// 004ededd  e83eb9f8ff           call 0x479820
// 004edee2  8bce                 mov ecx, esi
// 004edee4  e8f7b8f8ff           call 0x4797e0
// 004edee9  53                   push ebx
// 004edeea  56                   push esi
// 004edeeb  8bcf                 mov ecx, edi
// 004edeed  e8fed3ffff           call 0x4eb2f0
// 004edef2  6a00                 push 0
// 004edef4  53                   push ebx
// 004edef5  56                   push esi
// 004edef6  e8d5b5ffff           call 0x4e94d0
// 004edefb  83c40c               add esp, 0xc
// 004edefe  56                   push esi
// 004edeff  8bcf                 mov ecx, edi
// 004edf01  e82ad7ffff           call 0x4eb630
// 004edf06  56                   push esi
// 004edf07  e86497ffff           call 0x4e7670
// 004edf0c  83c404               add esp, 4
// 004edf0f  8bce                 mov ecx, esi
// 004edf11  e80ab9f8ff           call 0x479820
// 004edf16  8b8fec020000         mov ecx, dword ptr [edi + 0x2ec]
// 004edf1c  85c9                 test ecx, ecx
// 004edf1e  7413                 je 0x4edf33
// 004edf20  807f6f00             cmp byte ptr [edi + 0x6f], 0
// 004edf24  740d                 je 0x4edf33
// 004edf26  8d97f8030000         lea edx, [edi + 0x3f8]
// 004edf2c  52                   push edx
// 004edf2d  56                   push esi
// 004edf2e  e87d7a2400           call 0x7359b0
// 004edf33  807f7200             cmp byte ptr [edi + 0x72], 0
// 004edf37  740d                 je 0x4edf46
// 004edf39  56                   push esi
// 004edf3a  e851420000           call 0x4f2190
// 004edf3f  8bc8                 mov ecx, eax
// 004edf41  e8ca4a0000           call 0x4f2a10
// 004edf46  807f7000             cmp byte ptr [edi + 0x70], 0
// 004edf4a  740d                 je 0x4edf59
// 004edf4c  56                   push esi
// 004edf4d  e8ae410000           call 0x4f2100
// 004edf52  8bc8                 mov ecx, eax
// 004edf54  e8f75e2400           call 0x733e50
// 004edf59  8d8fb8010000         lea ecx, [edi + 0x1b8]
// 004edf5f  e81cf30000           call 0x4fd280
// 004edf64  8bce                 mov ecx, esi
// 004edf66  e8a570f8ff           call 0x475010
// 004edf6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004edf6f  8b542418             mov edx, dword ptr [esp + 0x18]
// 004edf73  8987d4020000         mov dword ptr [edi + 0x2d4], eax
// 004edf79  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004edf7c  2b442420             sub eax, dword ptr [esp + 0x20]
// 004edf80  898fdc020000         mov dword ptr [edi + 0x2dc], ecx
// 004edf86  8987d8020000         mov dword ptr [edi + 0x2d8], eax
// 004edf8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004edf90  8bce                 mov ecx, esi
// 004edf92  8997e0020000         mov dword ptr [edi + 0x2e0], edx
// 004edf98  8987e4020000         mov dword ptr [edi + 0x2e4], eax
// 004edf9e  e88dcb0800           call 0x57ab30
// 004edfa3  8bce                 mov ecx, esi
// 004edfa5  8987c4020000         mov dword ptr [edi + 0x2c4], eax
// 004edfab  e87070f8ff           call 0x475020
// 004edfb0  8bce                 mov ecx, esi
// 004edfb2  8987cc020000         mov dword ptr [edi + 0x2cc], eax
// 004edfb8  e87370f8ff           call 0x475030
// 004edfbd  8bce                 mov ecx, esi
// 004edfbf  8987c0020000         mov dword ptr [edi + 0x2c0], eax
// 004edfc5  e87670f8ff           call 0x475040
// 004edfca  8987c8020000         mov dword ptr [edi + 0x2c8], eax
// 004edfd0  5f                   pop edi
// 004edfd1  5e                   pop esi
// 004edfd2  5d                   pop ebp
// 004edfd3  5b                   pop ebx
// 004edfd4  83c414               add esp, 0x14
// 004edfd7  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?render@RenderScene@Render@RBX@@QAEXPAVRenderDevice@G3D@@ABVGCamera@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
