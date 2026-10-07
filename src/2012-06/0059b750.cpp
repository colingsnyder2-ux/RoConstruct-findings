// roc 2012-06 0059b750  unit: VAuthoringSettings::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b750
//
// 0059b750  56                   push esi
// 0059b751  8bf1                 mov esi, ecx
// 0059b753  8b4608               mov eax, dword ptr [esi + 8]
// 0059b756  394604               cmp dword ptr [esi + 4], eax
// 0059b759  0f8585000000         jne 0x59b7e4
// 0059b75f  85c0                 test eax, eax
// 0059b761  7509                 jne 0x59b76c
// 0059b763  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059b76a  eb05                 jmp 0x59b771
// 0059b76c  03c0                 add eax, eax
// 0059b76e  894608               mov dword ptr [esi + 8], eax
// 0059b771  8b4608               mov eax, dword ptr [esi + 8]
// 0059b774  53                   push ebx
// 0059b775  85c0                 test eax, eax
// 0059b777  7504                 jne 0x59b77d
// 0059b779  33db                 xor ebx, ebx
// 0059b77b  eb1b                 jmp 0x59b798
// 0059b77d  33c9                 xor ecx, ecx
// 0059b77f  ba10000000           mov edx, 0x10
// 0059b784  f7e2                 mul edx
// 0059b786  0f90c1               seto cl
// 0059b789  f7d9                 neg ecx
// 0059b78b  0bc8                 or ecx, eax
// 0059b78d  51                   push ecx
// 0059b78e  e85d6c3e00           call 0x9823f0
// 0059b793  83c404               add esp, 4
// 0059b796  8bd8                 mov ebx, eax
// 0059b798  833e00               cmp dword ptr [esi], 0
// 0059b79b  7444                 je 0x59b7e1
// 0059b79d  33d2                 xor edx, edx
// 0059b79f  395604               cmp dword ptr [esi + 4], edx
// 0059b7a2  7632                 jbe 0x59b7d6
// 0059b7a4  55                   push ebp
// 0059b7a5  57                   push edi
// 0059b7a6  bff8ffffff           mov edi, 0xfffffff8
// 0059b7ab  8d4b08               lea ecx, [ebx + 8]
// 0059b7ae  2bfb                 sub edi, ebx
// 0059b7b0  8d040f               lea eax, [edi + ecx]
// 0059b7b3  0306                 add eax, dword ptr [esi]
// 0059b7b5  42                   inc edx
// 0059b7b6  8b28                 mov ebp, dword ptr [eax]
// 0059b7b8  8969f8               mov dword ptr [ecx - 8], ebp
// 0059b7bb  8b6804               mov ebp, dword ptr [eax + 4]
// 0059b7be  8969fc               mov dword ptr [ecx - 4], ebp
// 0059b7c1  8b6808               mov ebp, dword ptr [eax + 8]
// 0059b7c4  8929                 mov dword ptr [ecx], ebp
// 0059b7c6  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059b7c9  894104               mov dword ptr [ecx + 4], eax
// 0059b7cc  83c110               add ecx, 0x10
// 0059b7cf  3b5604               cmp edx, dword ptr [esi + 4]
// 0059b7d2  72dc                 jb 0x59b7b0
// 0059b7d4  5f                   pop edi
// 0059b7d5  5d                   pop ebp
// 0059b7d6  8b0e                 mov ecx, dword ptr [esi]
// 0059b7d8  51                   push ecx
// 0059b7d9  e8dc6b3e00           call 0x9823ba
// 0059b7de  83c404               add esp, 4
// 0059b7e1  891e                 mov dword ptr [esi], ebx
// 0059b7e3  5b                   pop ebx
// 0059b7e4  8b4604               mov eax, dword ptr [esi + 4]
// 0059b7e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b7eb  8b11                 mov edx, dword ptr [ecx]
// 0059b7ed  c1e004               shl eax, 4
// 0059b7f0  0306                 add eax, dword ptr [esi]
// 0059b7f2  8910                 mov dword ptr [eax], edx
// 0059b7f4  8b5104               mov edx, dword ptr [ecx + 4]
// 0059b7f7  895004               mov dword ptr [eax + 4], edx
// 0059b7fa  8b5108               mov edx, dword ptr [ecx + 8]
// 0059b7fd  895008               mov dword ptr [eax + 8], edx
// 0059b800  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059b803  89480c               mov dword ptr [eax + 0xc], ecx
// 0059b806  ff4604               inc dword ptr [esi + 4]
// 0059b809  5e                   pop esi
// 0059b80a  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@UUnreliableWithAckReceiptNode@ReliabilityLayer@RakNet@@@DataStructures@@QAEXABUUnreliableWithAckReceiptNode@ReliabilityLayer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
