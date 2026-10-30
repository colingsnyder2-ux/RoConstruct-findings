// roc 2010-06 007bd8c0  unit: CXTPCommandBar  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd8c0
//
// 007bd8c0  83ec08               sub esp, 8
// 007bd8c3  53                   push ebx
// 007bd8c4  55                   push ebp
// 007bd8c5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007bd8c9  56                   push esi
// 007bd8ca  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007bd8ce  8b460c               mov eax, dword ptr [esi + 0xc]
// 007bd8d1  2b4604               sub eax, dword ptr [esi + 4]
// 007bd8d4  57                   push edi
// 007bd8d5  894c2414             mov dword ptr [esp + 0x14], ecx
// 007bd8d9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007bd8dc  2b0e                 sub ecx, dword ptr [esi]
// 007bd8de  33ff                 xor edi, edi
// 007bd8e0  57                   push edi
// 007bd8e1  50                   push eax
// 007bd8e2  51                   push ecx
// 007bd8e3  55                   push ebp
// 007bd8e4  897c2420             mov dword ptr [esp + 0x20], edi
// 007bd8e8  e8f3f3ffff           call 0x7bcce0
// 007bd8ed  8bd8                 mov ebx, eax
// 007bd8ef  83c410               add esp, 0x10
// 007bd8f2  895c2420             mov dword ptr [esp + 0x20], ebx
// 007bd8f6  85db                 test ebx, ebx
// 007bd8f8  0f84b6000000         je 0x7bd9b4
// 007bd8fe  55                   push ebp
// 007bd8ff  ff15aca09e00         call dword ptr [0x9ea0ac]
// 007bd905  8bf8                 mov edi, eax
// 007bd907  85ff                 test edi, edi
// 007bd909  0f8490000000         je 0x7bd99f
// 007bd90f  53                   push ebx
// 007bd910  57                   push edi
// 007bd911  ff15c8a09e00         call dword ptr [0x9ea0c8]
// 007bd917  8b5604               mov edx, dword ptr [esi + 4]
// 007bd91a  8b1e                 mov ebx, dword ptr [esi]
// 007bd91c  8b4e08               mov ecx, dword ptr [esi + 8]
// 007bd91f  682000cc00           push 0xcc0020
// 007bd924  52                   push edx
// 007bd925  53                   push ebx
// 007bd926  89442428             mov dword ptr [esp + 0x28], eax
// 007bd92a  8b460c               mov eax, dword ptr [esi + 0xc]
// 007bd92d  55                   push ebp
// 007bd92e  2bc2                 sub eax, edx
// 007bd930  50                   push eax
// 007bd931  2bcb                 sub ecx, ebx
// 007bd933  8b1dc0a09e00         mov ebx, dword ptr [0x9ea0c0]
// 007bd939  51                   push ecx
// 007bd93a  6a00                 push 0
// 007bd93c  6a00                 push 0
// 007bd93e  57                   push edi
// 007bd93f  ffd3                 call ebx
// 007bd941  85c0                 test eax, eax
// 007bd943  743f                 je 0x7bd984
// 007bd945  8b442424             mov eax, dword ptr [esp + 0x24]
// 007bd949  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007bd94d  50                   push eax
// 007bd94e  6aff                 push -1
// 007bd950  6aff                 push -1
// 007bd952  51                   push ecx
// 007bd953  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007bd957  e8d4faffff           call 0x7bd430
// 007bd95c  89442410             mov dword ptr [esp + 0x10], eax
// 007bd960  85c0                 test eax, eax
// 007bd962  7420                 je 0x7bd984
// 007bd964  8b4604               mov eax, dword ptr [esi + 4]
// 007bd967  8b560c               mov edx, dword ptr [esi + 0xc]
// 007bd96a  8b0e                 mov ecx, dword ptr [esi]
// 007bd96c  682000cc00           push 0xcc0020
// 007bd971  6a00                 push 0
// 007bd973  6a00                 push 0
// 007bd975  57                   push edi
// 007bd976  2bd0                 sub edx, eax
// 007bd978  52                   push edx
// 007bd979  8b5608               mov edx, dword ptr [esi + 8]
// 007bd97c  2bd1                 sub edx, ecx
// 007bd97e  52                   push edx
// 007bd97f  50                   push eax
// 007bd980  51                   push ecx
// 007bd981  55                   push ebp
// 007bd982  ffd3                 call ebx
// 007bd984  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007bd988  85c0                 test eax, eax
// 007bd98a  7408                 je 0x7bd994
// 007bd98c  50                   push eax
// 007bd98d  57                   push edi
// 007bd98e  ff15c8a09e00         call dword ptr [0x9ea0c8]
// 007bd994  57                   push edi
// 007bd995  ff15d0a09e00         call dword ptr [0x9ea0d0]
// 007bd99b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007bd99f  53                   push ebx
// 007bd9a0  ff15d4a09e00         call dword ptr [0x9ea0d4]
// 007bd9a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bd9aa  5f                   pop edi
// 007bd9ab  5e                   pop esi
// 007bd9ac  5d                   pop ebp
// 007bd9ad  5b                   pop ebx
// 007bd9ae  83c408               add esp, 8
// 007bd9b1  c20c00               ret 0xc
// 007bd9b4  8bc7                 mov eax, edi
// 007bd9b6  5f                   pop edi
// 007bd9b7  5e                   pop esi
// 007bd9b8  5d                   pop ebp
// 007bd9b9  5b                   pop ebx
// 007bd9ba  83c408               add esp, 8
// 007bd9bd  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlackWhiteBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp