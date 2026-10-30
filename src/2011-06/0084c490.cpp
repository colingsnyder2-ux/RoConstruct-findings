// roc 2011-06 0084c490  unit: CXTPControlEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c490
//
// 0084c490  56                   push esi
// 0084c491  8b742408             mov esi, dword ptr [esp + 8]
// 0084c495  57                   push edi
// 0084c496  56                   push esi
// 0084c497  8bf9                 mov edi, ecx
// 0084c499  e852faffff           call 0x84bef0
// 0084c49e  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 0084c4a2  762b                 jbe 0x84c4cf
// 0084c4a4  6a00                 push 0
// 0084c4a6  8d8778010000         lea eax, [edi + 0x178]
// 0084c4ac  50                   push eax
// 0084c4ad  68847cac00           push 0xac7c84
// 0084c4b2  56                   push esi
// 0084c4b3  e8f83a0100           call 0x85ffb0
// 0084c4b8  6a00                 push 0
// 0084c4ba  8d8f60010000         lea ecx, [edi + 0x160]
// 0084c4c0  51                   push ecx
// 0084c4c1  68f06fab00           push 0xab6ff0
// 0084c4c6  56                   push esi
// 0084c4c7  e8843a0100           call 0x85ff50
// 0084c4cc  83c420               add esp, 0x20
// 0084c4cf  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 0084c4d3  7617                 jbe 0x84c4ec
// 0084c4d5  6a00                 push 0
// 0084c4d7  8d977c010000         lea edx, [edi + 0x17c]
// 0084c4dd  52                   push edx
// 0084c4de  68787cac00           push 0xac7c78
// 0084c4e3  56                   push esi
// 0084c4e4  e8c73a0100           call 0x85ffb0
// 0084c4e9  83c410               add esp, 0x10
// 0084c4ec  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 0084c4f0  762e                 jbe 0x84c520
// 0084c4f2  68cabea500           push 0xa5beca
// 0084c4f7  8d878c010000         lea eax, [edi + 0x18c]
// 0084c4fd  50                   push eax
// 0084c4fe  68447cac00           push 0xac7c44
// 0084c503  56                   push esi
// 0084c504  e8073b0100           call 0x860010
// 0084c509  6a00                 push 0
// 0084c50b  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 0084c511  51                   push ecx
// 0084c512  682c7cac00           push 0xac7c2c
// 0084c517  56                   push esi
// 0084c518  e8333a0100           call 0x85ff50
// 0084c51d  83c420               add esp, 0x20
// 0084c520  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0084c524  7617                 jbe 0x84c53d
// 0084c526  6a00                 push 0
// 0084c528  8d97a8010000         lea edx, [edi + 0x1a8]
// 0084c52e  52                   push edx
// 0084c52f  68f07bac00           push 0xac7bf0
// 0084c534  56                   push esi
// 0084c535  e8163a0100           call 0x85ff50
// 0084c53a  83c410               add esp, 0x10
// 0084c53d  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 0084c541  7617                 jbe 0x84c55a
// 0084c543  6a00                 push 0
// 0084c545  8d87ac010000         lea eax, [edi + 0x1ac]
// 0084c54b  50                   push eax
// 0084c54c  68687cac00           push 0xac7c68
// 0084c551  56                   push esi
// 0084c552  e8593a0100           call 0x85ffb0
// 0084c557  83c410               add esp, 0x10
// 0084c55a  837e2800             cmp dword ptr [esi + 0x28], 0
// 0084c55e  740e                 je 0x84c56e
// 0084c560  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 0084c566  51                   push ecx
// 0084c567  8bcf                 mov ecx, edi
// 0084c569  e832f70400           call 0x89bca0
// 0084c56e  5f                   pop edi
// 0084c56f  5e                   pop esi
// 0084c570  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
