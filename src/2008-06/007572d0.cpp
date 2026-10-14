// roc 2008-06 007572d0  unit: CXTPDockingPaneAutoHideWnd  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007572d0
//
// 007572d0  83ec38               sub esp, 0x38
// 007572d3  53                   push ebx
// 007572d4  56                   push esi
// 007572d5  8bd9                 mov ebx, ecx
// 007572d7  e8c4f4ffff           call 0x7567a0
// 007572dc  8bf0                 mov esi, eax
// 007572de  85f6                 test esi, esi
// 007572e0  7508                 jne 0x7572ea
// 007572e2  5e                   pop esi
// 007572e3  5b                   pop ebx
// 007572e4  83c438               add esp, 0x38
// 007572e7  c20800               ret 8
// 007572ea  57                   push edi
// 007572eb  8d44240c             lea eax, [esp + 0xc]
// 007572ef  50                   push eax
// 007572f0  8bce                 mov ecx, esi
// 007572f2  e869ddf8ff           call 0x6e5060
// 007572f7  8bc8                 mov ecx, eax
// 007572f9  e802610000           call 0x75d400
// 007572fe  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 00757304  8b742448             mov esi, dword ptr [esp + 0x48]
// 00757308  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075730c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00757310  8b442414             mov eax, dword ptr [esp + 0x14]
// 00757314  890e                 mov dword ptr [esi], ecx
// 00757316  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0075731a  895604               mov dword ptr [esi + 4], edx
// 0075731d  894608               mov dword ptr [esi + 8], eax
// 00757320  894e0c               mov dword ptr [esi + 0xc], ecx
// 00757323  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00757329  83c704               add edi, 4
// 0075732c  83f801               cmp eax, 1
// 0075732f  7409                 je 0x75733a
// 00757331  83f803               cmp eax, 3
// 00757334  7404                 je 0x75733a
// 00757336  33c0                 xor eax, eax
// 00757338  eb05                 jmp 0x75733f
// 0075733a  b801000000           mov eax, 1
// 0075733f  50                   push eax
// 00757340  8d542420             lea edx, [esp + 0x20]
// 00757344  52                   push edx
// 00757345  8bcb                 mov ecx, ebx
// 00757347  e834f6ffff           call 0x756980
// 0075734c  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 00757352  83fb03               cmp ebx, 3
// 00757355  0f872c010000         ja 0x757487
// 0075735b  ff249d98747500       jmp dword ptr [ebx*4 + 0x757498]
// 00757362  8b442434             mov eax, dword ptr [esp + 0x34]
// 00757366  3bc7                 cmp eax, edi
// 00757368  7f02                 jg 0x75736c
// 0075736a  8bc7                 mov eax, edi
// 0075736c  0106                 add dword ptr [esi], eax
// 0075736e  297e08               sub dword ptr [esi + 8], edi
// 00757371  8b4608               mov eax, dword ptr [esi + 8]
// 00757374  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00757378  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0075737c  8b1e                 mov ebx, dword ptr [esi]
// 0075737e  2bc1                 sub eax, ecx
// 00757380  3bc2                 cmp eax, edx
// 00757382  7e05                 jle 0x757389
// 00757384  03d1                 add edx, ecx
// 00757386  895608               mov dword ptr [esi + 8], edx
// 00757389  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0075738c  0f8ddd000000         jge 0x75746f
// 00757392  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00757396  8b4808               mov ecx, dword ptr [eax + 8]
// 00757399  5f                   pop edi
// 0075739a  83e904               sub ecx, 4
// 0075739d  5e                   pop esi
// 0075739e  8908                 mov dword ptr [eax], ecx
// 007573a0  b801000000           mov eax, 1
// 007573a5  5b                   pop ebx
// 007573a6  83c438               add esp, 0x38
// 007573a9  c20800               ret 8
// 007573ac  8b442434             mov eax, dword ptr [esp + 0x34]
// 007573b0  3bc7                 cmp eax, edi
// 007573b2  7f02                 jg 0x7573b6
// 007573b4  8bc7                 mov eax, edi
// 007573b6  294608               sub dword ptr [esi + 8], eax
// 007573b9  013e                 add dword ptr [esi], edi
// 007573bb  8b442414             mov eax, dword ptr [esp + 0x14]
// 007573bf  8b0e                 mov ecx, dword ptr [esi]
// 007573c1  8b5608               mov edx, dword ptr [esi + 8]
// 007573c4  8bf8                 mov edi, eax
// 007573c6  2bf9                 sub edi, ecx
// 007573c8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007573cc  3bf9                 cmp edi, ecx
// 007573ce  7e04                 jle 0x7573d4
// 007573d0  2bc1                 sub eax, ecx
// 007573d2  8906                 mov dword ptr [esi], eax
// 007573d4  3916                 cmp dword ptr [esi], edx
// 007573d6  0f8d93000000         jge 0x75746f
// 007573dc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007573e0  8b10                 mov edx, dword ptr [eax]
// 007573e2  5f                   pop edi
// 007573e3  83c204               add edx, 4
// 007573e6  5e                   pop esi
// 007573e7  895008               mov dword ptr [eax + 8], edx
// 007573ea  b801000000           mov eax, 1
// 007573ef  5b                   pop ebx
// 007573f0  83c438               add esp, 0x38
// 007573f3  c20800               ret 8
// 007573f6  8b442438             mov eax, dword ptr [esp + 0x38]
// 007573fa  3bc7                 cmp eax, edi
// 007573fc  7f02                 jg 0x757400
// 007573fe  8bc7                 mov eax, edi
// 00757400  014604               add dword ptr [esi + 4], eax
// 00757403  297e0c               sub dword ptr [esi + 0xc], edi
// 00757406  8b460c               mov eax, dword ptr [esi + 0xc]
// 00757409  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075740d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00757411  8b5e04               mov ebx, dword ptr [esi + 4]
// 00757414  2bc1                 sub eax, ecx
// 00757416  3bc2                 cmp eax, edx
// 00757418  7e05                 jle 0x75741f
// 0075741a  03d1                 add edx, ecx
// 0075741c  89560c               mov dword ptr [esi + 0xc], edx
// 0075741f  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 00757422  7d4b                 jge 0x75746f
// 00757424  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00757428  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0075742b  5f                   pop edi
// 0075742c  83e904               sub ecx, 4
// 0075742f  5e                   pop esi
// 00757430  894804               mov dword ptr [eax + 4], ecx
// 00757433  b801000000           mov eax, 1
// 00757438  5b                   pop ebx
// 00757439  83c438               add esp, 0x38
// 0075743c  c20800               ret 8
// 0075743f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00757443  3bc7                 cmp eax, edi
// 00757445  7f02                 jg 0x757449
// 00757447  8bc7                 mov eax, edi
// 00757449  29460c               sub dword ptr [esi + 0xc], eax
// 0075744c  017e04               add dword ptr [esi + 4], edi
// 0075744f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00757453  8b4e04               mov ecx, dword ptr [esi + 4]
// 00757456  8b560c               mov edx, dword ptr [esi + 0xc]
// 00757459  8bf8                 mov edi, eax
// 0075745b  2bf9                 sub edi, ecx
// 0075745d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00757461  3bf9                 cmp edi, ecx
// 00757463  7e05                 jle 0x75746a
// 00757465  2bc1                 sub eax, ecx
// 00757467  894604               mov dword ptr [esi + 4], eax
// 0075746a  395604               cmp dword ptr [esi + 4], edx
// 0075746d  7c0b                 jl 0x75747a
// 0075746f  5f                   pop edi
// 00757470  5e                   pop esi
// 00757471  33c0                 xor eax, eax
// 00757473  5b                   pop ebx
// 00757474  83c438               add esp, 0x38
// 00757477  c20800               ret 8
// 0075747a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0075747e  8b5004               mov edx, dword ptr [eax + 4]
// 00757481  83c204               add edx, 4
// 00757484  89500c               mov dword ptr [eax + 0xc], edx
// 00757487  5f                   pop edi
// 00757488  5e                   pop esi
// 00757489  b801000000           mov eax, 1
// 0075748e  5b                   pop ebx
// 0075748f  83c438               add esp, 0x38
// 00757492  c20800               ret 8
// 00757495  8d4900               lea ecx, [ecx]
// 00757498  627375               bound esi, qword ptr [ebx + 0x75]
// 0075749b  00ac737500f673       add byte ptr [ebx + esi*2 + 0x73f60075], ch
// 007574a2  7500                 jne 0x7574a4
// 007574a4  3f                   aas 
// 007574a5  7475                 je 0x75751c
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetAvailableRect@CXTPDockingPaneAutoHideWnd@@ABEHAAVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
