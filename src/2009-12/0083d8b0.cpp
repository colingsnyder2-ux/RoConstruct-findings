// roc 2009-12 0083d8b0  unit: CXTPCustomizeSheet  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d8b0
//
// 0083d8b0  6aff                 push -1
// 0083d8b2  68f8c89500           push 0x95c8f8
// 0083d8b7  64a100000000         mov eax, dword ptr fs:[0]
// 0083d8bd  50                   push eax
// 0083d8be  51                   push ecx
// 0083d8bf  56                   push esi
// 0083d8c0  a10052b600           mov eax, dword ptr [0xb65200]
// 0083d8c5  33c4                 xor eax, esp
// 0083d8c7  50                   push eax
// 0083d8c8  8d44240c             lea eax, [esp + 0xc]
// 0083d8cc  64a300000000         mov dword ptr fs:[0], eax
// 0083d8d2  8bf1                 mov esi, ecx
// 0083d8d4  89742408             mov dword ptr [esp + 8], esi
// 0083d8d8  c706ac8a9f00         mov dword ptr [esi], 0x9f8aac
// 0083d8de  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0083d8e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083d8ec  85c9                 test ecx, ecx
// 0083d8ee  7409                 je 0x83d8f9
// 0083d8f0  8b01                 mov eax, dword ptr [ecx]
// 0083d8f2  8b5004               mov edx, dword ptr [eax + 4]
// 0083d8f5  6a01                 push 1
// 0083d8f7  ffd2                 call edx
// 0083d8f9  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0083d8ff  85c9                 test ecx, ecx
// 0083d901  7409                 je 0x83d90c
// 0083d903  8b01                 mov eax, dword ptr [ecx]
// 0083d905  8b5004               mov edx, dword ptr [eax + 4]
// 0083d908  6a01                 push 1
// 0083d90a  ffd2                 call edx
// 0083d90c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0083d912  e8c564fbff           call 0x7f3ddc
// 0083d917  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0083d91d  e8ba64fbff           call 0x7f3ddc
// 0083d922  8bce                 mov ecx, esi
// 0083d924  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0083d92c  e8ad8e0e00           call 0x9267de
// 0083d931  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083d935  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d93c  59                   pop ecx
// 0083d93d  5e                   pop esi
// 0083d93e  83c410               add esp, 0x10
// 0083d941  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCustomizeSheet@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp