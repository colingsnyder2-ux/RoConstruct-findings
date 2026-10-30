// roc 2011-06 0081fcd0  unit: CXTPCommandBar  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081fcd0
//
// 0081fcd0  83ec08               sub esp, 8
// 0081fcd3  53                   push ebx
// 0081fcd4  55                   push ebp
// 0081fcd5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081fcd9  56                   push esi
// 0081fcda  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0081fcde  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081fce1  2b4604               sub eax, dword ptr [esi + 4]
// 0081fce4  57                   push edi
// 0081fce5  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081fce9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081fcec  2b0e                 sub ecx, dword ptr [esi]
// 0081fcee  33ff                 xor edi, edi
// 0081fcf0  57                   push edi
// 0081fcf1  50                   push eax
// 0081fcf2  51                   push ecx
// 0081fcf3  55                   push ebp
// 0081fcf4  897c2420             mov dword ptr [esp + 0x20], edi
// 0081fcf8  e823f4ffff           call 0x81f120
// 0081fcfd  8bd8                 mov ebx, eax
// 0081fcff  83c410               add esp, 0x10
// 0081fd02  895c2420             mov dword ptr [esp + 0x20], ebx
// 0081fd06  85db                 test ebx, ebx
// 0081fd08  0f84b6000000         je 0x81fdc4
// 0081fd0e  55                   push ebp
// 0081fd0f  ff158401a400         call dword ptr [0xa40184]
// 0081fd15  8bf8                 mov edi, eax
// 0081fd17  85ff                 test edi, edi
// 0081fd19  0f8490000000         je 0x81fdaf
// 0081fd1f  53                   push ebx
// 0081fd20  57                   push edi
// 0081fd21  ff158c01a400         call dword ptr [0xa4018c]
// 0081fd27  8b5604               mov edx, dword ptr [esi + 4]
// 0081fd2a  8b1e                 mov ebx, dword ptr [esi]
// 0081fd2c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081fd2f  682000cc00           push 0xcc0020
// 0081fd34  52                   push edx
// 0081fd35  53                   push ebx
// 0081fd36  89442428             mov dword ptr [esp + 0x28], eax
// 0081fd3a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081fd3d  55                   push ebp
// 0081fd3e  2bc2                 sub eax, edx
// 0081fd40  50                   push eax
// 0081fd41  2bcb                 sub ecx, ebx
// 0081fd43  8b1d9001a400         mov ebx, dword ptr [0xa40190]
// 0081fd49  51                   push ecx
// 0081fd4a  6a00                 push 0
// 0081fd4c  6a00                 push 0
// 0081fd4e  57                   push edi
// 0081fd4f  ffd3                 call ebx
// 0081fd51  85c0                 test eax, eax
// 0081fd53  743f                 je 0x81fd94
// 0081fd55  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081fd59  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081fd5d  50                   push eax
// 0081fd5e  6aff                 push -1
// 0081fd60  6aff                 push -1
// 0081fd62  51                   push ecx
// 0081fd63  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081fd67  e8d4faffff           call 0x81f840
// 0081fd6c  89442410             mov dword ptr [esp + 0x10], eax
// 0081fd70  85c0                 test eax, eax
// 0081fd72  7420                 je 0x81fd94
// 0081fd74  8b4604               mov eax, dword ptr [esi + 4]
// 0081fd77  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081fd7a  8b0e                 mov ecx, dword ptr [esi]
// 0081fd7c  682000cc00           push 0xcc0020
// 0081fd81  6a00                 push 0
// 0081fd83  6a00                 push 0
// 0081fd85  57                   push edi
// 0081fd86  2bd0                 sub edx, eax
// 0081fd88  52                   push edx
// 0081fd89  8b5608               mov edx, dword ptr [esi + 8]
// 0081fd8c  2bd1                 sub edx, ecx
// 0081fd8e  52                   push edx
// 0081fd8f  50                   push eax
// 0081fd90  51                   push ecx
// 0081fd91  55                   push ebp
// 0081fd92  ffd3                 call ebx
// 0081fd94  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081fd98  85c0                 test eax, eax
// 0081fd9a  7408                 je 0x81fda4
// 0081fd9c  50                   push eax
// 0081fd9d  57                   push edi
// 0081fd9e  ff158c01a400         call dword ptr [0xa4018c]
// 0081fda4  57                   push edi
// 0081fda5  ff159801a400         call dword ptr [0xa40198]
// 0081fdab  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0081fdaf  53                   push ebx
// 0081fdb0  ff159c01a400         call dword ptr [0xa4019c]
// 0081fdb6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081fdba  5f                   pop edi
// 0081fdbb  5e                   pop esi
// 0081fdbc  5d                   pop ebp
// 0081fdbd  5b                   pop ebx
// 0081fdbe  83c408               add esp, 8
// 0081fdc1  c20c00               ret 0xc
// 0081fdc4  8bc7                 mov eax, edi
// 0081fdc6  5f                   pop edi
// 0081fdc7  5e                   pop esi
// 0081fdc8  5d                   pop ebp
// 0081fdc9  5b                   pop ebx
// 0081fdca  83c408               add esp, 8
// 0081fdcd  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlackWhiteBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp