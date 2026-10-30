// roc 2010-06 007ab9c0  unit: CPatchedControlComboBox  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ab9c0
//
// 007ab9c0  53                   push ebx
// 007ab9c1  55                   push ebp
// 007ab9c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007ab9c6  57                   push edi
// 007ab9c7  8bd9                 mov ebx, ecx
// 007ab9c9  85ed                 test ebp, ebp
// 007ab9cb  0f8c93000000         jl 0x7aba64
// 007ab9d1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007ab9d5  85ff                 test edi, edi
// 007ab9d7  0f8e87000000         jle 0x7aba64
// 007ab9dd  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 007ab9e0  7c0d                 jl 0x7ab9ef
// 007ab9e2  6aff                 push -1
// 007ab9e4  8d042f               lea eax, [edi + ebp]
// 007ab9e7  50                   push eax
// 007ab9e8  e813590300           call 0x7e1300
// 007ab9ed  eb53                 jmp 0x7aba42
// 007ab9ef  56                   push esi
// 007ab9f0  8b7308               mov esi, dword ptr [ebx + 8]
// 007ab9f3  6aff                 push -1
// 007ab9f5  8d0c3e               lea ecx, [esi + edi]
// 007ab9f8  51                   push ecx
// 007ab9f9  8bcb                 mov ecx, ebx
// 007ab9fb  e800590300           call 0x7e1300
// 007aba00  8b4304               mov eax, dword ptr [ebx + 4]
// 007aba03  2bf5                 sub esi, ebp
// 007aba05  03f6                 add esi, esi
// 007aba07  03f6                 add esi, esi
// 007aba09  8d0ca8               lea ecx, [eax + ebp*4]
// 007aba0c  56                   push esi
// 007aba0d  51                   push ecx
// 007aba0e  8d142f               lea edx, [edi + ebp]
// 007aba11  8d0490               lea eax, [eax + edx*4]
// 007aba14  56                   push esi
// 007aba15  50                   push eax
// 007aba16  ff1580a89e00         call dword ptr [0x9ea880]
// 007aba1c  50                   push eax
// 007aba1d  e81e70c5ff           call 0x402a40
// 007aba22  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007aba25  8d04bd00000000       lea eax, [edi*4]
// 007aba2c  50                   push eax
// 007aba2d  8d04ad00000000       lea eax, [ebp*4]
// 007aba34  03c8                 add ecx, eax
// 007aba36  6a00                 push 0
// 007aba38  51                   push ecx
// 007aba39  e8a6d1ffff           call 0x7a8be4
// 007aba3e  83c420               add esp, 0x20
// 007aba41  5e                   pop esi
// 007aba42  8b442414             mov eax, dword ptr [esp + 0x14]
// 007aba46  03ed                 add ebp, ebp
// 007aba48  03ed                 add ebp, ebp
// 007aba4a  8d9b00000000         lea ebx, [ebx]
// 007aba50  8b5304               mov edx, dword ptr [ebx + 4]
// 007aba53  4f                   dec edi
// 007aba54  89042a               mov dword ptr [edx + ebp], eax
// 007aba57  83c504               add ebp, 4
// 007aba5a  85ff                 test edi, edi
// 007aba5c  75f2                 jne 0x7aba50
// 007aba5e  5f                   pop edi
// 007aba5f  5d                   pop ebp
// 007aba60  5b                   pop ebx
// 007aba61  c20c00               ret 0xc
// 007aba64  e8e3c1ffff           call 0x7a7c4c
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp