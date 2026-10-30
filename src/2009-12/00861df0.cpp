// roc 2009-12 00861df0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861df0
//
// 00861df0  53                   push ebx
// 00861df1  55                   push ebp
// 00861df2  56                   push esi
// 00861df3  57                   push edi
// 00861df4  8bf1                 mov esi, ecx
// 00861df6  e84d23f9ff           call 0x7f4148
// 00861dfb  8d4e54               lea ecx, [esi + 0x54]
// 00861dfe  c70624e09f00         mov dword ptr [esi], 0x9fe024
// 00861e04  e887ffffff           call 0x861d90
// 00861e09  8b442414             mov eax, dword ptr [esp + 0x14]
// 00861e0d  8d7e70               lea edi, [esi + 0x70]
// 00861e10  8bcf                 mov ecx, edi
// 00861e12  89466c               mov dword ptr [esi + 0x6c], eax
// 00861e15  ff1574de9800         call dword ptr [0x98de74]
// 00861e1b  8d9ea8000000         lea ebx, [esi + 0xa8]
// 00861e21  8bcb                 mov ecx, ebx
// 00861e23  ff1574de9800         call dword ptr [0x98de74]
// 00861e29  8daee0000000         lea ebp, [esi + 0xe0]
// 00861e2f  8bcd                 mov ecx, ebp
// 00861e31  ff1574de9800         call dword ptr [0x98de74]
// 00861e37  8d8e28010000         lea ecx, [esi + 0x128]
// 00861e3d  ff1574de9800         call dword ptr [0x98de74]
// 00861e43  8bcf                 mov ecx, edi
// 00861e45  c7466800000000       mov dword ptr [esi + 0x68], 0
// 00861e4c  ff1590d69800         call dword ptr [0x98d690]
// 00861e52  33c0                 xor eax, eax
// 00861e54  8d4f0c               lea ecx, [edi + 0xc]
// 00861e57  51                   push ecx
// 00861e58  894708               mov dword ptr [edi + 8], eax
// 00861e5b  894720               mov dword ptr [edi + 0x20], eax
// 00861e5e  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00861e65  89471c               mov dword ptr [edi + 0x1c], eax
// 00861e68  ff159cca9800         call dword ptr [0x98ca9c]
// 00861e6e  83c728               add edi, 0x28
// 00861e71  57                   push edi
// 00861e72  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 00861e78  ffd7                 call edi
// 00861e7a  8bcb                 mov ecx, ebx
// 00861e7c  ff1590d69800         call dword ptr [0x98d690]
// 00861e82  33c0                 xor eax, eax
// 00861e84  8d530c               lea edx, [ebx + 0xc]
// 00861e87  52                   push edx
// 00861e88  894308               mov dword ptr [ebx + 8], eax
// 00861e8b  894320               mov dword ptr [ebx + 0x20], eax
// 00861e8e  c74324ffffffff       mov dword ptr [ebx + 0x24], 0xffffffff
// 00861e95  89431c               mov dword ptr [ebx + 0x1c], eax
// 00861e98  ffd7                 call edi
// 00861e9a  83c328               add ebx, 0x28
// 00861e9d  53                   push ebx
// 00861e9e  ffd7                 call edi
// 00861ea0  8bcd                 mov ecx, ebp
// 00861ea2  ff1590d69800         call dword ptr [0x98d690]
// 00861ea8  33db                 xor ebx, ebx
// 00861eaa  8d450c               lea eax, [ebp + 0xc]
// 00861ead  50                   push eax
// 00861eae  895d08               mov dword ptr [ebp + 8], ebx
// 00861eb1  895d20               mov dword ptr [ebp + 0x20], ebx
// 00861eb4  c74524ffffffff       mov dword ptr [ebp + 0x24], 0xffffffff
// 00861ebb  895d1c               mov dword ptr [ebp + 0x1c], ebx
// 00861ebe  ffd7                 call edi
// 00861ec0  83c528               add ebp, 0x28
// 00861ec3  55                   push ebp
// 00861ec4  ffd7                 call edi
// 00861ec6  5f                   pop edi
// 00861ec7  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 00861ecd  899e18010000         mov dword ptr [esi + 0x118], ebx
// 00861ed3  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 00861ed9  c78620010000f4010000 mov dword ptr [esi + 0x120], 0x1f4
// 00861ee3  c78624010000c8000000 mov dword ptr [esi + 0x124], 0xc8
// 00861eed  8bc6                 mov eax, esi
// 00861eef  5e                   pop esi
// 00861ef0  5d                   pop ebp
// 00861ef1  5b                   pop ebx
// 00861ef2  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPToolTipContextToolTip@@QAE@PAVCXTPToolTipContext@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp