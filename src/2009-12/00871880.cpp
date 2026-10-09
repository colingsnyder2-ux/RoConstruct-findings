// roc 2009-12 00871880  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871880
//
// 00871880  83ec30               sub esp, 0x30
// 00871883  53                   push ebx
// 00871884  55                   push ebp
// 00871885  56                   push esi
// 00871886  8b742444             mov esi, dword ptr [esp + 0x44]
// 0087188a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00871890  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00871896  57                   push edi
// 00871897  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 0087189d  89442420             mov dword ptr [esp + 0x20], eax
// 008718a1  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008718a7  68580fa000           push 0xa00f58
// 008718ac  89542428             mov dword ptr [esp + 0x28], edx
// 008718b0  89442430             mov dword ptr [esp + 0x30], eax
// 008718b4  e847d40000           call 0x87ed00
// 008718b9  8be8                 mov ebp, eax
// 008718bb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008718c1  83f8ff               cmp eax, -1
// 008718c4  7511                 jne 0x8718d7
// 008718c6  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 008718cc  85f6                 test esi, esi
// 008718ce  7407                 je 0x8718d7
// 008718d0  8bce                 mov ecx, esi
// 008718d2  e8d94cf8ff           call 0x7f65b0
// 008718d7  33c9                 xor ecx, ecx
// 008718d9  85c0                 test eax, eax
// 008718db  0f94c1               sete cl
// 008718de  6a02                 push 2
// 008718e0  8d542414             lea edx, [esp + 0x14]
// 008718e4  51                   push ecx
// 008718e5  52                   push edx
// 008718e6  8bcd                 mov ecx, ebp
// 008718e8  e8d3ef0600           call 0x8e08c0
// 008718ed  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008718f1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008718f5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008718f9  8d77f2               lea esi, [edi - 0xe]
// 008718fc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00871900  8bc7                 mov eax, edi
// 00871902  2bc3                 sub eax, ebx
// 00871904  0344242c             add eax, dword ptr [esp + 0x2c]
// 00871908  68ff00ff00           push 0xff00ff
// 0087190d  03442428             add eax, dword ptr [esp + 0x28]
// 00871911  03ce                 add ecx, esi
// 00871913  99                   cdq 
// 00871914  2bc2                 sub eax, edx
// 00871916  d1f8                 sar eax, 1
// 00871918  89442438             mov dword ptr [esp + 0x38], eax
// 0087191c  8bd3                 mov edx, ebx
// 0087191e  2bd7                 sub edx, edi
// 00871920  03c2                 add eax, edx
// 00871922  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00871926  89442440             mov dword ptr [esp + 0x40], eax
// 0087192a  8d442424             lea eax, [esp + 0x24]
// 0087192e  50                   push eax
// 0087192f  83ec10               sub esp, 0x10
// 00871932  8bc4                 mov eax, esp
// 00871934  894c2450             mov dword ptr [esp + 0x50], ecx
// 00871938  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087193c  8908                 mov dword ptr [eax], ecx
// 0087193e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00871942  897804               mov dword ptr [eax + 4], edi
// 00871945  895008               mov dword ptr [eax + 8], edx
// 00871948  89580c               mov dword ptr [eax + 0xc], ebx
// 0087194b  8d442448             lea eax, [esp + 0x48]
// 0087194f  50                   push eax
// 00871950  51                   push ecx
// 00871951  8bcd                 mov ecx, ebp
// 00871953  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0087195b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00871963  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0087196b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00871973  89742450             mov dword ptr [esp + 0x50], esi
// 00871977  e884f40600           call 0x8e0e00
// 0087197c  5f                   pop edi
// 0087197d  5e                   pop esi
// 0087197e  5d                   pop ebp
// 0087197f  5b                   pop ebx
// 00871980  83c430               add esp, 0x30
// 00871983  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
