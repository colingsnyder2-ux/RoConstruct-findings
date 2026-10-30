// roc 2012-06 0099af40  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099af40
//
// 0099af40  53                   push ebx
// 0099af41  55                   push ebp
// 0099af42  56                   push esi
// 0099af43  57                   push edi
// 0099af44  8bf9                 mov edi, ecx
// 0099af46  33f6                 xor esi, esi
// 0099af48  39774c               cmp dword ptr [edi + 0x4c], esi
// 0099af4b  7e25                 jle 0x99af72
// 0099af4d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0099af51  85f6                 test esi, esi
// 0099af53  7c2f                 jl 0x99af84
// 0099af55  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0099af58  7d2a                 jge 0x99af84
// 0099af5a  8b4748               mov eax, dword ptr [edi + 0x48]
// 0099af5d  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0099af60  55                   push ebp
// 0099af61  8bcb                 mov ecx, ebx
// 0099af63  e878c7ffff           call 0x9976e0
// 0099af68  85c0                 test eax, eax
// 0099af6a  750f                 jne 0x99af7b
// 0099af6c  46                   inc esi
// 0099af6d  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0099af70  7cdf                 jl 0x99af51
// 0099af72  5f                   pop edi
// 0099af73  5e                   pop esi
// 0099af74  5d                   pop ebp
// 0099af75  33c0                 xor eax, eax
// 0099af77  5b                   pop ebx
// 0099af78  c20400               ret 4
// 0099af7b  5f                   pop edi
// 0099af7c  5e                   pop esi
// 0099af7d  5d                   pop ebp
// 0099af7e  8bc3                 mov eax, ebx
// 0099af80  5b                   pop ebx
// 0099af81  c20400               ret 4
// 0099af84  e83774feff           call 0x9823c0
// copied from an identical function in another client (function ?GetImageList@CXTPImageManager@@QBEPAVCXTPImageManagerImageList@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp