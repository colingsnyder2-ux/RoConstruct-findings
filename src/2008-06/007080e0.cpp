// roc 2008-06 007080e0  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007080e0
//
// 007080e0  83ec10               sub esp, 0x10
// 007080e3  53                   push ebx
// 007080e4  56                   push esi
// 007080e5  57                   push edi
// 007080e6  8d442430             lea eax, [esp + 0x30]
// 007080ea  50                   push eax
// 007080eb  8bf9                 mov edi, ecx
// 007080ed  e8ae01feff           call 0x6e82a0
// 007080f2  83f801               cmp eax, 1
// 007080f5  7546                 jne 0x70813d
// 007080f7  8b575c               mov edx, dword ptr [edi + 0x5c]
// 007080fa  8d4c240c             lea ecx, [esp + 0xc]
// 007080fe  51                   push ecx
// 007080ff  52                   push edx
// 00708100  ff15342e8000         call dword ptr [0x802e34]
// 00708106  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070810a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070810e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00708112  8b542420             mov edx, dword ptr [esp + 0x20]
// 00708116  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0070811a  8932                 mov dword ptr [edx], esi
// 0070811c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00708120  2bce                 sub ecx, esi
// 00708122  8b742428             mov esi, dword ptr [esp + 0x28]
// 00708126  8917                 mov dword ptr [edi], edx
// 00708128  890e                 mov dword ptr [esi], ecx
// 0070812a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070812e  5f                   pop edi
// 0070812f  2bc2                 sub eax, edx
// 00708131  5e                   pop esi
// 00708132  8901                 mov dword ptr [ecx], eax
// 00708134  33c0                 xor eax, eax
// 00708136  5b                   pop ebx
// 00708137  83c410               add esp, 0x10
// 0070813a  c22000               ret 0x20
// 0070813d  8d442430             lea eax, [esp + 0x30]
// 00708141  50                   push eax
// 00708142  8bcf                 mov ecx, edi
// 00708144  e85701feff           call 0x6e82a0
// 00708149  85c0                 test eax, eax
// 0070814b  740e                 je 0x70815b
// 0070814d  5f                   pop edi
// 0070814e  5e                   pop esi
// 0070814f  b857000780           mov eax, 0x80070057
// 00708154  5b                   pop ebx
// 00708155  83c410               add esp, 0x10
// 00708158  c22000               ret 0x20
// 0070815b  8b47d8               mov eax, dword ptr [edi - 0x28]
// 0070815e  85c0                 test eax, eax
// 00708160  7407                 je 0x708169
// 00708162  8d70ac               lea esi, [eax - 0x54]
// 00708165  85f6                 test esi, esi
// 00708167  750e                 jne 0x708177
// 00708169  5f                   pop edi
// 0070816a  5e                   pop esi
// 0070816b  b801000000           mov eax, 1
// 00708170  5b                   pop ebx
// 00708171  83c410               add esp, 0x10
// 00708174  c22000               ret 0x20
// 00708177  8b5620               mov edx, dword ptr [esi + 0x20]
// 0070817a  8d4c240c             lea ecx, [esp + 0xc]
// 0070817e  51                   push ecx
// 0070817f  52                   push edx
// 00708180  ff15342e8000         call dword ptr [0x802e34]
// 00708186  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0070818c  83fa01               cmp edx, 1
// 0070818f  0f8e71ffffff         jle 0x708106
// 00708195  33c9                 xor ecx, ecx
// 00708197  85d2                 test edx, edx
// 00708199  0f8e67ffffff         jle 0x708106
// 0070819f  90                   nop 
// 007081a0  85c9                 test ecx, ecx
// 007081a2  7c0f                 jl 0x7081b3
// 007081a4  3bca                 cmp ecx, edx
// 007081a6  7d0b                 jge 0x7081b3
// 007081a8  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007081ae  8b0488               mov eax, dword ptr [eax + ecx*4]
// 007081b1  eb02                 jmp 0x7081b5
// 007081b3  33c0                 xor eax, eax
// 007081b5  8d5fa8               lea ebx, [edi - 0x58]
// 007081b8  395840               cmp dword ptr [eax + 0x40], ebx
// 007081bb  740a                 je 0x7081c7
// 007081bd  41                   inc ecx
// 007081be  3bca                 cmp ecx, edx
// 007081c0  7cde                 jl 0x7081a0
// 007081c2  e93fffffff           jmp 0x708106
// 007081c7  8b5044               mov edx, dword ptr [eax + 0x44]
// 007081ca  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007081cd  8b7048               mov esi, dword ptr [eax + 0x48]
// 007081d0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007081d4  8b4050               mov eax, dword ptr [eax + 0x50]
// 007081d7  2bca                 sub ecx, edx
// 007081d9  03d7                 add edx, edi
// 007081db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007081df  2bc6                 sub eax, esi
// 007081e1  03f7                 add esi, edi
// 007081e3  03ca                 add ecx, edx
// 007081e5  03c6                 add eax, esi
// 007081e7  8954240c             mov dword ptr [esp + 0xc], edx
// 007081eb  89742410             mov dword ptr [esp + 0x10], esi
// 007081ef  e91affffff           jmp 0x70810e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
