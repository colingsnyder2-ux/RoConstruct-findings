// from server: 100% by auto
// roc 2011-06 007da9a0  unit: seg_007d0000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da9a0
//
// 007da9a0  55                   push ebp
// 007da9a1  8bec                 mov ebp, esp
// 007da9a3  83e4f8               and esp, 0xfffffff8
// 007da9a6  83ec14               sub esp, 0x14
// 007da9a9  53                   push ebx
// 007da9aa  56                   push esi
// 007da9ab  8bf0                 mov esi, eax
// 007da9ad  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da9b1  8b4508               mov eax, dword ptr [ebp + 8]
// 007da9b4  57                   push edi
// 007da9b5  8b7828               mov edi, dword ptr [eax + 0x28]
// 007da9b8  897c2414             mov dword ptr [esp + 0x14], edi
// 007da9bc  7519                 jne 0x7da9d7
// 007da9be  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da9c1  8b06                 mov eax, dword ptr [esi]
// 007da9c3  51                   push ecx
// 007da9c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 007da9c7  6a04                 push 4
// 007da9c9  8d54241c             lea edx, [esp + 0x1c]
// 007da9cd  52                   push edx
// 007da9ce  50                   push eax
// 007da9cf  ffd1                 call ecx
// 007da9d1  83c410               add esp, 0x10
// 007da9d4  894610               mov dword ptr [esi + 0x10], eax
// 007da9d7  85ff                 test edi, edi
// 007da9d9  0f8ea4000000         jle 0x7daa83
// 007da9df  33db                 xor ebx, ebx
// 007da9e1  897c2414             mov dword ptr [esp + 0x14], edi
// 007da9e5  8b5508               mov edx, dword ptr [ebp + 8]
// 007da9e8  8b7a08               mov edi, dword ptr [edx + 8]
// 007da9eb  8a441f08             mov al, byte ptr [edi + ebx + 8]
// 007da9ef  03fb                 add edi, ebx
// 007da9f1  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da9f5  88442413             mov byte ptr [esp + 0x13], al
// 007da9f9  7519                 jne 0x7daa14
// 007da9fb  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da9fe  8b06                 mov eax, dword ptr [esi]
// 007daa00  51                   push ecx
// 007daa01  8b4e04               mov ecx, dword ptr [esi + 4]
// 007daa04  6a01                 push 1
// 007daa06  8d54241b             lea edx, [esp + 0x1b]
// 007daa0a  52                   push edx
// 007daa0b  50                   push eax
// 007daa0c  ffd1                 call ecx
// 007daa0e  83c410               add esp, 0x10
// 007daa11  894610               mov dword ptr [esi + 0x10], eax
// 007daa14  8b4708               mov eax, dword ptr [edi + 8]
// 007daa17  83e801               sub eax, 1
// 007daa1a  7434                 je 0x7daa50
// 007daa1c  83e802               sub eax, 2
// 007daa1f  740e                 je 0x7daa2f
// 007daa21  83e801               sub eax, 1
// 007daa24  754f                 jne 0x7daa75
// 007daa26  8b07                 mov eax, dword ptr [edi]
// 007daa28  e8f3feffff           call 0x7da920
// 007daa2d  eb46                 jmp 0x7daa75
// 007daa2f  837e1000             cmp dword ptr [esi + 0x10], 0
// 007daa33  dd07                 fld qword ptr [edi]
// 007daa35  dd5c2418             fstp qword ptr [esp + 0x18]
// 007daa39  753a                 jne 0x7daa75
// 007daa3b  8b5608               mov edx, dword ptr [esi + 8]
// 007daa3e  8b0e                 mov ecx, dword ptr [esi]
// 007daa40  52                   push edx
// 007daa41  8b5604               mov edx, dword ptr [esi + 4]
// 007daa44  6a08                 push 8
// 007daa46  8d442420             lea eax, [esp + 0x20]
// 007daa4a  50                   push eax
// 007daa4b  51                   push ecx
// 007daa4c  ffd2                 call edx
// 007daa4e  eb1f                 jmp 0x7daa6f
// 007daa50  837e1000             cmp dword ptr [esi + 0x10], 0
// 007daa54  8a07                 mov al, byte ptr [edi]
// 007daa56  88442413             mov byte ptr [esp + 0x13], al
// 007daa5a  7519                 jne 0x7daa75
// 007daa5c  8b4e08               mov ecx, dword ptr [esi + 8]
// 007daa5f  8b06                 mov eax, dword ptr [esi]
// 007daa61  51                   push ecx
// 007daa62  8b4e04               mov ecx, dword ptr [esi + 4]
// 007daa65  6a01                 push 1
// 007daa67  8d54241b             lea edx, [esp + 0x1b]
// 007daa6b  52                   push edx
// 007daa6c  50                   push eax
// 007daa6d  ffd1                 call ecx
// 007daa6f  894610               mov dword ptr [esi + 0x10], eax
// 007daa72  83c410               add esp, 0x10
// 007daa75  83c310               add ebx, 0x10
// 007daa78  836c241401           sub dword ptr [esp + 0x14], 1
// 007daa7d  0f8562ffffff         jne 0x7da9e5
// 007daa83  837e1000             cmp dword ptr [esi + 0x10], 0
// 007daa87  8b5508               mov edx, dword ptr [ebp + 8]
// 007daa8a  8b5a34               mov ebx, dword ptr [edx + 0x34]
// 007daa8d  895c2414             mov dword ptr [esp + 0x14], ebx
// 007daa91  7519                 jne 0x7daaac
// 007daa93  8b4608               mov eax, dword ptr [esi + 8]
// 007daa96  8b16                 mov edx, dword ptr [esi]
// 007daa98  50                   push eax
// 007daa99  8b4604               mov eax, dword ptr [esi + 4]
// 007daa9c  6a04                 push 4
// 007daa9e  8d4c241c             lea ecx, [esp + 0x1c]
// 007daaa2  51                   push ecx
// 007daaa3  52                   push edx
// 007daaa4  ffd0                 call eax
// 007daaa6  83c410               add esp, 0x10
// 007daaa9  894610               mov dword ptr [esi + 0x10], eax
// 007daaac  33ff                 xor edi, edi
// 007daaae  85db                 test ebx, ebx
// 007daab0  7e1c                 jle 0x7daace
// 007daab2  8b4508               mov eax, dword ptr [ebp + 8]
// 007daab5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007daab8  8b5010               mov edx, dword ptr [eax + 0x10]
// 007daabb  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007daabe  56                   push esi
// 007daabf  51                   push ecx
// 007daac0  50                   push eax
// 007daac1  e86a010000           call 0x7dac30
// 007daac6  47                   inc edi
// 007daac7  83c40c               add esp, 0xc
// 007daaca  3bfb                 cmp edi, ebx
// 007daacc  7ce4                 jl 0x7daab2
// 007daace  5f                   pop edi
// 007daacf  5e                   pop esi
// 007daad0  5b                   pop ebx
// 007daad1  8be5                 mov esp, ebp
// 007daad3  5d                   pop ebp
// 007daad4  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
