// roc 2009-12 007f57ce  unit: ActiveDocView  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f57ce
//
// 007f57ce  8bff                 mov edi, edi
// 007f57d0  55                   push ebp
// 007f57d1  8bec                 mov ebp, esp
// 007f57d3  81ec28030000         sub esp, 0x328
// 007f57d9  a368abb900           mov dword ptr [0xb9ab68], eax
// 007f57de  890d64abb900         mov dword ptr [0xb9ab64], ecx
// 007f57e4  891560abb900         mov dword ptr [0xb9ab60], edx
// 007f57ea  891d5cabb900         mov dword ptr [0xb9ab5c], ebx
// 007f57f0  893558abb900         mov dword ptr [0xb9ab58], esi
// 007f57f6  893d54abb900         mov dword ptr [0xb9ab54], edi
// 007f57fc  668c1580abb900       mov word ptr [0xb9ab80], ss
// 007f5803  668c0d74abb900       mov word ptr [0xb9ab74], cs
// 007f580a  668c1d50abb900       mov word ptr [0xb9ab50], ds
// 007f5811  668c054cabb900       mov word ptr [0xb9ab4c], es
// 007f5818  668c2548abb900       mov word ptr [0xb9ab48], fs
// 007f581f  668c2d44abb900       mov word ptr [0xb9ab44], gs
// 007f5826  9c                   pushfd 
// 007f5827  8f0578abb900         pop dword ptr [0xb9ab78]
// 007f582d  8b4500               mov eax, dword ptr [ebp]
// 007f5830  a36cabb900           mov dword ptr [0xb9ab6c], eax
// 007f5835  8b4504               mov eax, dword ptr [ebp + 4]
// 007f5838  a370abb900           mov dword ptr [0xb9ab70], eax
// 007f583d  8d4508               lea eax, [ebp + 8]
// 007f5840  a37cabb900           mov dword ptr [0xb9ab7c], eax
// 007f5845  8b85e0fcffff         mov eax, dword ptr [ebp - 0x320]
// 007f584b  c705b8aab90001000100 mov dword ptr [0xb9aab8], 0x10001
// 007f5855  a170abb900           mov eax, dword ptr [0xb9ab70]
// 007f585a  a36caab900           mov dword ptr [0xb9aa6c], eax
// 007f585f  c70560aab900090400c0 mov dword ptr [0xb9aa60], 0xc0000409
// 007f5869  c70564aab90001000000 mov dword ptr [0xb9aa64], 1
// 007f5873  a10052b600           mov eax, dword ptr [0xb65200]
// 007f5878  8985d8fcffff         mov dword ptr [ebp - 0x328], eax
// 007f587e  a10452b600           mov eax, dword ptr [0xb65204]
// 007f5883  8985dcfcffff         mov dword ptr [ebp - 0x324], eax
// 007f5889  ff15c0b39800         call dword ptr [0x98b3c0]
// 007f588f  a3b0aab900           mov dword ptr [0xb9aab0], eax
// 007f5894  6a01                 push 1
// 007f5896  e851000000           call 0x7f58ec
// 007f589b  59                   pop ecx
// 007f589c  6a00                 push 0
// 007f589e  ff15c8b29800         call dword ptr [0x98b2c8]
// 007f58a4  6888169f00           push 0x9f1688
// 007f58a9  ff15bcb39800         call dword ptr [0x98b3bc]
// 007f58af  833db0aab90000       cmp dword ptr [0xb9aab0], 0
// 007f58b6  7508                 jne 0x7f58c0
// 007f58b8  6a01                 push 1
// 007f58ba  e82d000000           call 0x7f58ec
// 007f58bf  59                   pop ecx
// 007f58c0  68090400c0           push 0xc0000409
// 007f58c5  ff15b4b29800         call dword ptr [0x98b2b4]
// 007f58cb  50                   push eax
// 007f58cc  ff15b8b39800         call dword ptr [0x98b3b8]
// 007f58d2  c9                   leave 
// 007f58d3  c3                   ret 
// copied from an identical function in another client (function ___report_gsfailure)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_report.obj