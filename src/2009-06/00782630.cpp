// roc 2009-06 00782630  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782630
//
// 00782630  83ec10               sub esp, 0x10
// 00782633  53                   push ebx
// 00782634  56                   push esi
// 00782635  57                   push edi
// 00782636  8d442430             lea eax, [esp + 0x30]
// 0078263a  50                   push eax
// 0078263b  8bf9                 mov edi, ecx
// 0078263d  e88ee5fdff           call 0x760bd0
// 00782642  83f801               cmp eax, 1
// 00782645  7546                 jne 0x78268d
// 00782647  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0078264a  8d4c240c             lea ecx, [esp + 0xc]
// 0078264e  51                   push ecx
// 0078264f  52                   push edx
// 00782650  ff15f4ed8900         call dword ptr [0x89edf4]
// 00782656  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078265a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078265e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00782662  8b542420             mov edx, dword ptr [esp + 0x20]
// 00782666  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0078266a  8932                 mov dword ptr [edx], esi
// 0078266c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00782670  2bce                 sub ecx, esi
// 00782672  8b742428             mov esi, dword ptr [esp + 0x28]
// 00782676  8917                 mov dword ptr [edi], edx
// 00782678  890e                 mov dword ptr [esi], ecx
// 0078267a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078267e  5f                   pop edi
// 0078267f  2bc2                 sub eax, edx
// 00782681  5e                   pop esi
// 00782682  8901                 mov dword ptr [ecx], eax
// 00782684  33c0                 xor eax, eax
// 00782686  5b                   pop ebx
// 00782687  83c410               add esp, 0x10
// 0078268a  c22000               ret 0x20
// 0078268d  8d442430             lea eax, [esp + 0x30]
// 00782691  50                   push eax
// 00782692  8bcf                 mov ecx, edi
// 00782694  e837e5fdff           call 0x760bd0
// 00782699  85c0                 test eax, eax
// 0078269b  740e                 je 0x7826ab
// 0078269d  5f                   pop edi
// 0078269e  5e                   pop esi
// 0078269f  b857000780           mov eax, 0x80070057
// 007826a4  5b                   pop ebx
// 007826a5  83c410               add esp, 0x10
// 007826a8  c22000               ret 0x20
// 007826ab  8b47d8               mov eax, dword ptr [edi - 0x28]
// 007826ae  85c0                 test eax, eax
// 007826b0  7407                 je 0x7826b9
// 007826b2  8d70ac               lea esi, [eax - 0x54]
// 007826b5  85f6                 test esi, esi
// 007826b7  750e                 jne 0x7826c7
// 007826b9  5f                   pop edi
// 007826ba  5e                   pop esi
// 007826bb  b801000000           mov eax, 1
// 007826c0  5b                   pop ebx
// 007826c1  83c410               add esp, 0x10
// 007826c4  c22000               ret 0x20
// 007826c7  8b5620               mov edx, dword ptr [esi + 0x20]
// 007826ca  8d4c240c             lea ecx, [esp + 0xc]
// 007826ce  51                   push ecx
// 007826cf  52                   push edx
// 007826d0  ff15f4ed8900         call dword ptr [0x89edf4]
// 007826d6  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 007826dc  83fa01               cmp edx, 1
// 007826df  0f8e71ffffff         jle 0x782656
// 007826e5  33c9                 xor ecx, ecx
// 007826e7  85d2                 test edx, edx
// 007826e9  0f8e67ffffff         jle 0x782656
// 007826ef  90                   nop 
// 007826f0  85c9                 test ecx, ecx
// 007826f2  7c0f                 jl 0x782703
// 007826f4  3bca                 cmp ecx, edx
// 007826f6  7d0b                 jge 0x782703
// 007826f8  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007826fe  8b0488               mov eax, dword ptr [eax + ecx*4]
// 00782701  eb02                 jmp 0x782705
// 00782703  33c0                 xor eax, eax
// 00782705  8d5fa8               lea ebx, [edi - 0x58]
// 00782708  395840               cmp dword ptr [eax + 0x40], ebx
// 0078270b  740a                 je 0x782717
// 0078270d  41                   inc ecx
// 0078270e  3bca                 cmp ecx, edx
// 00782710  7cde                 jl 0x7826f0
// 00782712  e93fffffff           jmp 0x782656
// 00782717  8b5044               mov edx, dword ptr [eax + 0x44]
// 0078271a  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0078271d  8b7048               mov esi, dword ptr [eax + 0x48]
// 00782720  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00782724  8b4050               mov eax, dword ptr [eax + 0x50]
// 00782727  2bca                 sub ecx, edx
// 00782729  03d7                 add edx, edi
// 0078272b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0078272f  2bc6                 sub eax, esi
// 00782731  03f7                 add esi, edi
// 00782733  03ca                 add ecx, edx
// 00782735  03c6                 add eax, esi
// 00782737  8954240c             mov dword ptr [esp + 0xc], edx
// 0078273b  89742410             mov dword ptr [esp + 0x10], esi
// 0078273f  e91affffff           jmp 0x78265e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
