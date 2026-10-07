// roc 2007-08 007217b0  unit: CXTCaptionButtonTheme  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007217b0
//
// 007217b0  83ec10               sub esp, 0x10
// 007217b3  55                   push ebp
// 007217b4  56                   push esi
// 007217b5  8b742428             mov esi, dword ptr [esp + 0x28]
// 007217b9  85f6                 test esi, esi
// 007217bb  8be9                 mov ebp, ecx
// 007217bd  0f8405010000         je 0x7218c8
// 007217c3  837d1400             cmp dword ptr [ebp + 0x14], 0
// 007217c7  0f84fb000000         je 0x7218c8
// 007217cd  57                   push edi
// 007217ce  8bce                 mov ecx, esi
// 007217d0  e8bb33ffff           call 0x714b90
// 007217d5  8bf8                 mov edi, eax
// 007217d7  85ff                 test edi, edi
// 007217d9  0f84e8000000         je 0x7218c7
// 007217df  53                   push ebx
// 007217e0  8b5d00               mov ebx, dword ptr [ebp]
// 007217e3  56                   push esi
// 007217e4  8bce                 mov ecx, esi
// 007217e6  e85531ffff           call 0x714940
// 007217eb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007217ef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007217f3  85c0                 test eax, eax
// 007217f5  0f95c0               setne al
// 007217f8  50                   push eax
// 007217f9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007217fd  51                   push ecx
// 007217fe  52                   push edx
// 007217ff  8b5350               mov edx, dword ptr [ebx + 0x50]
// 00721802  50                   push eax
// 00721803  8d4c2424             lea ecx, [esp + 0x24]
// 00721807  51                   push ecx
// 00721808  8bcd                 mov ecx, ebp
// 0072180a  ffd2                 call edx
// 0072180c  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00721810  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 00721814  7509                 jne 0x72181f
// 00721816  f6c301               test bl, 1
// 00721819  7504                 jne 0x72181f
// 0072181b  33ed                 xor ebp, ebp
// 0072181d  eb0d                 jmp 0x72182c
// 0072181f  bd01000000           mov ebp, 1
// 00721824  016c2410             add dword ptr [esp + 0x10], ebp
// 00721828  016c2414             add dword ptr [esp + 0x14], ebp
// 0072182c  f6c304               test bl, 4
// 0072182f  8bce                 mov ecx, esi
// 00721831  741d                 je 0x721850
// 00721833  8d442418             lea eax, [esp + 0x18]
// 00721837  50                   push eax
// 00721838  e8d33affff           call 0x715310
// 0072183d  8b4804               mov ecx, dword ptr [eax + 4]
// 00721840  8b10                 mov edx, dword ptr [eax]
// 00721842  51                   push ecx
// 00721843  52                   push edx
// 00721844  6a01                 push 1
// 00721846  8bcf                 mov ecx, edi
// 00721848  e813b1f2ff           call 0x64c960
// 0072184d  50                   push eax
// 0072184e  eb60                 jmp 0x7218b0
// 00721850  e82b22ffff           call 0x713a80
// 00721855  85c0                 test eax, eax
// 00721857  7521                 jne 0x72187a
// 00721859  85ed                 test ebp, ebp
// 0072185b  751d                 jne 0x72187a
// 0072185d  8d442418             lea eax, [esp + 0x18]
// 00721861  50                   push eax
// 00721862  8bce                 mov ecx, esi
// 00721864  e8a73affff           call 0x715310
// 00721869  8b4804               mov ecx, dword ptr [eax + 4]
// 0072186c  8b10                 mov edx, dword ptr [eax]
// 0072186e  51                   push ecx
// 0072186f  52                   push edx
// 00721870  8bcf                 mov ecx, edi
// 00721872  e8b96ef2ff           call 0x648730
// 00721877  50                   push eax
// 00721878  eb36                 jmp 0x7218b0
// 0072187a  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 0072187e  8bcf                 mov ecx, edi
// 00721880  7407                 je 0x721889
// 00721882  e8d96ef2ff           call 0x648760
// 00721887  eb11                 jmp 0x72189a
// 00721889  f6c301               test bl, 1
// 0072188c  7407                 je 0x721895
// 0072188e  e8ed6ef2ff           call 0x648780
// 00721893  eb05                 jmp 0x72189a
// 00721895  e8a66ef2ff           call 0x648740
// 0072189a  8bd8                 mov ebx, eax
// 0072189c  8d442418             lea eax, [esp + 0x18]
// 007218a0  50                   push eax
// 007218a1  8bce                 mov ecx, esi
// 007218a3  e8683affff           call 0x715310
// 007218a8  8b4804               mov ecx, dword ptr [eax + 4]
// 007218ab  8b10                 mov edx, dword ptr [eax]
// 007218ad  51                   push ecx
// 007218ae  52                   push edx
// 007218af  53                   push ebx
// 007218b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 007218b4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007218b8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007218bc  50                   push eax
// 007218bd  51                   push ecx
// 007218be  52                   push edx
// 007218bf  8bcf                 mov ecx, edi
// 007218c1  e8dacef2ff           call 0x64e7a0
// 007218c6  5b                   pop ebx
// 007218c7  5f                   pop edi
// 007218c8  5e                   pop esi
// 007218c9  5d                   pop ebp
// 007218ca  83c410               add esp, 0x10
// 007218cd  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
