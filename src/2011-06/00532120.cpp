// roc 2011-06 00532120  unit: seg_00530000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00532120
//
// 00532120  6aff                 push -1
// 00532122  6828e69d00           push 0x9de628
// 00532127  64a100000000         mov eax, dword ptr fs:[0]
// 0053212d  50                   push eax
// 0053212e  64892500000000       mov dword ptr fs:[0], esp
// 00532135  51                   push ecx
// 00532136  56                   push esi
// 00532137  8bf1                 mov esi, ecx
// 00532139  57                   push edi
// 0053213a  89742408             mov dword ptr [esp + 8], esi
// 0053213e  837e0800             cmp dword ptr [esi + 8], 0
// 00532142  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053214a  7437                 je 0x532183
// 0053214c  8b06                 mov eax, dword ptr [esi]
// 0053214e  85c0                 test eax, eax
// 00532150  741d                 je 0x53216f
// 00532152  8b48fc               mov ecx, dword ptr [eax - 4]
// 00532155  8d78fc               lea edi, [eax - 4]
// 00532158  6840b68600           push 0x86b640
// 0053215d  51                   push ecx
// 0053215e  6a08                 push 8
// 00532160  50                   push eax
// 00532161  e872902d00           call 0x80b1d8
// 00532166  57                   push edi
// 00532167  e898812d00           call 0x80a304
// 0053216c  83c404               add esp, 4
// 0053216f  c7460800000000       mov dword ptr [esi + 8], 0
// 00532176  c70600000000         mov dword ptr [esi], 0
// 0053217c  c7460400000000       mov dword ptr [esi + 4], 0
// 00532183  837e0800             cmp dword ptr [esi + 8], 0
// 00532187  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053218f  7623                 jbe 0x5321b4
// 00532191  8b36                 mov esi, dword ptr [esi]
// 00532193  85f6                 test esi, esi
// 00532195  741d                 je 0x5321b4
// 00532197  8b56fc               mov edx, dword ptr [esi - 4]
// 0053219a  6840b68600           push 0x86b640
// 0053219f  8d7efc               lea edi, [esi - 4]
// 005321a2  52                   push edx
// 005321a3  6a08                 push 8
// 005321a5  56                   push esi
// 005321a6  e82d902d00           call 0x80b1d8
// 005321ab  57                   push edi
// 005321ac  e853812d00           call 0x80a304
// 005321b1  83c404               add esp, 4
// 005321b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005321b8  5f                   pop edi
// 005321b9  5e                   pop esi
// 005321ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005321c1  83c410               add esp, 0x10
// 005321c4  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@UCloudKey@RakNet@@U12@$1?CloudKeyComp@2@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
