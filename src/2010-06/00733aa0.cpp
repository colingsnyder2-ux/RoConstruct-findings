// roc 2010-06 00733aa0  unit: seg_00730000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733aa0
//
// 00733aa0  83ec3c               sub esp, 0x3c
// 00733aa3  56                   push esi
// 00733aa4  8b7714               mov esi, dword ptr [edi + 0x14]
// 00733aa7  8b4604               mov eax, dword ptr [esi + 4]
// 00733aaa  83780806             cmp dword ptr [eax + 8], 6
// 00733aae  7559                 jne 0x733b09
// 00733ab0  8b00                 mov eax, dword ptr [eax]
// 00733ab2  80780600             cmp byte ptr [eax + 6], 0
// 00733ab6  7551                 jne 0x733b09
// 00733ab8  53                   push ebx
// 00733ab9  8bc6                 mov eax, esi
// 00733abb  8bd7                 mov edx, edi
// 00733abd  e88ef4ffff           call 0x732f50
// 00733ac2  8b7604               mov esi, dword ptr [esi + 4]
// 00733ac5  837e0806             cmp dword ptr [esi + 8], 6
// 00733ac9  8bd8                 mov ebx, eax
// 00733acb  750d                 jne 0x733ada
// 00733acd  8b36                 mov esi, dword ptr [esi]
// 00733acf  807e0600             cmp byte ptr [esi + 6], 0
// 00733ad3  7505                 jne 0x733ada
// 00733ad5  8b4610               mov eax, dword ptr [esi + 0x10]
// 00733ad8  eb02                 jmp 0x733adc
// 00733ada  33c0                 xor eax, eax
// 00733adc  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00733adf  6a3c                 push 0x3c
// 00733ae1  83c110               add ecx, 0x10
// 00733ae4  51                   push ecx
// 00733ae5  8d542410             lea edx, [esp + 0x10]
// 00733ae9  52                   push edx
// 00733aea  e811f3ffff           call 0x732e00
// 00733aef  8b442454             mov eax, dword ptr [esp + 0x54]
// 00733af3  50                   push eax
// 00733af4  53                   push ebx
// 00733af5  8d4c241c             lea ecx, [esp + 0x1c]
// 00733af9  51                   push ecx
// 00733afa  6808dea400           push 0xa4de08
// 00733aff  57                   push edi
// 00733b00  e8dbf2ffff           call 0x732de0
// 00733b05  83c420               add esp, 0x20
// 00733b08  5b                   pop ebx
// 00733b09  5e                   pop esi
// 00733b0a  83c43c               add esp, 0x3c
// 00733b0d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
