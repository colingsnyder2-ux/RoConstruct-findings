// roc 2011-06 0086ee70  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ee70
//
// 0086ee70  83ec10               sub esp, 0x10
// 0086ee73  53                   push ebx
// 0086ee74  56                   push esi
// 0086ee75  57                   push edi
// 0086ee76  8d442430             lea eax, [esp + 0x30]
// 0086ee7a  50                   push eax
// 0086ee7b  8bf9                 mov edi, ecx
// 0086ee7d  e8ae24feff           call 0x851330
// 0086ee82  83f801               cmp eax, 1
// 0086ee85  7546                 jne 0x86eecd
// 0086ee87  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0086ee8a  8d4c240c             lea ecx, [esp + 0xc]
// 0086ee8e  51                   push ecx
// 0086ee8f  52                   push edx
// 0086ee90  ff155c1ca400         call dword ptr [0xa41c5c]
// 0086ee96  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086ee9a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086ee9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0086eea2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086eea6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0086eeaa  8932                 mov dword ptr [edx], esi
// 0086eeac  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086eeb0  2bce                 sub ecx, esi
// 0086eeb2  8b742428             mov esi, dword ptr [esp + 0x28]
// 0086eeb6  8917                 mov dword ptr [edi], edx
// 0086eeb8  890e                 mov dword ptr [esi], ecx
// 0086eeba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086eebe  5f                   pop edi
// 0086eebf  2bc2                 sub eax, edx
// 0086eec1  5e                   pop esi
// 0086eec2  8901                 mov dword ptr [ecx], eax
// 0086eec4  33c0                 xor eax, eax
// 0086eec6  5b                   pop ebx
// 0086eec7  83c410               add esp, 0x10
// 0086eeca  c22000               ret 0x20
// 0086eecd  8d442430             lea eax, [esp + 0x30]
// 0086eed1  50                   push eax
// 0086eed2  8bcf                 mov ecx, edi
// 0086eed4  e85724feff           call 0x851330
// 0086eed9  85c0                 test eax, eax
// 0086eedb  740e                 je 0x86eeeb
// 0086eedd  5f                   pop edi
// 0086eede  5e                   pop esi
// 0086eedf  b857000780           mov eax, 0x80070057
// 0086eee4  5b                   pop ebx
// 0086eee5  83c410               add esp, 0x10
// 0086eee8  c22000               ret 0x20
// 0086eeeb  8b47d8               mov eax, dword ptr [edi - 0x28]
// 0086eeee  85c0                 test eax, eax
// 0086eef0  7407                 je 0x86eef9
// 0086eef2  8d70ac               lea esi, [eax - 0x54]
// 0086eef5  85f6                 test esi, esi
// 0086eef7  750e                 jne 0x86ef07
// 0086eef9  5f                   pop edi
// 0086eefa  5e                   pop esi
// 0086eefb  b801000000           mov eax, 1
// 0086ef00  5b                   pop ebx
// 0086ef01  83c410               add esp, 0x10
// 0086ef04  c22000               ret 0x20
// 0086ef07  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086ef0a  8d4c240c             lea ecx, [esp + 0xc]
// 0086ef0e  51                   push ecx
// 0086ef0f  52                   push edx
// 0086ef10  ff155c1ca400         call dword ptr [0xa41c5c]
// 0086ef16  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0086ef1c  83fa01               cmp edx, 1
// 0086ef1f  0f8e71ffffff         jle 0x86ee96
// 0086ef25  33c9                 xor ecx, ecx
// 0086ef27  85d2                 test edx, edx
// 0086ef29  0f8e67ffffff         jle 0x86ee96
// 0086ef2f  90                   nop 
// 0086ef30  85c9                 test ecx, ecx
// 0086ef32  7c0f                 jl 0x86ef43
// 0086ef34  3bca                 cmp ecx, edx
// 0086ef36  7d0b                 jge 0x86ef43
// 0086ef38  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0086ef3e  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0086ef41  eb02                 jmp 0x86ef45
// 0086ef43  33c0                 xor eax, eax
// 0086ef45  8d5fa8               lea ebx, [edi - 0x58]
// 0086ef48  395840               cmp dword ptr [eax + 0x40], ebx
// 0086ef4b  740a                 je 0x86ef57
// 0086ef4d  41                   inc ecx
// 0086ef4e  3bca                 cmp ecx, edx
// 0086ef50  7cde                 jl 0x86ef30
// 0086ef52  e93fffffff           jmp 0x86ee96
// 0086ef57  8b5044               mov edx, dword ptr [eax + 0x44]
// 0086ef5a  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0086ef5d  8b7048               mov esi, dword ptr [eax + 0x48]
// 0086ef60  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086ef64  8b4050               mov eax, dword ptr [eax + 0x50]
// 0086ef67  2bca                 sub ecx, edx
// 0086ef69  03d7                 add edx, edi
// 0086ef6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086ef6f  2bc6                 sub eax, esi
// 0086ef71  03f7                 add esi, edi
// 0086ef73  03ca                 add ecx, edx
// 0086ef75  03c6                 add eax, esi
// 0086ef77  8954240c             mov dword ptr [esp + 0xc], edx
// 0086ef7b  89742410             mov dword ptr [esp + 0x10], esi
// 0086ef7f  e91affffff           jmp 0x86ee9e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
