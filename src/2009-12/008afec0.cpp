// roc 2009-12 008afec0  unit: CXTPDockingPaneMiniWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008afec0
//
// 008afec0  6aff                 push -1
// 008afec2  68562e9600           push 0x962e56
// 008afec7  64a100000000         mov eax, dword ptr fs:[0]
// 008afecd  50                   push eax
// 008afece  51                   push ecx
// 008afecf  53                   push ebx
// 008afed0  55                   push ebp
// 008afed1  56                   push esi
// 008afed2  57                   push edi
// 008afed3  a10052b600           mov eax, dword ptr [0xb65200]
// 008afed8  33c4                 xor eax, esp
// 008afeda  50                   push eax
// 008afedb  8d442418             lea eax, [esp + 0x18]
// 008afedf  64a300000000         mov dword ptr fs:[0], eax
// 008afee5  8bf1                 mov esi, ecx
// 008afee7  89742414             mov dword ptr [esp + 0x14], esi
// 008afeeb  e8ec6d0700           call 0x926cdc
// 008afef0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008afef4  50                   push eax
// 008afef5  8daef8000000         lea ebp, [esi + 0xf8]
// 008afefb  33db                 xor ebx, ebx
// 008afefd  6a03                 push 3
// 008afeff  8bcd                 mov ecx, ebp
// 008aff01  895c2428             mov dword ptr [esp + 0x28], ebx
// 008aff05  e8260b0000           call 0x8b0a30
// 008aff0a  6a14                 push 0x14
// 008aff0c  c644242401           mov byte ptr [esp + 0x24], 1
// 008aff11  c706dc6ea000         mov dword ptr [esi], 0xa06edc
// 008aff17  c745007c6ea000       mov dword ptr [ebp], 0xa06e7c
// 008aff1e  899e30010000         mov dword ptr [esi + 0x130], ebx
// 008aff24  e83739f4ff           call 0x7f3860
// 008aff29  8bf8                 mov edi, eax
// 008aff2b  83c404               add esp, 4
// 008aff2e  3bfb                 cmp edi, ebx
// 008aff30  740f                 je 0x8aff41
// 008aff32  8bcf                 mov ecx, edi
// 008aff34  e8c7f3ffff           call 0x8af300
// 008aff39  c707b070a000         mov dword ptr [edi], 0xa070b0
// 008aff3f  eb02                 jmp 0x8aff43
// 008aff41  33ff                 xor edi, edi
// 008aff43  6a24                 push 0x24
// 008aff45  89be24010000         mov dword ptr [esi + 0x124], edi
// 008aff4b  e81039f4ff           call 0x7f3860
// 008aff50  8bf8                 mov edi, eax
// 008aff52  83c404               add esp, 4
// 008aff55  3bfb                 cmp edi, ebx
// 008aff57  741c                 je 0x8aff75
// 008aff59  57                   push edi
// 008aff5a  c74714f1240000       mov dword ptr [edi + 0x14], 0x24f1
// 008aff61  896f10               mov dword ptr [edi + 0x10], ebp
// 008aff64  895f1c               mov dword ptr [edi + 0x1c], ebx
// 008aff67  895f18               mov dword ptr [edi + 0x18], ebx
// 008aff6a  895f20               mov dword ptr [edi + 0x20], ebx
// 008aff6d  ff159cca9800         call dword ptr [0x98ca9c]
// 008aff73  eb02                 jmp 0x8aff77
// 008aff75  33ff                 xor edi, edi
// 008aff77  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008aff7d  8b5108               mov edx, dword ptr [ecx + 8]
// 008aff80  57                   push edi
// 008aff81  52                   push edx
// 008aff82  e8e9acfbff           call 0x86ac70
// 008aff87  6a24                 push 0x24
// 008aff89  e8d238f4ff           call 0x7f3860
// 008aff8e  8bf8                 mov edi, eax
// 008aff90  83c404               add esp, 4
// 008aff93  3bfb                 cmp edi, ebx
// 008aff95  741c                 je 0x8affb3
// 008aff97  57                   push edi
// 008aff98  c74714f0240000       mov dword ptr [edi + 0x14], 0x24f0
// 008aff9f  896f10               mov dword ptr [edi + 0x10], ebp
// 008affa2  895f1c               mov dword ptr [edi + 0x1c], ebx
// 008affa5  895f18               mov dword ptr [edi + 0x18], ebx
// 008affa8  895f20               mov dword ptr [edi + 0x20], ebx
// 008affab  ff159cca9800         call dword ptr [0x98ca9c]
// 008affb1  eb02                 jmp 0x8affb5
// 008affb3  33ff                 xor edi, edi
// 008affb5  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008affbb  8b4108               mov eax, dword ptr [ecx + 8]
// 008affbe  57                   push edi
// 008affbf  50                   push eax
// 008affc0  e8abacfbff           call 0x86ac70
// 008affc5  6a24                 push 0x24
// 008affc7  e89438f4ff           call 0x7f3860
// 008affcc  8bf8                 mov edi, eax
// 008affce  83c404               add esp, 4
// 008affd1  3bfb                 cmp edi, ebx
// 008affd3  741c                 je 0x8afff1
// 008affd5  57                   push edi
// 008affd6  c74714f4240000       mov dword ptr [edi + 0x14], 0x24f4
// 008affdd  896f10               mov dword ptr [edi + 0x10], ebp
// 008affe0  895f1c               mov dword ptr [edi + 0x1c], ebx
// 008affe3  895f18               mov dword ptr [edi + 0x18], ebx
// 008affe6  895f20               mov dword ptr [edi + 0x20], ebx
// 008affe9  ff159cca9800         call dword ptr [0x98ca9c]
// 008affef  eb02                 jmp 0x8afff3
// 008afff1  33ff                 xor edi, edi
// 008afff3  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008afff9  8b5108               mov edx, dword ptr [ecx + 8]
// 008afffc  57                   push edi
// 008afffd  52                   push edx
// 008afffe  e86dacfbff           call 0x86ac70
// 008b0003  899e48010000         mov dword ptr [esi + 0x148], ebx
// 008b0009  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 008b000f  899e50010000         mov dword ptr [esi + 0x150], ebx
// 008b0015  899e38010000         mov dword ptr [esi + 0x138], ebx
// 008b001b  899e40010000         mov dword ptr [esi + 0x140], ebx
// 008b0021  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008b0027  3bcb                 cmp ecx, ebx
// 008b0029  740d                 je 0x8b0038
// 008b002b  a1b48eb600           mov eax, dword ptr [0xb68eb4]
// 008b0030  99                   cdq 
// 008b0031  f7f9                 idiv ecx
// 008b0033  83f801               cmp eax, 1
// 008b0036  7d05                 jge 0x8b003d
// 008b0038  b801000000           mov eax, 1
// 008b003d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008b0043  899e54010000         mov dword ptr [esi + 0x154], ebx
// 008b0049  899e44010000         mov dword ptr [esi + 0x144], ebx
// 008b004f  8bc6                 mov eax, esi
// 008b0051  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b0055  64890d00000000       mov dword ptr fs:[0], ecx
// 008b005c  59                   pop ecx
// 008b005d  5f                   pop edi
// 008b005e  5e                   pop esi
// 008b005f  5d                   pop ebp
// 008b0060  5b                   pop ebx
// 008b0061  83c410               add esp, 0x10
// 008b0064  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPaneMiniWnd@@IAE@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp