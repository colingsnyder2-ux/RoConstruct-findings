// roc 2011-06 008c3950  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3950
//
// 008c3950  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c3954  56                   push esi
// 008c3955  6a01                 push 1
// 008c3957  8bf1                 mov esi, ecx
// 008c3959  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c395d  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c3960  50                   push eax
// 008c3961  51                   push ecx
// 008c3962  52                   push edx
// 008c3963  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008c3969  e8821d0100           call 0x8d56f0
// 008c396e  85c0                 test eax, eax
// 008c3970  7562                 jne 0x8c39d4
// 008c3972  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c3976  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c397a  50                   push eax
// 008c397b  51                   push ecx
// 008c397c  8bce                 mov ecx, esi
// 008c397e  e8bdf7ffff           call 0x8c3140
// 008c3983  85c0                 test eax, eax
// 008c3985  754d                 jne 0x8c39d4
// 008c3987  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c398b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c398f  52                   push edx
// 008c3990  50                   push eax
// 008c3991  8bce                 mov ecx, esi
// 008c3993  e878f4ffff           call 0x8c2e10
// 008c3998  83f8fe               cmp eax, -2
// 008c399b  753b                 jne 0x8c39d8
// 008c399d  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c39a0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008c39a3  57                   push edi
// 008c39a4  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 008c39aa  83c654               add esi, 0x54
// 008c39ad  8bce                 mov ecx, esi
// 008c39af  ffd0                 call eax
// 008c39b1  85c0                 test eax, eax
// 008c39b3  740f                 je 0x8c39c4
// 008c39b5  85ff                 test edi, edi
// 008c39b7  740b                 je 0x8c39c4
// 008c39b9  8bcf                 mov ecx, edi
// 008c39bb  e8a0a9faff           call 0x86e360
// 008c39c0  a802                 test al, 2
// 008c39c2  750f                 jne 0x8c39d3
// 008c39c4  56                   push esi
// 008c39c5  8bce                 mov ecx, esi
// 008c39c7  e894e3ffff           call 0x8c1d60
// 008c39cc  8bc8                 mov ecx, eax
// 008c39ce  e83dc8f8ff           call 0x850210
// 008c39d3  5f                   pop edi
// 008c39d4  5e                   pop esi
// 008c39d5  c20c00               ret 0xc
// 008c39d8  85c0                 test eax, eax
// 008c39da  7cf8                 jl 0x8c39d4
// 008c39dc  50                   push eax
// 008c39dd  8bce                 mov ecx, esi
// 008c39df  e83cffffff           call 0x8c3920
// 008c39e4  85c0                 test eax, eax
// 008c39e6  7405                 je 0x8c39ed
// 008c39e8  83c020               add eax, 0x20
// 008c39eb  eb02                 jmp 0x8c39ef
// 008c39ed  33c0                 xor eax, eax
// 008c39ef  50                   push eax
// 008c39f0  8d4e54               lea ecx, [esi + 0x54]
// 008c39f3  e868e3ffff           call 0x8c1d60
// 008c39f8  8bc8                 mov ecx, eax
// 008c39fa  e811c8f8ff           call 0x850210
// 008c39ff  5e                   pop esi
// 008c3a00  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
