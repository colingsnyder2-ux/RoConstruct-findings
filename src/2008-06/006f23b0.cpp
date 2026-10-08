// from server: 100% by auto
// roc 2008-06 006f23b0  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f23b0
//
// 006f23b0  83ec18               sub esp, 0x18
// 006f23b3  53                   push ebx
// 006f23b4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006f23b8  55                   push ebp
// 006f23b9  56                   push esi
// 006f23ba  57                   push edi
// 006f23bb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006f23bf  57                   push edi
// 006f23c0  8d442434             lea eax, [esp + 0x34]
// 006f23c4  50                   push eax
// 006f23c5  6a00                 push 0
// 006f23c7  53                   push ebx
// 006f23c8  8bf1                 mov esi, ecx
// 006f23ca  e8f1fdffff           call 0x6f21c0
// 006f23cf  6a00                 push 0
// 006f23d1  57                   push edi
// 006f23d2  53                   push ebx
// 006f23d3  8d4c2424             lea ecx, [esp + 0x24]
// 006f23d7  51                   push ecx
// 006f23d8  8bce                 mov ecx, esi
// 006f23da  e841fcffff           call 0x6f2020
// 006f23df  8b28                 mov ebp, dword ptr [eax]
// 006f23e1  8b5004               mov edx, dword ptr [eax + 4]
// 006f23e4  57                   push edi
// 006f23e5  8d442434             lea eax, [esp + 0x34]
// 006f23e9  50                   push eax
// 006f23ea  68ff7f0000           push 0x7fff
// 006f23ef  53                   push ebx
// 006f23f0  8bce                 mov ecx, esi
// 006f23f2  8954242c             mov dword ptr [esp + 0x2c], edx
// 006f23f6  e8c5fdffff           call 0x6f21c0
// 006f23fb  6a00                 push 0
// 006f23fd  57                   push edi
// 006f23fe  53                   push ebx
// 006f23ff  8d4c242c             lea ecx, [esp + 0x2c]
// 006f2403  51                   push ecx
// 006f2404  8bce                 mov ecx, esi
// 006f2406  e815fcffff           call 0x6f2020
// 006f240b  8b08                 mov ecx, dword ptr [eax]
// 006f240d  3be9                 cmp ebp, ecx
// 006f240f  8b5004               mov edx, dword ptr [eax + 4]
// 006f2412  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f2416  89542414             mov dword ptr [esp + 0x14], edx
// 006f241a  7d5a                 jge 0x6f2476
// 006f241c  eb06                 jmp 0x6f2424
// 006f241e  8bff                 mov edi, edi
// 006f2420  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f2424  57                   push edi
// 006f2425  8d442434             lea eax, [esp + 0x34]
// 006f2429  50                   push eax
// 006f242a  8d0429               lea eax, [ecx + ebp]
// 006f242d  99                   cdq 
// 006f242e  2bc2                 sub eax, edx
// 006f2430  d1f8                 sar eax, 1
// 006f2432  50                   push eax
// 006f2433  53                   push ebx
// 006f2434  8bce                 mov ecx, esi
// 006f2436  e885fdffff           call 0x6f21c0
// 006f243b  6a00                 push 0
// 006f243d  57                   push edi
// 006f243e  53                   push ebx
// 006f243f  8d4c242c             lea ecx, [esp + 0x2c]
// 006f2443  51                   push ecx
// 006f2444  8bce                 mov ecx, esi
// 006f2446  e8d5fbffff           call 0x6f2020
// 006f244b  8b08                 mov ecx, dword ptr [eax]
// 006f244d  8b5004               mov edx, dword ptr [eax + 4]
// 006f2450  3bd1                 cmp edx, ecx
// 006f2452  7e12                 jle 0x6f2466
// 006f2454  3be9                 cmp ebp, ecx
// 006f2456  7506                 jne 0x6f245e
// 006f2458  3954241c             cmp dword ptr [esp + 0x1c], edx
// 006f245c  7418                 je 0x6f2476
// 006f245e  8be9                 mov ebp, ecx
// 006f2460  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f2464  eb0a                 jmp 0x6f2470
// 006f2466  7d0e                 jge 0x6f2476
// 006f2468  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f246c  89542414             mov dword ptr [esp + 0x14], edx
// 006f2470  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 006f2474  7caa                 jl 0x6f2420
// 006f2476  5f                   pop edi
// 006f2477  5e                   pop esi
// 006f2478  5d                   pop ebp
// 006f2479  5b                   pop ebx
// 006f247a  83c418               add esp, 0x18
// 006f247d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
