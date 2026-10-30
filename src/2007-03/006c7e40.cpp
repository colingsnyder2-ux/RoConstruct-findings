// roc 2007-03 006c7e40  unit: seg_006c0000  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7e40
//
// 006c7e40  83ec48               sub esp, 0x48
// 006c7e43  53                   push ebx
// 006c7e44  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006c7e48  56                   push esi
// 006c7e49  53                   push ebx
// 006c7e4a  8bf1                 mov esi, ecx
// 006c7e4c  e871350700           call 0x73b3c2
// 006c7e51  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 006c7e58  0f84c4000000         je 0x6c7f22
// 006c7e5e  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 006c7e65  740d                 je 0x6c7e74
// 006c7e67  83be3801000000       cmp dword ptr [esi + 0x138], 0
// 006c7e6e  0f84ae000000         je 0x6c7f22
// 006c7e74  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 006c7e7b  0f85a1000000         jne 0x6c7f22
// 006c7e81  55                   push ebp
// 006c7e82  57                   push edi
// 006c7e83  56                   push esi
// 006c7e84  8d4c2424             lea ecx, [esp + 0x24]
// 006c7e88  e84339faff           call 0x66b7d0
// 006c7e8d  56                   push esi
// 006c7e8e  8d4c2414             lea ecx, [esp + 0x14]
// 006c7e92  e8c939faff           call 0x66b860
// 006c7e97  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c7e9b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006c7e9f  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 006c7ea3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 006c7ea7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c7eab  8b442428             mov eax, dword ptr [esp + 0x28]
// 006c7eaf  2b442420             sub eax, dword ptr [esp + 0x20]
// 006c7eb3  2b542410             sub edx, dword ptr [esp + 0x10]
// 006c7eb7  8bb61c010000         mov esi, dword ptr [esi + 0x11c]
// 006c7ebd  2bc2                 sub eax, edx
// 006c7ebf  2bcf                 sub ecx, edi
// 006c7ec1  8bf9                 mov edi, ecx
// 006c7ec3  8be8                 mov ebp, eax
// 006c7ec5  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c7ec8  8b4010               mov eax, dword ptr [eax + 0x10]
// 006c7ecb  8d4e20               lea ecx, [esi + 0x20]
// 006c7ece  8d542430             lea edx, [esp + 0x30]
// 006c7ed2  52                   push edx
// 006c7ed3  ffd0                 call eax
// 006c7ed5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006c7ed9  8d0429               lea eax, [ecx + ebp]
// 006c7edc  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 006c7edf  3bc8                 cmp ecx, eax
// 006c7ee1  7e02                 jle 0x6c7ee5
// 006c7ee3  8bc1                 mov eax, ecx
// 006c7ee5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 006c7ee9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 006c7eec  894318               mov dword ptr [ebx + 0x18], eax
// 006c7eef  8d0417               lea eax, [edi + edx]
// 006c7ef2  3bc8                 cmp ecx, eax
// 006c7ef4  7e02                 jle 0x6c7ef8
// 006c7ef6  8bc1                 mov eax, ecx
// 006c7ef8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006c7efb  89431c               mov dword ptr [ebx + 0x1c], eax
// 006c7efe  8b442450             mov eax, dword ptr [esp + 0x50]
// 006c7f02  03c5                 add eax, ebp
// 006c7f04  3bc8                 cmp ecx, eax
// 006c7f06  7d02                 jge 0x6c7f0a
// 006c7f08  8bc1                 mov eax, ecx
// 006c7f0a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006c7f0e  894320               mov dword ptr [ebx + 0x20], eax
// 006c7f11  8d0439               lea eax, [ecx + edi]
// 006c7f14  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006c7f17  3bc8                 cmp ecx, eax
// 006c7f19  5f                   pop edi
// 006c7f1a  5d                   pop ebp
// 006c7f1b  7d02                 jge 0x6c7f1f
// 006c7f1d  8bc1                 mov eax, ecx
// 006c7f1f  894324               mov dword ptr [ebx + 0x24], eax
// 006c7f22  5e                   pop esi
// 006c7f23  5b                   pop ebx
// 006c7f24  83c448               add esp, 0x48
// 006c7f27  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
