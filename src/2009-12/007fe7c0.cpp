// roc 2009-12 007fe7c0  unit: CXTPPaintManager  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe7c0
//
// 007fe7c0  6aff                 push -1
// 007fe7c2  68d80c9600           push 0x960cd8
// 007fe7c7  64a100000000         mov eax, dword ptr fs:[0]
// 007fe7cd  50                   push eax
// 007fe7ce  83ec1c               sub esp, 0x1c
// 007fe7d1  53                   push ebx
// 007fe7d2  55                   push ebp
// 007fe7d3  56                   push esi
// 007fe7d4  57                   push edi
// 007fe7d5  a10052b600           mov eax, dword ptr [0xb65200]
// 007fe7da  33c4                 xor eax, esp
// 007fe7dc  50                   push eax
// 007fe7dd  8d442430             lea eax, [esp + 0x30]
// 007fe7e1  64a300000000         mov dword ptr fs:[0], eax
// 007fe7e7  8b742448             mov esi, dword ptr [esp + 0x48]
// 007fe7eb  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fe7ef  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007fe7f3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fe7f7  2bc6                 sub eax, esi
// 007fe7f9  99                   cdq 
// 007fe7fa  2bc2                 sub eax, edx
// 007fe7fc  d1f8                 sar eax, 1
// 007fe7fe  8d7c30f6             lea edi, [eax + esi - 0xa]
// 007fe802  8b742440             mov esi, dword ptr [esp + 0x40]
// 007fe806  2bcb                 sub ecx, ebx
// 007fe808  8bc1                 mov eax, ecx
// 007fe80a  99                   cdq 
// 007fe80b  2bc2                 sub eax, edx
// 007fe80d  d1f8                 sar eax, 1
// 007fe80f  8d5c18f6             lea ebx, [eax + ebx - 0xa]
// 007fe813  85f6                 test esi, esi
// 007fe815  7504                 jne 0x7fe81b
// 007fe817  33c0                 xor eax, eax
// 007fe819  eb03                 jmp 0x7fe81e
// 007fe81b  8b4604               mov eax, dword ptr [esi + 4]
// 007fe81e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007fe822  51                   push ecx
// 007fe823  50                   push eax
// 007fe824  8d4c2424             lea ecx, [esp + 0x24]
// 007fe828  e8d3ce0400           call 0x84b700
// 007fe82d  837c245800           cmp dword ptr [esp + 0x58], 0
// 007fe832  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007fe83a  8d6b06               lea ebp, [ebx + 6]
// 007fe83d  8d442414             lea eax, [esp + 0x14]
// 007fe841  8bce                 mov ecx, esi
// 007fe843  7453                 je 0x7fe898
// 007fe845  8d5707               lea edx, [edi + 7]
// 007fe848  52                   push edx
// 007fe849  55                   push ebp
// 007fe84a  50                   push eax
// 007fe84b  e8f25effff           call 0x7f4742
// 007fe850  8d4f0b               lea ecx, [edi + 0xb]
// 007fe853  8d430a               lea eax, [ebx + 0xa]
// 007fe856  51                   push ecx
// 007fe857  50                   push eax
// 007fe858  8bce                 mov ecx, esi
// 007fe85a  89442448             mov dword ptr [esp + 0x48], eax
// 007fe85e  e8d95effff           call 0x7f473c
// 007fe863  8d4708               lea eax, [edi + 8]
// 007fe866  50                   push eax
// 007fe867  83c30d               add ebx, 0xd
// 007fe86a  53                   push ebx
// 007fe86b  8bce                 mov ecx, esi
// 007fe86d  e8ca5effff           call 0x7f473c
// 007fe872  8d4708               lea eax, [edi + 8]
// 007fe875  50                   push eax
// 007fe876  55                   push ebp
// 007fe877  8d54241c             lea edx, [esp + 0x1c]
// 007fe87b  52                   push edx
// 007fe87c  8bce                 mov ecx, esi
// 007fe87e  e8bf5effff           call 0x7f4742
// 007fe883  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fe887  8d470c               lea eax, [edi + 0xc]
// 007fe88a  50                   push eax
// 007fe88b  51                   push ecx
// 007fe88c  8bce                 mov ecx, esi
// 007fe88e  e8a95effff           call 0x7f473c
// 007fe893  83c709               add edi, 9
// 007fe896  eb51                 jmp 0x7fe8e9
// 007fe898  8d5709               lea edx, [edi + 9]
// 007fe89b  52                   push edx
// 007fe89c  55                   push ebp
// 007fe89d  50                   push eax
// 007fe89e  e89f5effff           call 0x7f4742
// 007fe8a3  8d4f0b               lea ecx, [edi + 0xb]
// 007fe8a6  8d4308               lea eax, [ebx + 8]
// 007fe8a9  51                   push ecx
// 007fe8aa  50                   push eax
// 007fe8ab  8bce                 mov ecx, esi
// 007fe8ad  89442448             mov dword ptr [esp + 0x48], eax
// 007fe8b1  e8865effff           call 0x7f473c
// 007fe8b6  8d5706               lea edx, [edi + 6]
// 007fe8b9  52                   push edx
// 007fe8ba  83c30d               add ebx, 0xd
// 007fe8bd  53                   push ebx
// 007fe8be  8bce                 mov ecx, esi
// 007fe8c0  e8775effff           call 0x7f473c
// 007fe8c5  8d470a               lea eax, [edi + 0xa]
// 007fe8c8  50                   push eax
// 007fe8c9  55                   push ebp
// 007fe8ca  8d4c241c             lea ecx, [esp + 0x1c]
// 007fe8ce  51                   push ecx
// 007fe8cf  8bce                 mov ecx, esi
// 007fe8d1  e86c5effff           call 0x7f4742
// 007fe8d6  8b442440             mov eax, dword ptr [esp + 0x40]
// 007fe8da  8d570c               lea edx, [edi + 0xc]
// 007fe8dd  52                   push edx
// 007fe8de  50                   push eax
// 007fe8df  8bce                 mov ecx, esi
// 007fe8e1  e8565effff           call 0x7f473c
// 007fe8e6  83c707               add edi, 7
// 007fe8e9  57                   push edi
// 007fe8ea  53                   push ebx
// 007fe8eb  8bce                 mov ecx, esi
// 007fe8ed  e84a5effff           call 0x7f473c
// 007fe8f2  8d4c241c             lea ecx, [esp + 0x1c]
// 007fe8f6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007fe8fe  e88dce0400           call 0x84b790
// 007fe903  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fe907  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe90e  59                   pop ecx
// 007fe90f  5f                   pop edi
// 007fe910  5e                   pop esi
// 007fe911  5d                   pop ebp
// 007fe912  5b                   pop ebx
// 007fe913  83c428               add esp, 0x28
// 007fe916  c21c00               ret 0x1c
// copied from an identical function in another client (function ?_DrawCheckMark@CXTPPaintManager@@IAEXPAVCDC@@VCRect@@KH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp