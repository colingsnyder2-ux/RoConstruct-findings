// from server: 100% by auto
// roc 2007-08 00690080  unit: CXTPDockingPane  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690080
//
// 00690080  83ec10               sub esp, 0x10
// 00690083  53                   push ebx
// 00690084  56                   push esi
// 00690085  57                   push edi
// 00690086  8d442430             lea eax, [esp + 0x30]
// 0069008a  50                   push eax
// 0069008b  8bf9                 mov edi, ecx
// 0069008d  e83e13feff           call 0x6713d0
// 00690092  83f801               cmp eax, 1
// 00690095  7546                 jne 0x6900dd
// 00690097  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0069009a  8d4c240c             lea ecx, [esp + 0xc]
// 0069009e  51                   push ecx
// 0069009f  52                   push edx
// 006900a0  ff15d4ed7700         call dword ptr [0x77edd4]
// 006900a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006900aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006900ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006900b2  8b542420             mov edx, dword ptr [esp + 0x20]
// 006900b6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006900ba  8932                 mov dword ptr [edx], esi
// 006900bc  8b542410             mov edx, dword ptr [esp + 0x10]
// 006900c0  2bce                 sub ecx, esi
// 006900c2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006900c6  8917                 mov dword ptr [edi], edx
// 006900c8  890e                 mov dword ptr [esi], ecx
// 006900ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006900ce  5f                   pop edi
// 006900cf  2bc2                 sub eax, edx
// 006900d1  5e                   pop esi
// 006900d2  8901                 mov dword ptr [ecx], eax
// 006900d4  33c0                 xor eax, eax
// 006900d6  5b                   pop ebx
// 006900d7  83c410               add esp, 0x10
// 006900da  c22000               ret 0x20
// 006900dd  8d442430             lea eax, [esp + 0x30]
// 006900e1  50                   push eax
// 006900e2  8bcf                 mov ecx, edi
// 006900e4  e8e712feff           call 0x6713d0
// 006900e9  85c0                 test eax, eax
// 006900eb  740e                 je 0x6900fb
// 006900ed  5f                   pop edi
// 006900ee  5e                   pop esi
// 006900ef  b857000780           mov eax, 0x80070057
// 006900f4  5b                   pop ebx
// 006900f5  83c410               add esp, 0x10
// 006900f8  c22000               ret 0x20
// 006900fb  8b47d8               mov eax, dword ptr [edi - 0x28]
// 006900fe  85c0                 test eax, eax
// 00690100  7407                 je 0x690109
// 00690102  8d70ac               lea esi, [eax - 0x54]
// 00690105  85f6                 test esi, esi
// 00690107  750e                 jne 0x690117
// 00690109  5f                   pop edi
// 0069010a  5e                   pop esi
// 0069010b  b801000000           mov eax, 1
// 00690110  5b                   pop ebx
// 00690111  83c410               add esp, 0x10
// 00690114  c22000               ret 0x20
// 00690117  8b5620               mov edx, dword ptr [esi + 0x20]
// 0069011a  8d4c240c             lea ecx, [esp + 0xc]
// 0069011e  51                   push ecx
// 0069011f  52                   push edx
// 00690120  ff15d4ed7700         call dword ptr [0x77edd4]
// 00690126  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0069012c  83fa01               cmp edx, 1
// 0069012f  0f8e71ffffff         jle 0x6900a6
// 00690135  33c9                 xor ecx, ecx
// 00690137  85d2                 test edx, edx
// 00690139  0f8e67ffffff         jle 0x6900a6
// 0069013f  90                   nop 
// 00690140  85c9                 test ecx, ecx
// 00690142  7c0f                 jl 0x690153
// 00690144  3bca                 cmp ecx, edx
// 00690146  7d0b                 jge 0x690153
// 00690148  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0069014e  8b0488               mov eax, dword ptr [eax + ecx*4]
// 00690151  eb02                 jmp 0x690155
// 00690153  33c0                 xor eax, eax
// 00690155  8d5fa8               lea ebx, [edi - 0x58]
// 00690158  395840               cmp dword ptr [eax + 0x40], ebx
// 0069015b  740c                 je 0x690169
// 0069015d  83c101               add ecx, 1
// 00690160  3bca                 cmp ecx, edx
// 00690162  7cdc                 jl 0x690140
// 00690164  e93dffffff           jmp 0x6900a6
// 00690169  8b5044               mov edx, dword ptr [eax + 0x44]
// 0069016c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0069016f  8b7048               mov esi, dword ptr [eax + 0x48]
// 00690172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00690176  8b4050               mov eax, dword ptr [eax + 0x50]
// 00690179  2bca                 sub ecx, edx
// 0069017b  03d7                 add edx, edi
// 0069017d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00690181  2bc6                 sub eax, esi
// 00690183  03f7                 add esi, edi
// 00690185  03ca                 add ecx, edx
// 00690187  03c6                 add eax, esi
// 00690189  8954240c             mov dword ptr [esp + 0xc], edx
// 0069018d  89742410             mov dword ptr [esp + 0x10], esi
// 00690191  e918ffffff           jmp 0x6900ae
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
