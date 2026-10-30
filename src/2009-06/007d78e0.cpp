// roc 2009-06 007d78e0  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d78e0
//
// 007d78e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d78e4  56                   push esi
// 007d78e5  6a01                 push 1
// 007d78e7  8bf1                 mov esi, ecx
// 007d78e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d78ed  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d78f0  50                   push eax
// 007d78f1  51                   push ecx
// 007d78f2  52                   push edx
// 007d78f3  8d8ea8000000         lea ecx, [esi + 0xa8]
// 007d78f9  e852e10100           call 0x7f5a50
// 007d78fe  85c0                 test eax, eax
// 007d7900  7562                 jne 0x7d7964
// 007d7902  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d7906  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d790a  50                   push eax
// 007d790b  51                   push ecx
// 007d790c  8bce                 mov ecx, esi
// 007d790e  e8bdf7ffff           call 0x7d70d0
// 007d7913  85c0                 test eax, eax
// 007d7915  754d                 jne 0x7d7964
// 007d7917  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d791b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d791f  52                   push edx
// 007d7920  50                   push eax
// 007d7921  8bce                 mov ecx, esi
// 007d7923  e878f4ffff           call 0x7d6da0
// 007d7928  83f8fe               cmp eax, -2
// 007d792b  753b                 jne 0x7d7968
// 007d792d  8b5654               mov edx, dword ptr [esi + 0x54]
// 007d7930  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007d7933  57                   push edi
// 007d7934  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 007d793a  83c654               add esi, 0x54
// 007d793d  8bce                 mov ecx, esi
// 007d793f  ffd0                 call eax
// 007d7941  85c0                 test eax, eax
// 007d7943  740f                 je 0x7d7954
// 007d7945  85ff                 test edi, edi
// 007d7947  740b                 je 0x7d7954
// 007d7949  8bcf                 mov ecx, edi
// 007d794b  e8e0a1faff           call 0x781b30
// 007d7950  a802                 test al, 2
// 007d7952  750f                 jne 0x7d7963
// 007d7954  56                   push esi
// 007d7955  8bce                 mov ecx, esi
// 007d7957  e8a4e3ffff           call 0x7d5d00
// 007d795c  8bc8                 mov ecx, eax
// 007d795e  e83d81f8ff           call 0x75faa0
// 007d7963  5f                   pop edi
// 007d7964  5e                   pop esi
// 007d7965  c20c00               ret 0xc
// 007d7968  85c0                 test eax, eax
// 007d796a  7cf8                 jl 0x7d7964
// 007d796c  50                   push eax
// 007d796d  8bce                 mov ecx, esi
// 007d796f  e83cffffff           call 0x7d78b0
// 007d7974  85c0                 test eax, eax
// 007d7976  7405                 je 0x7d797d
// 007d7978  83c020               add eax, 0x20
// 007d797b  eb02                 jmp 0x7d797f
// 007d797d  33c0                 xor eax, eax
// 007d797f  50                   push eax
// 007d7980  8d4e54               lea ecx, [esi + 0x54]
// 007d7983  e878e3ffff           call 0x7d5d00
// 007d7988  8bc8                 mov ecx, eax
// 007d798a  e81181f8ff           call 0x75faa0
// 007d798f  5e                   pop esi
// 007d7990  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
