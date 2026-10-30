// roc 2007-03 00623c20  unit: seg_00620000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00623c20
//
// 00623c20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00623c24  53                   push ebx
// 00623c25  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00623c29  56                   push esi
// 00623c2a  8bf1                 mov esi, ecx
// 00623c2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00623c30  50                   push eax
// 00623c31  51                   push ecx
// 00623c32  53                   push ebx
// 00623c33  8bce                 mov ecx, esi
// 00623c35  e846850100           call 0x63c180
// 00623c3a  85c0                 test eax, eax
// 00623c3c  7505                 jne 0x623c43
// 00623c3e  5e                   pop esi
// 00623c3f  5b                   pop ebx
// 00623c40  c20c00               ret 0xc
// 00623c43  85db                 test ebx, ebx
// 00623c45  57                   push edi
// 00623c46  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 00623c4c  756a                 jne 0x623cb8
// 00623c4e  6a08                 push 8
// 00623c50  8bcf                 mov ecx, edi
// 00623c52  e879dc0000           call 0x6318d0
// 00623c57  68300c6200           push 0x620c30
// 00623c5c  b910238c00           mov ecx, 0x8c2310
// 00623c61  e83e6e1100           call 0x73aaa4
// 00623c66  85c0                 test eax, eax
// 00623c68  7505                 jne 0x623c6f
// 00623c6a  e83fa7ffff           call 0x61e3ae
// 00623c6f  834004ff             add dword ptr [eax + 4], -1
// 00623c73  6a00                 push 0
// 00623c75  8bce                 mov ecx, esi
// 00623c77  e85ca7ffff           call 0x61e3d8
// 00623c7c  8b16                 mov edx, dword ptr [esi]
// 00623c7e  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00623c84  8bce                 mov ecx, esi
// 00623c86  ffd0                 call eax
// 00623c88  85c0                 test eax, eax
// 00623c8a  7417                 je 0x623ca3
// 00623c8c  8b16                 mov edx, dword ptr [esi]
// 00623c8e  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00623c94  6a00                 push 0
// 00623c96  6aff                 push -1
// 00623c98  8bce                 mov ecx, esi
// 00623c9a  ffd0                 call eax
// 00623c9c  8bc8                 mov ecx, eax
// 00623c9e  e82d710100           call 0x63add0
// 00623ca3  5f                   pop edi
// 00623ca4  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00623cae  5e                   pop esi
// 00623caf  b801000000           mov eax, 1
// 00623cb4  5b                   pop ebx
// 00623cb5  c20c00               ret 0xc
// 00623cb8  68300c6200           push 0x620c30
// 00623cbd  b910238c00           mov ecx, 0x8c2310
// 00623cc2  e8dd6d1100           call 0x73aaa4
// 00623cc7  85c0                 test eax, eax
// 00623cc9  7505                 jne 0x623cd0
// 00623ccb  e8dea6ffff           call 0x61e3ae
// 00623cd0  83400401             add dword ptr [eax + 4], 1
// 00623cd4  8bcf                 mov ecx, edi
// 00623cd6  e885f3ffff           call 0x623060
// 00623cdb  6a07                 push 7
// 00623cdd  8bcf                 mov ecx, edi
// 00623cdf  e8ecdb0000           call 0x6318d0
// 00623ce4  5f                   pop edi
// 00623ce5  5e                   pop esi
// 00623ce6  b801000000           mov eax, 1
// 00623ceb  5b                   pop ebx
// 00623cec  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetTrackingMode@CXTPControlComboBoxList@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
