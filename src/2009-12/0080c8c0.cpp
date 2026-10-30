// roc 2009-12 0080c8c0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c8c0
//
// 0080c8c0  53                   push ebx
// 0080c8c1  55                   push ebp
// 0080c8c2  56                   push esi
// 0080c8c3  57                   push edi
// 0080c8c4  8bf9                 mov edi, ecx
// 0080c8c6  33f6                 xor esi, esi
// 0080c8c8  39774c               cmp dword ptr [edi + 0x4c], esi
// 0080c8cb  7e25                 jle 0x80c8f2
// 0080c8cd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0080c8d1  85f6                 test esi, esi
// 0080c8d3  7c2f                 jl 0x80c904
// 0080c8d5  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0080c8d8  7d2a                 jge 0x80c904
// 0080c8da  8b4748               mov eax, dword ptr [edi + 0x48]
// 0080c8dd  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0080c8e0  55                   push ebp
// 0080c8e1  8bcb                 mov ecx, ebx
// 0080c8e3  e818c5ffff           call 0x808e00
// 0080c8e8  85c0                 test eax, eax
// 0080c8ea  750f                 jne 0x80c8fb
// 0080c8ec  46                   inc esi
// 0080c8ed  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0080c8f0  7cdf                 jl 0x80c8d1
// 0080c8f2  5f                   pop edi
// 0080c8f3  5e                   pop esi
// 0080c8f4  5d                   pop ebp
// 0080c8f5  33c0                 xor eax, eax
// 0080c8f7  5b                   pop ebx
// 0080c8f8  c20400               ret 4
// 0080c8fb  5f                   pop edi
// 0080c8fc  5e                   pop esi
// 0080c8fd  5d                   pop ebp
// 0080c8fe  8bc3                 mov eax, ebx
// 0080c900  5b                   pop ebx
// 0080c901  c20400               ret 4
// 0080c904  e80372feff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetImageList@CXTPImageManager@@QBEPAVCXTPImageManagerImageList@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp