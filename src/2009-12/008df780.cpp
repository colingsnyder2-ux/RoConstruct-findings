// roc 2009-12 008df780  unit: CXTPRichRender  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df780
//
// 008df780  6aff                 push -1
// 008df782  68b8599600           push 0x9659b8
// 008df787  64a100000000         mov eax, dword ptr fs:[0]
// 008df78d  50                   push eax
// 008df78e  83ec34               sub esp, 0x34
// 008df791  56                   push esi
// 008df792  57                   push edi
// 008df793  a10052b600           mov eax, dword ptr [0xb65200]
// 008df798  33c4                 xor eax, esp
// 008df79a  50                   push eax
// 008df79b  8d442440             lea eax, [esp + 0x40]
// 008df79f  64a300000000         mov dword ptr fs:[0], eax
// 008df7a5  8bf1                 mov esi, ecx
// 008df7a7  837e2400             cmp dword ptr [esi + 0x24], 0
// 008df7ab  742f                 je 0x8df7dc
// 008df7ad  8b542450             mov edx, dword ptr [esp + 0x50]
// 008df7b1  85d2                 test edx, edx
// 008df7b3  7418                 je 0x8df7cd
// 008df7b5  8bc2                 mov eax, edx
// 008df7b7  8d7801               lea edi, [eax + 1]
// 008df7ba  8d9b00000000         lea ebx, [ebx]
// 008df7c0  8a08                 mov cl, byte ptr [eax]
// 008df7c2  40                   inc eax
// 008df7c3  84c9                 test cl, cl
// 008df7c5  75f9                 jne 0x8df7c0
// 008df7c7  2bc7                 sub eax, edi
// 008df7c9  85c0                 test eax, eax
// 008df7cb  7525                 jne 0x8df7f2
// 008df7cd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008df7d0  8b01                 mov eax, dword ptr [ecx]
// 008df7d2  8b5038               mov edx, dword ptr [eax + 0x38]
// 008df7d5  687cb49a00           push 0x9ab47c
// 008df7da  ffd2                 call edx
// 008df7dc  33c0                 xor eax, eax
// 008df7de  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008df7e2  64890d00000000       mov dword ptr fs:[0], ecx
// 008df7e9  59                   pop ecx
// 008df7ea  5f                   pop edi
// 008df7eb  5e                   pop esi
// 008df7ec  83c440               add esp, 0x40
// 008df7ef  c20400               ret 4
// 008df7f2  6a00                 push 0
// 008df7f4  50                   push eax
// 008df7f5  52                   push edx
// 008df7f6  8d4c2424             lea ecx, [esp + 0x24]
// 008df7fa  e8e94ef1ff           call 0x7f46e8
// 008df7ff  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008df802  8d442418             lea eax, [esp + 0x18]
// 008df806  8944240c             mov dword ptr [esp + 0xc], eax
// 008df80a  8d442450             lea eax, [esp + 0x50]
// 008df80e  50                   push eax
// 008df80f  8d442410             lea eax, [esp + 0x10]
// 008df813  50                   push eax
// 008df814  c744241ca0f68d00     mov dword ptr [esp + 0x1c], 0x8df6a0
// 008df81c  c744245800000000     mov dword ptr [esp + 0x58], 0
// 008df824  8b11                 mov edx, dword ptr [ecx]
// 008df826  8b520c               mov edx, dword ptr [edx + 0xc]
// 008df829  6a02                 push 2
// 008df82b  6849040000           push 0x449
// 008df830  c744245800000000     mov dword ptr [esp + 0x58], 0
// 008df838  ffd2                 call edx
// 008df83a  8b442450             mov eax, dword ptr [esp + 0x50]
// 008df83e  8d4c2418             lea ecx, [esp + 0x18]
// 008df842  85c0                 test eax, eax
// 008df844  7e04                 jle 0x8df84a
// 008df846  8bf0                 mov esi, eax
// 008df848  eb32                 jmp 0x8df87c
// 008df84a  8b442418             mov eax, dword ptr [esp + 0x18]
// 008df84e  8b5030               mov edx, dword ptr [eax + 0x30]
// 008df851  6a00                 push 0
// 008df853  6a00                 push 0
// 008df855  6a00                 push 0
// 008df857  ffd2                 call edx
// 008df859  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008df85c  8b01                 mov eax, dword ptr [ecx]
// 008df85e  8b400c               mov eax, dword ptr [eax + 0xc]
// 008df861  8d542450             lea edx, [esp + 0x50]
// 008df865  52                   push edx
// 008df866  8d542410             lea edx, [esp + 0x10]
// 008df86a  52                   push edx
// 008df86b  6a01                 push 1
// 008df86d  6849040000           push 0x449
// 008df872  ffd0                 call eax
// 008df874  8b742450             mov esi, dword ptr [esp + 0x50]
// 008df878  8d4c2418             lea ecx, [esp + 0x18]
// 008df87c  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008df884  e8534ef1ff           call 0x7f46dc
// 008df889  8bc6                 mov eax, esi
// 008df88b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008df88f  64890d00000000       mov dword ptr fs:[0], ecx
// 008df896  59                   pop ecx
// 008df897  5f                   pop edi
// 008df898  5e                   pop esi
// 008df899  83c440               add esp, 0x40
// 008df89c  c20400               ret 4
// copied from an identical function in another client (function ?SetText@CXTPRichRender@@QAEJPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPRichRender.cpp