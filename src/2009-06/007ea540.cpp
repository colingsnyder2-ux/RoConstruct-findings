// roc 2009-06 007ea540  unit: CXTPCustomizeToolbarsPage  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ea540
//
// 007ea540  53                   push ebx
// 007ea541  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 007ea547  56                   push esi
// 007ea548  6a00                 push 0
// 007ea54a  6a00                 push 0
// 007ea54c  8bf1                 mov esi, ecx
// 007ea54e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 007ea554  6888010000           push 0x188
// 007ea559  50                   push eax
// 007ea55a  ffd3                 call ebx
// 007ea55c  83f8ff               cmp eax, -1
// 007ea55f  7469                 je 0x7ea5ca
// 007ea561  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 007ea567  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 007ea56d  57                   push edi
// 007ea56e  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 007ea574  6a00                 push 0
// 007ea576  50                   push eax
// 007ea577  6899010000           push 0x199
// 007ea57c  52                   push edx
// 007ea57d  ffd3                 call ebx
// 007ea57f  85c0                 test eax, eax
// 007ea581  7c43                 jl 0x7ea5c6
// 007ea583  3b8784000000         cmp eax, dword ptr [edi + 0x84]
// 007ea589  7d3b                 jge 0x7ea5c6
// 007ea58b  50                   push eax
// 007ea58c  8bcf                 mov ecx, edi
// 007ea58e  e89dfaf3ff           call 0x72a030
// 007ea593  8bb888010000         mov edi, dword ptr [eax + 0x188]
// 007ea599  57                   push edi
// 007ea59a  8d8efc000000         lea ecx, [esi + 0xfc]
// 007ea5a0  e811ebf2ff           call 0x7190b6
// 007ea5a5  33c0                 xor eax, eax
// 007ea5a7  85ff                 test edi, edi
// 007ea5a9  0f94c0               sete al
// 007ea5ac  8d8e50010000         lea ecx, [esi + 0x150]
// 007ea5b2  8bf8                 mov edi, eax
// 007ea5b4  57                   push edi
// 007ea5b5  e8fceaf2ff           call 0x7190b6
// 007ea5ba  57                   push edi
// 007ea5bb  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 007ea5c1  e8f0eaf2ff           call 0x7190b6
// 007ea5c6  5f                   pop edi
// 007ea5c7  5e                   pop esi
// 007ea5c8  5b                   pop ebx
// 007ea5c9  c3                   ret 
// 007ea5ca  6a00                 push 0
// 007ea5cc  8d8efc000000         lea ecx, [esi + 0xfc]
// 007ea5d2  e8dfeaf2ff           call 0x7190b6
// 007ea5d7  6a00                 push 0
// 007ea5d9  8d8e50010000         lea ecx, [esi + 0x150]
// 007ea5df  e8d2eaf2ff           call 0x7190b6
// 007ea5e4  6a00                 push 0
// 007ea5e6  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 007ea5ec  e8c5eaf2ff           call 0x7190b6
// 007ea5f1  5e                   pop esi
// 007ea5f2  5b                   pop ebx
// 007ea5f3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSelectionChanged@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
