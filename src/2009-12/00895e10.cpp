// roc 2009-12 00895e10  unit: CXTPRibbonBar  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895e10
//
// 00895e10  6aff                 push -1
// 00895e12  6837179600           push 0x961737
// 00895e17  64a100000000         mov eax, dword ptr fs:[0]
// 00895e1d  50                   push eax
// 00895e1e  51                   push ecx
// 00895e1f  56                   push esi
// 00895e20  57                   push edi
// 00895e21  a10052b600           mov eax, dword ptr [0xb65200]
// 00895e26  33c4                 xor eax, esp
// 00895e28  50                   push eax
// 00895e29  8d442410             lea eax, [esp + 0x10]
// 00895e2d  64a300000000         mov dword ptr fs:[0], eax
// 00895e33  8bf1                 mov esi, ecx
// 00895e35  8974240c             mov dword ptr [esp + 0xc], esi
// 00895e39  c7063c4ea000         mov dword ptr [esi], 0xa04e3c
// 00895e3f  c746542c4ea000       mov dword ptr [esi + 0x54], 0xa04e2c
// 00895e46  c7465ccc4da000       mov dword ptr [esi + 0x5c], 0xa04dcc
// 00895e4d  c786c4010000b84da000 mov dword ptr [esi + 0x1c4], 0xa04db8
// 00895e57  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00895e5d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00895e65  85c0                 test eax, eax
// 00895e67  740b                 je 0x895e74
// 00895e69  8d8884010000         lea ecx, [eax + 0x184]
// 00895e6f  e8fc950300           call 0x8cf470
// 00895e74  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00895e7a  85c9                 test ecx, ecx
// 00895e7c  7405                 je 0x895e83
// 00895e7e  e85df4faff           call 0x8452e0
// 00895e83  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00895e89  85c9                 test ecx, ecx
// 00895e8b  740f                 je 0x895e9c
// 00895e8d  e84adff5ff           call 0x7f3ddc
// 00895e92  c7866402000000000000 mov dword ptr [esi + 0x264], 0
// 00895e9c  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00895ea2  85c9                 test ecx, ecx
// 00895ea4  7412                 je 0x895eb8
// 00895ea6  8b01                 mov eax, dword ptr [ecx]
// 00895ea8  8b10                 mov edx, dword ptr [eax]
// 00895eaa  6a01                 push 1
// 00895eac  ffd2                 call edx
// 00895eae  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 00895eb8  8bbe84020000         mov edi, dword ptr [esi + 0x284]
// 00895ebe  85ff                 test edi, edi
// 00895ec0  741a                 je 0x895edc
// 00895ec2  8bcf                 mov ecx, edi
// 00895ec4  e8874c0500           call 0x8eab50
// 00895ec9  57                   push edi
// 00895eca  e88bd9f5ff           call 0x7f385a
// 00895ecf  83c404               add esp, 4
// 00895ed2  c7868402000000000000 mov dword ptr [esi + 0x284], 0
// 00895edc  8d8e94020000         lea ecx, [esi + 0x294]
// 00895ee2  ff15c0de9800         call dword ptr [0x98dec0]
// 00895ee8  8bce                 mov ecx, esi
// 00895eea  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00895ef2  e879ddffff           call 0x893c70
// 00895ef7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00895efb  64890d00000000       mov dword ptr fs:[0], ecx
// 00895f02  59                   pop ecx
// 00895f03  5f                   pop edi
// 00895f04  5e                   pop esi
// 00895f05  83c410               add esp, 0x10
// 00895f08  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonBar@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp