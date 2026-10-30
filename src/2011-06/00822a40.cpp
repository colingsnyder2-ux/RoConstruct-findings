// roc 2011-06 00822a40  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822a40
//
// 00822a40  53                   push ebx
// 00822a41  55                   push ebp
// 00822a42  56                   push esi
// 00822a43  57                   push edi
// 00822a44  8bf9                 mov edi, ecx
// 00822a46  33f6                 xor esi, esi
// 00822a48  39774c               cmp dword ptr [edi + 0x4c], esi
// 00822a4b  7e25                 jle 0x822a72
// 00822a4d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00822a51  85f6                 test esi, esi
// 00822a53  7c2f                 jl 0x822a84
// 00822a55  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00822a58  7d2a                 jge 0x822a84
// 00822a5a  8b4748               mov eax, dword ptr [edi + 0x48]
// 00822a5d  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 00822a60  55                   push ebp
// 00822a61  8bcb                 mov ecx, ebx
// 00822a63  e878c9ffff           call 0x81f3e0
// 00822a68  85c0                 test eax, eax
// 00822a6a  750f                 jne 0x822a7b
// 00822a6c  46                   inc esi
// 00822a6d  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00822a70  7cdf                 jl 0x822a51
// 00822a72  5f                   pop edi
// 00822a73  5e                   pop esi
// 00822a74  5d                   pop ebp
// 00822a75  33c0                 xor eax, eax
// 00822a77  5b                   pop ebx
// 00822a78  c20400               ret 4
// 00822a7b  5f                   pop edi
// 00822a7c  5e                   pop esi
// 00822a7d  5d                   pop ebp
// 00822a7e  8bc3                 mov eax, ebx
// 00822a80  5b                   pop ebx
// 00822a81  c20400               ret 4
// 00822a84  e88178feff           call 0x80a30a
// copied from an identical function in another client (function ?GetImageList@CXTPImageManager@@QBEPAVCXTPImageManagerImageList@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp