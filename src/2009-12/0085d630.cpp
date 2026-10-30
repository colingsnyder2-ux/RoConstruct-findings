// roc 2009-12 0085d630  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d630
//
// 0085d630  83ec10               sub esp, 0x10
// 0085d633  53                   push ebx
// 0085d634  56                   push esi
// 0085d635  57                   push edi
// 0085d636  8d442430             lea eax, [esp + 0x30]
// 0085d63a  50                   push eax
// 0085d63b  8bf9                 mov edi, ecx
// 0085d63d  e85ee3fdff           call 0x83b9a0
// 0085d642  83f801               cmp eax, 1
// 0085d645  7546                 jne 0x85d68d
// 0085d647  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0085d64a  8d4c240c             lea ecx, [esp + 0xc]
// 0085d64e  51                   push ecx
// 0085d64f  52                   push edx
// 0085d650  ff1570cc9800         call dword ptr [0x98cc70]
// 0085d656  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085d65a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085d65e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0085d662  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085d666  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0085d66a  8932                 mov dword ptr [edx], esi
// 0085d66c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085d670  2bce                 sub ecx, esi
// 0085d672  8b742428             mov esi, dword ptr [esp + 0x28]
// 0085d676  8917                 mov dword ptr [edi], edx
// 0085d678  890e                 mov dword ptr [esi], ecx
// 0085d67a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085d67e  5f                   pop edi
// 0085d67f  2bc2                 sub eax, edx
// 0085d681  5e                   pop esi
// 0085d682  8901                 mov dword ptr [ecx], eax
// 0085d684  33c0                 xor eax, eax
// 0085d686  5b                   pop ebx
// 0085d687  83c410               add esp, 0x10
// 0085d68a  c22000               ret 0x20
// 0085d68d  8d442430             lea eax, [esp + 0x30]
// 0085d691  50                   push eax
// 0085d692  8bcf                 mov ecx, edi
// 0085d694  e807e3fdff           call 0x83b9a0
// 0085d699  85c0                 test eax, eax
// 0085d69b  740e                 je 0x85d6ab
// 0085d69d  5f                   pop edi
// 0085d69e  5e                   pop esi
// 0085d69f  b857000780           mov eax, 0x80070057
// 0085d6a4  5b                   pop ebx
// 0085d6a5  83c410               add esp, 0x10
// 0085d6a8  c22000               ret 0x20
// 0085d6ab  8b47d8               mov eax, dword ptr [edi - 0x28]
// 0085d6ae  85c0                 test eax, eax
// 0085d6b0  7407                 je 0x85d6b9
// 0085d6b2  8d70ac               lea esi, [eax - 0x54]
// 0085d6b5  85f6                 test esi, esi
// 0085d6b7  750e                 jne 0x85d6c7
// 0085d6b9  5f                   pop edi
// 0085d6ba  5e                   pop esi
// 0085d6bb  b801000000           mov eax, 1
// 0085d6c0  5b                   pop ebx
// 0085d6c1  83c410               add esp, 0x10
// 0085d6c4  c22000               ret 0x20
// 0085d6c7  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085d6ca  8d4c240c             lea ecx, [esp + 0xc]
// 0085d6ce  51                   push ecx
// 0085d6cf  52                   push edx
// 0085d6d0  ff1570cc9800         call dword ptr [0x98cc70]
// 0085d6d6  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0085d6dc  83fa01               cmp edx, 1
// 0085d6df  0f8e71ffffff         jle 0x85d656
// 0085d6e5  33c9                 xor ecx, ecx
// 0085d6e7  85d2                 test edx, edx
// 0085d6e9  0f8e67ffffff         jle 0x85d656
// 0085d6ef  90                   nop 
// 0085d6f0  85c9                 test ecx, ecx
// 0085d6f2  7c0f                 jl 0x85d703
// 0085d6f4  3bca                 cmp ecx, edx
// 0085d6f6  7d0b                 jge 0x85d703
// 0085d6f8  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0085d6fe  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0085d701  eb02                 jmp 0x85d705
// 0085d703  33c0                 xor eax, eax
// 0085d705  8d5fa8               lea ebx, [edi - 0x58]
// 0085d708  395840               cmp dword ptr [eax + 0x40], ebx
// 0085d70b  740a                 je 0x85d717
// 0085d70d  41                   inc ecx
// 0085d70e  3bca                 cmp ecx, edx
// 0085d710  7cde                 jl 0x85d6f0
// 0085d712  e93fffffff           jmp 0x85d656
// 0085d717  8b5044               mov edx, dword ptr [eax + 0x44]
// 0085d71a  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0085d71d  8b7048               mov esi, dword ptr [eax + 0x48]
// 0085d720  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085d724  8b4050               mov eax, dword ptr [eax + 0x50]
// 0085d727  2bca                 sub ecx, edx
// 0085d729  03d7                 add edx, edi
// 0085d72b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085d72f  2bc6                 sub eax, esi
// 0085d731  03f7                 add esi, edi
// 0085d733  03ca                 add ecx, edx
// 0085d735  03c6                 add eax, esi
// 0085d737  8954240c             mov dword ptr [esp + 0xc], edx
// 0085d73b  89742410             mov dword ptr [esp + 0x10], esi
// 0085d73f  e91affffff           jmp 0x85d65e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
