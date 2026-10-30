// roc 2010-06 007c09b0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c09b0
//
// 007c09b0  53                   push ebx
// 007c09b1  55                   push ebp
// 007c09b2  56                   push esi
// 007c09b3  57                   push edi
// 007c09b4  8bf9                 mov edi, ecx
// 007c09b6  33f6                 xor esi, esi
// 007c09b8  39774c               cmp dword ptr [edi + 0x4c], esi
// 007c09bb  7e25                 jle 0x7c09e2
// 007c09bd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007c09c1  85f6                 test esi, esi
// 007c09c3  7c2f                 jl 0x7c09f4
// 007c09c5  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007c09c8  7d2a                 jge 0x7c09f4
// 007c09ca  8b4748               mov eax, dword ptr [edi + 0x48]
// 007c09cd  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 007c09d0  55                   push ebp
// 007c09d1  8bcb                 mov ecx, ebx
// 007c09d3  e8c8c5ffff           call 0x7bcfa0
// 007c09d8  85c0                 test eax, eax
// 007c09da  750f                 jne 0x7c09eb
// 007c09dc  46                   inc esi
// 007c09dd  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007c09e0  7cdf                 jl 0x7c09c1
// 007c09e2  5f                   pop edi
// 007c09e3  5e                   pop esi
// 007c09e4  5d                   pop ebp
// 007c09e5  33c0                 xor eax, eax
// 007c09e7  5b                   pop ebx
// 007c09e8  c20400               ret 4
// 007c09eb  5f                   pop edi
// 007c09ec  5e                   pop esi
// 007c09ed  5d                   pop ebp
// 007c09ee  8bc3                 mov eax, ebx
// 007c09f0  5b                   pop ebx
// 007c09f1  c20400               ret 4
// 007c09f4  e85372feff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetImageList@CXTPImageManager@@QBEPAVCXTPImageManagerImageList@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp