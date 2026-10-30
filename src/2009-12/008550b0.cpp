// roc 2009-12 008550b0  unit: CXTPTabClientWnd  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008550b0
//
// 008550b0  6aff                 push -1
// 008550b2  68a35d9600           push 0x965da3
// 008550b7  64a100000000         mov eax, dword ptr fs:[0]
// 008550bd  50                   push eax
// 008550be  81ec98000000         sub esp, 0x98
// 008550c4  a10052b600           mov eax, dword ptr [0xb65200]
// 008550c9  33c4                 xor eax, esp
// 008550cb  89842494000000       mov dword ptr [esp + 0x94], eax
// 008550d2  56                   push esi
// 008550d3  a10052b600           mov eax, dword ptr [0xb65200]
// 008550d8  33c4                 xor eax, esp
// 008550da  50                   push eax
// 008550db  8d8424a0000000       lea eax, [esp + 0xa0]
// 008550e2  64a300000000         mov dword ptr fs:[0], eax
// 008550e8  8bf1                 mov esi, ecx
// 008550ea  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 008550f1  7513                 jne 0x855106
// 008550f3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 008550fa  750a                 jne 0x855106
// 008550fc  e82fedf9ff           call 0x7f3e30
// 00855101  e98b000000           jmp 0x855191
// 00855106  56                   push esi
// 00855107  8d4c244c             lea ecx, [esp + 0x4c]
// 0085510b  e8e0f0f9ff           call 0x7f41f0
// 00855110  56                   push esi
// 00855111  8d4c240c             lea ecx, [esp + 0xc]
// 00855115  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00855120  e8ab61ffff           call 0x84b2d0
// 00855125  8d442448             lea eax, [esp + 0x48]
// 00855129  50                   push eax
// 0085512a  8d4c241c             lea ecx, [esp + 0x1c]
// 0085512e  e8cd62ffff           call 0x84b400
// 00855133  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00855137  8b16                 mov edx, dword ptr [esi]
// 00855139  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0085513f  83ec10               sub esp, 0x10
// 00855142  8bc4                 mov eax, esp
// 00855144  8908                 mov dword ptr [eax], ecx
// 00855146  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085514a  894804               mov dword ptr [eax + 4], ecx
// 0085514d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00855151  894808               mov dword ptr [eax + 8], ecx
// 00855154  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00855158  89480c               mov dword ptr [eax + 0xc], ecx
// 0085515b  8d442428             lea eax, [esp + 0x28]
// 0085515f  50                   push eax
// 00855160  8bce                 mov ecx, esi
// 00855162  c68424bc00000001     mov byte ptr [esp + 0xbc], 1
// 0085516a  ffd2                 call edx
// 0085516c  8d4c2418             lea ecx, [esp + 0x18]
// 00855170  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 00855178  e8c363ffff           call 0x84b540
// 0085517d  8d4c2448             lea ecx, [esp + 0x48]
// 00855181  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 0085518c  e859f0f9ff           call 0x7f41ea
// 00855191  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00855198  64890d00000000       mov dword ptr fs:[0], ecx
// 0085519f  59                   pop ecx
// 008551a0  5e                   pop esi
// 008551a1  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008551a8  33cc                 xor ecx, esp
// 008551aa  e8eb01faff           call 0x7f539a
// 008551af  81c4a4000000         add esp, 0xa4
// 008551b5  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPTabClientWnd@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp