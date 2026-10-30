// roc 2009-12 008383f0  unit: CXTPControls  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008383f0
//
// 008383f0  6aff                 push -1
// 008383f2  68b1c49500           push 0x95c4b1
// 008383f7  64a100000000         mov eax, dword ptr fs:[0]
// 008383fd  50                   push eax
// 008383fe  51                   push ecx
// 008383ff  53                   push ebx
// 00838400  56                   push esi
// 00838401  57                   push edi
// 00838402  a10052b600           mov eax, dword ptr [0xb65200]
// 00838407  33c4                 xor eax, esp
// 00838409  50                   push eax
// 0083840a  8d442414             lea eax, [esp + 0x14]
// 0083840e  64a300000000         mov dword ptr fs:[0], eax
// 00838414  8bf1                 mov esi, ecx
// 00838416  89742410             mov dword ptr [esp + 0x10], esi
// 0083841a  8d7e54               lea edi, [esi + 0x54]
// 0083841d  c706ac7e9f00         mov dword ptr [esi], 0x9f7eac
// 00838423  c7074c7e9f00         mov dword ptr [edi], 0x9f7e4c
// 00838429  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0083842f  33db                 xor ebx, ebx
// 00838431  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 00838439  3bcb                 cmp ecx, ebx
// 0083843b  740b                 je 0x838448
// 0083843d  e89ab9fbff           call 0x7f3ddc
// 00838442  899ed0000000         mov dword ptr [esi + 0xd0], ebx
// 00838448  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0083844e  3bcb                 cmp ecx, ebx
// 00838450  740b                 je 0x83845d
// 00838452  e885b9fbff           call 0x7f3ddc
// 00838457  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0083845d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00838463  3bcb                 cmp ecx, ebx
// 00838465  740b                 je 0x838472
// 00838467  e870b9fbff           call 0x7f3ddc
// 0083846c  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 00838472  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00838478  3bcb                 cmp ecx, ebx
// 0083847a  740b                 je 0x838487
// 0083847c  e85bb9fbff           call 0x7f3ddc
// 00838481  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 00838487  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 0083848d  3bcb                 cmp ecx, ebx
// 0083848f  7408                 je 0x838499
// 00838491  8b01                 mov eax, dword ptr [ecx]
// 00838493  8b10                 mov edx, dword ptr [eax]
// 00838495  6a01                 push 1
// 00838497  ffd2                 call edx
// 00838499  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0083849f  3bcb                 cmp ecx, ebx
// 008384a1  740b                 je 0x8384ae
// 008384a3  e834b9fbff           call 0x7f3ddc
// 008384a8  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 008384ae  ff15c0e09800         call dword ptr [0x98e0c0]
// 008384b4  8d8e48010000         lea ecx, [esi + 0x148]
// 008384ba  ff15c0de9800         call dword ptr [0x98dec0]
// 008384c0  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008384c6  ff15c0de9800         call dword ptr [0x98dec0]
// 008384cc  8bcf                 mov ecx, edi
// 008384ce  885c241c             mov byte ptr [esp + 0x1c], bl
// 008384d2  e8693f0000           call 0x83c440
// 008384d7  8bce                 mov ecx, esi
// 008384d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008384e1  e830befbff           call 0x7f4316
// 008384e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008384ea  64890d00000000       mov dword ptr fs:[0], ecx
// 008384f1  59                   pop ecx
// 008384f2  5f                   pop edi
// 008384f3  5e                   pop esi
// 008384f4  5b                   pop ebx
// 008384f5  83c410               add esp, 0x10
// 008384f8  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneManager@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp