// roc 2009-12 00852960  unit: CXTPPropExchangeArchive  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00852960
//
// 00852960  6aff                 push -1
// 00852962  68b8db9500           push 0x95dbb8
// 00852967  64a100000000         mov eax, dword ptr fs:[0]
// 0085296d  50                   push eax
// 0085296e  53                   push ebx
// 0085296f  56                   push esi
// 00852970  a10052b600           mov eax, dword ptr [0xb65200]
// 00852975  33c4                 xor eax, esp
// 00852977  50                   push eax
// 00852978  8d44240c             lea eax, [esp + 0xc]
// 0085297c  64a300000000         mov dword ptr fs:[0], eax
// 00852982  8bf1                 mov esi, ecx
// 00852984  8b06                 mov eax, dword ptr [esi]
// 00852986  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0085298c  ffd2                 call edx
// 0085298e  85c0                 test eax, eax
// 00852990  7514                 jne 0x8529a6
// 00852992  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00852996  64890d00000000       mov dword ptr fs:[0], ecx
// 0085299d  59                   pop ecx
// 0085299e  5e                   pop esi
// 0085299f  5b                   pop ebx
// 008529a0  83c40c               add esp, 0xc
// 008529a3  c20400               ret 4
// 008529a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008529aa  6a00                 push 0
// 008529ac  50                   push eax
// 008529ad  8d4c2424             lea ecx, [esp + 0x24]
// 008529b1  51                   push ecx
// 008529b2  8bce                 mov ecx, esi
// 008529b4  e8a7fbffff           call 0x852560
// 008529b9  833800               cmp dword ptr [eax], 0
// 008529bc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008529c4  0f94c0               sete al
// 008529c7  84c0                 test al, al
// 008529c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008529cd  0f94c3               sete bl
// 008529d0  85c0                 test eax, eax
// 008529d2  7408                 je 0x8529dc
// 008529d4  8b10                 mov edx, dword ptr [eax]
// 008529d6  50                   push eax
// 008529d7  8b4208               mov eax, dword ptr [edx + 8]
// 008529da  ffd0                 call eax
// 008529dc  33c0                 xor eax, eax
// 008529de  84db                 test bl, bl
// 008529e0  0f95c0               setne al
// 008529e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008529e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008529ee  59                   pop ecx
// 008529ef  5e                   pop esi
// 008529f0  5b                   pop ebx
// 008529f1  83c40c               add esp, 0xc
// 008529f4  c20400               ret 4
// copied from an identical function in another client (function ?IsPropertyExists@CXTPPropExchangeXMLNode@@QAEHPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp