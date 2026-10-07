// roc 2011-06 00530440  unit: RBX::Network::ProfiledRakPeer  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00530440
//
// 00530440  56                   push esi
// 00530441  8bf1                 mov esi, ecx
// 00530443  8b4608               mov eax, dword ptr [esi + 8]
// 00530446  57                   push edi
// 00530447  394604               cmp dword ptr [esi + 4], eax
// 0053044a  7578                 jne 0x5304c4
// 0053044c  85c0                 test eax, eax
// 0053044e  7509                 jne 0x530459
// 00530450  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00530457  eb05                 jmp 0x53045e
// 00530459  03c0                 add eax, eax
// 0053045b  894608               mov dword ptr [esi + 8], eax
// 0053045e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00530462  8b542414             mov edx, dword ptr [esp + 0x14]
// 00530466  8b4608               mov eax, dword ptr [esi + 8]
// 00530469  53                   push ebx
// 0053046a  51                   push ecx
// 0053046b  52                   push edx
// 0053046c  50                   push eax
// 0053046d  e86ee4ffff           call 0x52e8e0
// 00530472  33d2                 xor edx, edx
// 00530474  83c40c               add esp, 0xc
// 00530477  8bf8                 mov edi, eax
// 00530479  395604               cmp dword ptr [esi + 4], edx
// 0053047c  7620                 jbe 0x53049e
// 0053047e  8bff                 mov edi, edi
// 00530480  8b06                 mov eax, dword ptr [esi]
// 00530482  8d0cd500000000       lea ecx, [edx*8]
// 00530489  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0053048c  03c1                 add eax, ecx
// 0053048e  891c39               mov dword ptr [ecx + edi], ebx
// 00530491  8b4004               mov eax, dword ptr [eax + 4]
// 00530494  42                   inc edx
// 00530495  89443904             mov dword ptr [ecx + edi + 4], eax
// 00530499  3b5604               cmp edx, dword ptr [esi + 4]
// 0053049c  72e2                 jb 0x530480
// 0053049e  8b06                 mov eax, dword ptr [esi]
// 005304a0  85c0                 test eax, eax
// 005304a2  741d                 je 0x5304c1
// 005304a4  8b48fc               mov ecx, dword ptr [eax - 4]
// 005304a7  8d58fc               lea ebx, [eax - 4]
// 005304aa  6840b68600           push 0x86b640
// 005304af  51                   push ecx
// 005304b0  6a08                 push 8
// 005304b2  50                   push eax
// 005304b3  e820ad2d00           call 0x80b1d8
// 005304b8  53                   push ebx
// 005304b9  e8469e2d00           call 0x80a304
// 005304be  83c404               add esp, 4
// 005304c1  893e                 mov dword ptr [esi], edi
// 005304c3  5b                   pop ebx
// 005304c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005304c7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005304cb  3bca                 cmp ecx, edx
// 005304cd  7417                 je 0x5304e6
// 005304cf  90                   nop 
// 005304d0  8b06                 mov eax, dword ptr [esi]
// 005304d2  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 005304d6  8d04c8               lea eax, [eax + ecx*8]
// 005304d9  8938                 mov dword ptr [eax], edi
// 005304db  8b78fc               mov edi, dword ptr [eax - 4]
// 005304de  49                   dec ecx
// 005304df  897804               mov dword ptr [eax + 4], edi
// 005304e2  3bca                 cmp ecx, edx
// 005304e4  75ea                 jne 0x5304d0
// 005304e6  8b0e                 mov ecx, dword ptr [esi]
// 005304e8  8d04d1               lea eax, [ecx + edx*8]
// 005304eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005304ef  8b11                 mov edx, dword ptr [ecx]
// 005304f1  8910                 mov dword ptr [eax], edx
// 005304f3  8b4904               mov ecx, dword ptr [ecx + 4]
// 005304f6  894804               mov dword ptr [eax + 4], ecx
// 005304f9  ff4604               inc dword ptr [esi + 4]
// 005304fc  5f                   pop edi
// 005304fd  5e                   pop esi
// 005304fe  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@Uuint24_t@RakNet@@@DataStructures@@@DataStructures@@QAEXABU?$RangeNode@Uuint24_t@RakNet@@@2@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
