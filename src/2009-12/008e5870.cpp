// roc 2009-12 008e5870  unit: CXTColorSelectorCtrl  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5870
//
// 008e5870  6aff                 push -1
// 008e5872  6828609600           push 0x966028
// 008e5877  64a100000000         mov eax, dword ptr fs:[0]
// 008e587d  50                   push eax
// 008e587e  51                   push ecx
// 008e587f  53                   push ebx
// 008e5880  56                   push esi
// 008e5881  57                   push edi
// 008e5882  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5887  33c4                 xor eax, esp
// 008e5889  50                   push eax
// 008e588a  8d442414             lea eax, [esp + 0x14]
// 008e588e  64a300000000         mov dword ptr fs:[0], eax
// 008e5894  8bf1                 mov esi, ecx
// 008e5896  89742410             mov dword ptr [esp + 0x10], esi
// 008e589a  e8a9e8f0ff           call 0x7f4148
// 008e589f  c70654439f00         mov dword ptr [esi], 0x9f4354
// 008e58a5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e58a9  33ff                 xor edi, edi
// 008e58ab  897c241c             mov dword ptr [esp + 0x1c], edi
// 008e58af  3bc7                 cmp eax, edi
// 008e58b1  7505                 jne 0x8e58b8
// 008e58b3  e8f8faffff           call 0x8e53b0
// 008e58b8  8d5e54               lea ebx, [esi + 0x54]
// 008e58bb  50                   push eax
// 008e58bc  8bcb                 mov ecx, ebx
// 008e58be  e86d4ef7ff           call 0x85a730
// 008e58c3  c7061cc6a000         mov dword ptr [esi], 0xa0c61c
// 008e58c9  c70308c6a000         mov dword ptr [ebx], 0xa0c608
// 008e58cf  c7466c04000000       mov dword ptr [esi + 0x6c], 4
// 008e58d6  c7467008000000       mov dword ptr [esi + 0x70], 8
// 008e58dd  c6467401             mov byte ptr [esi + 0x74], 1
// 008e58e1  897e78               mov dword ptr [esi + 0x78], edi
// 008e58e4  897e7c               mov dword ptr [esi + 0x7c], edi
// 008e58e7  c7868000000011000000 mov dword ptr [esi + 0x80], 0x11
// 008e58f1  89be84000000         mov dword ptr [esi + 0x84], edi
// 008e58f7  89be88000000         mov dword ptr [esi + 0x88], edi
// 008e58fd  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 008e5903  89be90000000         mov dword ptr [esi + 0x90], edi
// 008e5909  89be94000000         mov dword ptr [esi + 0x94], edi
// 008e590f  89be98000000         mov dword ptr [esi + 0x98], edi
// 008e5915  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 008e591b  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 008e5921  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008e5927  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 008e592d  8bc6                 mov eax, esi
// 008e592f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e5933  64890d00000000       mov dword ptr fs:[0], ecx
// 008e593a  59                   pop ecx
// 008e593b  5f                   pop edi
// 008e593c  5e                   pop esi
// 008e593d  5b                   pop ebx
// 008e593e  83c410               add esp, 0x10
// 008e5941  c20400               ret 4
// copied from an identical function in another client (function ??0CXTButton@@QAE@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp