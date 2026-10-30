// roc 2009-12 008e21b0  unit: CXTColorSelectorCtrl  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e21b0
//
// 008e21b0  6aff                 push -1
// 008e21b2  686d5d9600           push 0x965d6d
// 008e21b7  64a100000000         mov eax, dword ptr fs:[0]
// 008e21bd  50                   push eax
// 008e21be  51                   push ecx
// 008e21bf  53                   push ebx
// 008e21c0  56                   push esi
// 008e21c1  57                   push edi
// 008e21c2  a10052b600           mov eax, dword ptr [0xb65200]
// 008e21c7  33c4                 xor eax, esp
// 008e21c9  50                   push eax
// 008e21ca  8d442414             lea eax, [esp + 0x14]
// 008e21ce  64a300000000         mov dword ptr fs:[0], eax
// 008e21d4  8bf1                 mov esi, ecx
// 008e21d6  89742410             mov dword ptr [esp + 0x10], esi
// 008e21da  8d5e54               lea ebx, [esi + 0x54]
// 008e21dd  c70674bea000         mov dword ptr [esi], 0xa0be74
// 008e21e3  c70364bea000         mov dword ptr [ebx], 0xa0be64
// 008e21e9  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008e21f0  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 008e21f8  7423                 je 0x8e221d
// 008e21fa  8dbe3c010000         lea edi, [esi + 0x13c]
// 008e2200  8bcf                 mov ecx, edi
// 008e2202  e819feffff           call 0x8e2020
// 008e2207  85c0                 test eax, eax
// 008e2209  7409                 je 0x8e2214
// 008e220b  50                   push eax
// 008e220c  e84916f1ff           call 0x7f385a
// 008e2211  83c404               add esp, 4
// 008e2214  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008e221b  75e3                 jne 0x8e2200
// 008e221d  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e2223  c644241c03           mov byte ptr [esp + 0x1c], 3
// 008e2228  e833feffff           call 0x8e2060
// 008e222d  8d8e28010000         lea ecx, [esi + 0x128]
// 008e2233  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008e2238  e8c3cdf8ff           call 0x86f000
// 008e223d  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e2243  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008e2248  e8f9490400           call 0x926c46
// 008e224d  8bcb                 mov ecx, ebx
// 008e224f  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008e2254  e8977ff7ff           call 0x85a1f0
// 008e2259  8bce                 mov ecx, esi
// 008e225b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008e2263  e8ae20f1ff           call 0x7f4316
// 008e2268  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e226c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2273  59                   pop ecx
// 008e2274  5f                   pop edi
// 008e2275  5e                   pop esi
// 008e2276  5b                   pop ebx
// 008e2277  83c410               add esp, 0x10
// 008e227a  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorSelectorCtrl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp