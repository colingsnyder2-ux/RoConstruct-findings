// roc 2011-06 00816ea0  unit: CEdit  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816ea0
//
// 00816ea0  51                   push ecx
// 00816ea1  56                   push esi
// 00816ea2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00816ea6  57                   push edi
// 00816ea7  8bf9                 mov edi, ecx
// 00816ea9  81fe25e10000         cmp esi, 0xe125
// 00816eaf  7523                 jne 0x816ed4
// 00816eb1  e862571b00           call 0x9cc618
// 00816eb6  a900080008           test eax, 0x8000800
// 00816ebb  756b                 jne 0x816f28
// 00816ebd  6a01                 push 1
// 00816ebf  ff154c1ba400         call dword ptr [0xa41b4c]
// 00816ec5  85c0                 test eax, eax
// 00816ec7  745f                 je 0x816f28
// 00816ec9  5f                   pop edi
// 00816eca  b801000000           mov eax, 1
// 00816ecf  5e                   pop esi
// 00816ed0  59                   pop ecx
// 00816ed1  c20400               ret 4
// 00816ed4  81fe23e10000         cmp esi, 0xe123
// 00816eda  7413                 je 0x816eef
// 00816edc  81fe22e10000         cmp esi, 0xe122
// 00816ee2  740b                 je 0x816eef
// 00816ee4  5f                   pop edi
// 00816ee5  b801000000           mov eax, 1
// 00816eea  5e                   pop esi
// 00816eeb  59                   pop ecx
// 00816eec  c20400               ret 4
// 00816eef  8b5720               mov edx, dword ptr [edi + 0x20]
// 00816ef2  8d442408             lea eax, [esp + 8]
// 00816ef6  50                   push eax
// 00816ef7  8d4c2414             lea ecx, [esp + 0x14]
// 00816efb  51                   push ecx
// 00816efc  68b0000000           push 0xb0
// 00816f01  52                   push edx
// 00816f02  ff15c019a400         call dword ptr [0xa419c0]
// 00816f08  8b442410             mov eax, dword ptr [esp + 0x10]
// 00816f0c  3b442408             cmp eax, dword ptr [esp + 8]
// 00816f10  7416                 je 0x816f28
// 00816f12  81fe22e10000         cmp esi, 0xe122
// 00816f18  74ca                 je 0x816ee4
// 00816f1a  8bcf                 mov ecx, edi
// 00816f1c  e8f7561b00           call 0x9cc618
// 00816f21  a900080008           test eax, 0x8000800
// 00816f26  74bc                 je 0x816ee4
// 00816f28  5f                   pop edi
// 00816f29  33c0                 xor eax, eax
// 00816f2b  5e                   pop esi
// 00816f2c  59                   pop ecx
// 00816f2d  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?IsCommandEnabled@CXTPCommandBarEditCtrl@@IAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
