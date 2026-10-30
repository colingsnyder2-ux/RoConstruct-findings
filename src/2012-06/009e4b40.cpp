// roc 2012-06 009e4b40  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4b40
//
// 009e4b40  83ec10               sub esp, 0x10
// 009e4b43  53                   push ebx
// 009e4b44  56                   push esi
// 009e4b45  57                   push edi
// 009e4b46  8d442430             lea eax, [esp + 0x30]
// 009e4b4a  50                   push eax
// 009e4b4b  8bf9                 mov edi, ecx
// 009e4b4d  e89e4cfeff           call 0x9c97f0
// 009e4b52  83f801               cmp eax, 1
// 009e4b55  7546                 jne 0x9e4b9d
// 009e4b57  8b575c               mov edx, dword ptr [edi + 0x5c]
// 009e4b5a  8d4c240c             lea ecx, [esp + 0xc]
// 009e4b5e  51                   push ecx
// 009e4b5f  52                   push edx
// 009e4b60  ff15f83ab200         call dword ptr [0xb23af8]
// 009e4b66  8b442418             mov eax, dword ptr [esp + 0x18]
// 009e4b6a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e4b6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009e4b72  8b542420             mov edx, dword ptr [esp + 0x20]
// 009e4b76  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009e4b7a  8932                 mov dword ptr [edx], esi
// 009e4b7c  8b542410             mov edx, dword ptr [esp + 0x10]
// 009e4b80  2bce                 sub ecx, esi
// 009e4b82  8b742428             mov esi, dword ptr [esp + 0x28]
// 009e4b86  8917                 mov dword ptr [edi], edx
// 009e4b88  890e                 mov dword ptr [esi], ecx
// 009e4b8a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009e4b8e  5f                   pop edi
// 009e4b8f  2bc2                 sub eax, edx
// 009e4b91  5e                   pop esi
// 009e4b92  8901                 mov dword ptr [ecx], eax
// 009e4b94  33c0                 xor eax, eax
// 009e4b96  5b                   pop ebx
// 009e4b97  83c410               add esp, 0x10
// 009e4b9a  c22000               ret 0x20
// 009e4b9d  8d442430             lea eax, [esp + 0x30]
// 009e4ba1  50                   push eax
// 009e4ba2  8bcf                 mov ecx, edi
// 009e4ba4  e8474cfeff           call 0x9c97f0
// 009e4ba9  85c0                 test eax, eax
// 009e4bab  740e                 je 0x9e4bbb
// 009e4bad  5f                   pop edi
// 009e4bae  5e                   pop esi
// 009e4baf  b857000780           mov eax, 0x80070057
// 009e4bb4  5b                   pop ebx
// 009e4bb5  83c410               add esp, 0x10
// 009e4bb8  c22000               ret 0x20
// 009e4bbb  8b47d8               mov eax, dword ptr [edi - 0x28]
// 009e4bbe  85c0                 test eax, eax
// 009e4bc0  7407                 je 0x9e4bc9
// 009e4bc2  8d70ac               lea esi, [eax - 0x54]
// 009e4bc5  85f6                 test esi, esi
// 009e4bc7  750e                 jne 0x9e4bd7
// 009e4bc9  5f                   pop edi
// 009e4bca  5e                   pop esi
// 009e4bcb  b801000000           mov eax, 1
// 009e4bd0  5b                   pop ebx
// 009e4bd1  83c410               add esp, 0x10
// 009e4bd4  c22000               ret 0x20
// 009e4bd7  8b5620               mov edx, dword ptr [esi + 0x20]
// 009e4bda  8d4c240c             lea ecx, [esp + 0xc]
// 009e4bde  51                   push ecx
// 009e4bdf  52                   push edx
// 009e4be0  ff15f83ab200         call dword ptr [0xb23af8]
// 009e4be6  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 009e4bec  83fa01               cmp edx, 1
// 009e4bef  0f8e71ffffff         jle 0x9e4b66
// 009e4bf5  33c9                 xor ecx, ecx
// 009e4bf7  85d2                 test edx, edx
// 009e4bf9  0f8e67ffffff         jle 0x9e4b66
// 009e4bff  90                   nop 
// 009e4c00  85c9                 test ecx, ecx
// 009e4c02  7c0f                 jl 0x9e4c13
// 009e4c04  3bca                 cmp ecx, edx
// 009e4c06  7d0b                 jge 0x9e4c13
// 009e4c08  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 009e4c0e  8b0488               mov eax, dword ptr [eax + ecx*4]
// 009e4c11  eb02                 jmp 0x9e4c15
// 009e4c13  33c0                 xor eax, eax
// 009e4c15  8d5fa8               lea ebx, [edi - 0x58]
// 009e4c18  395840               cmp dword ptr [eax + 0x40], ebx
// 009e4c1b  740a                 je 0x9e4c27
// 009e4c1d  41                   inc ecx
// 009e4c1e  3bca                 cmp ecx, edx
// 009e4c20  7cde                 jl 0x9e4c00
// 009e4c22  e93fffffff           jmp 0x9e4b66
// 009e4c27  8b5044               mov edx, dword ptr [eax + 0x44]
// 009e4c2a  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 009e4c2d  8b7048               mov esi, dword ptr [eax + 0x48]
// 009e4c30  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e4c34  8b4050               mov eax, dword ptr [eax + 0x50]
// 009e4c37  2bca                 sub ecx, edx
// 009e4c39  03d7                 add edx, edi
// 009e4c3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009e4c3f  2bc6                 sub eax, esi
// 009e4c41  03f7                 add esi, edi
// 009e4c43  03ca                 add ecx, edx
// 009e4c45  03c6                 add eax, esi
// 009e4c47  8954240c             mov dword ptr [esp + 0xc], edx
// 009e4c4b  89742410             mov dword ptr [esp + 0x10], esi
// 009e4c4f  e91affffff           jmp 0x9e4b6e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
