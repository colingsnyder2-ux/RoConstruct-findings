// roc 2009-12 008e2090  unit: CXTColorSelectorCtrl::PAUCOLOR_CELL::?$CList  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2090
//
// 008e2090  6aff                 push -1
// 008e2092  68135d9600           push 0x965d13
// 008e2097  64a100000000         mov eax, dword ptr fs:[0]
// 008e209d  50                   push eax
// 008e209e  51                   push ecx
// 008e209f  53                   push ebx
// 008e20a0  56                   push esi
// 008e20a1  57                   push edi
// 008e20a2  a10052b600           mov eax, dword ptr [0xb65200]
// 008e20a7  33c4                 xor eax, esp
// 008e20a9  50                   push eax
// 008e20aa  8d442414             lea eax, [esp + 0x14]
// 008e20ae  64a300000000         mov dword ptr fs:[0], eax
// 008e20b4  8bf1                 mov esi, ecx
// 008e20b6  89742410             mov dword ptr [esp + 0x10], esi
// 008e20ba  e88920f1ff           call 0x7f4148
// 008e20bf  33db                 xor ebx, ebx
// 008e20c1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008e20c5  8d7e54               lea edi, [esi + 0x54]
// 008e20c8  e8b3f7ffff           call 0x8e1880
// 008e20cd  50                   push eax
// 008e20ce  8bcf                 mov ecx, edi
// 008e20d0  e85b86f7ff           call 0x85a730
// 008e20d5  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e20db  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008e20e0  c70674bea000         mov dword ptr [esi], 0xa0be74
// 008e20e6  c70764bea000         mov dword ptr [edi], 0xa0be64
// 008e20ec  e83d4b0400           call 0x926c2e
// 008e20f1  8d8e28010000         lea ecx, [esi + 0x128]
// 008e20f7  e8e4cef8ff           call 0x86efe0
// 008e20fc  6a0a                 push 0xa
// 008e20fe  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e2104  e8e7feffff           call 0x8e1ff0
// 008e2109  33c0                 xor eax, eax
// 008e210b  33c9                 xor ecx, ecx
// 008e210d  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008e2113  b812000000           mov eax, 0x12
// 008e2118  898eac000000         mov dword ptr [esi + 0xac], ecx
// 008e211e  8bc8                 mov ecx, eax
// 008e2120  89467c               mov dword ptr [esi + 0x7c], eax
// 008e2123  b8000000ff           mov eax, 0xff000000
// 008e2128  83caff               or edx, 0xffffffff
// 008e212b  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 008e2131  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008e2137  33c0                 xor eax, eax
// 008e2139  898694000000         mov dword ptr [esi + 0x94], eax
// 008e213f  898e80000000         mov dword ptr [esi + 0x80], ecx
// 008e2145  33c9                 xor ecx, ecx
// 008e2147  895670               mov dword ptr [esi + 0x70], edx
// 008e214a  895674               mov dword ptr [esi + 0x74], edx
// 008e214d  33d2                 xor edx, edx
// 008e214f  898e98000000         mov dword ptr [esi + 0x98], ecx
// 008e2155  33ff                 xor edi, edi
// 008e2157  89969c000000         mov dword ptr [esi + 0x9c], edx
// 008e215d  899e58010000         mov dword ptr [esi + 0x158], ebx
// 008e2163  c7466c08000000       mov dword ptr [esi + 0x6c], 8
// 008e216a  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008e2170  895e78               mov dword ptr [esi + 0x78], ebx
// 008e2173  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 008e2179  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 008e217f  899e60010000         mov dword ptr [esi + 0x160], ebx
// 008e2185  8bc6                 mov eax, esi
// 008e2187  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e218b  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2192  59                   pop ecx
// 008e2193  5f                   pop edi
// 008e2194  5e                   pop esi
// 008e2195  5b                   pop ebx
// 008e2196  83c410               add esp, 0x10
// 008e2199  c3                   ret 
// copied from an identical function in another client (function ??0CXTColorSelectorCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp