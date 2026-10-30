// roc 2009-12 00838ad0  unit: CXTPDockingPaneManager  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838ad0
//
// 00838ad0  53                   push ebx
// 00838ad1  56                   push esi
// 00838ad2  57                   push edi
// 00838ad3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00838ad7  837f1800             cmp dword ptr [edi + 0x18], 0
// 00838adb  8bf1                 mov esi, ecx
// 00838add  7508                 jne 0x838ae7
// 00838adf  57                   push edi
// 00838ae0  e89bfaffff           call 0x838580
// 00838ae5  eb16                 jmp 0x838afd
// 00838ae7  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00838aed  8b07                 mov eax, dword ptr [edi]
// 00838aef  8b5044               mov edx, dword ptr [eax + 0x44]
// 00838af2  6a00                 push 0
// 00838af4  6a00                 push 0
// 00838af6  51                   push ecx
// 00838af7  8bcf                 mov ecx, edi
// 00838af9  ffd2                 call edx
// 00838afb  8bf8                 mov edi, eax
// 00838afd  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00838b03  8b06                 mov eax, dword ptr [esi]
// 00838b05  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00838b0b  51                   push ecx
// 00838b0c  6a03                 push 3
// 00838b0e  8bce                 mov ecx, esi
// 00838b10  ffd2                 call edx
// 00838b12  85c0                 test eax, eax
// 00838b14  7408                 je 0x838b1e
// 00838b16  8d9808ffffff         lea ebx, [eax - 0xf8]
// 00838b1c  eb02                 jmp 0x838b20
// 00838b1e  33db                 xor ebx, ebx
// 00838b20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00838b24  8b542418             mov edx, dword ptr [esp + 0x18]
// 00838b28  83ec10               sub esp, 0x10
// 00838b2b  8bc4                 mov eax, esp
// 00838b2d  8908                 mov dword ptr [eax], ecx
// 00838b2f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00838b33  895004               mov dword ptr [eax + 4], edx
// 00838b36  8b542430             mov edx, dword ptr [esp + 0x30]
// 00838b3a  894808               mov dword ptr [eax + 8], ecx
// 00838b3d  57                   push edi
// 00838b3e  8bcb                 mov ecx, ebx
// 00838b40  89500c               mov dword ptr [eax + 0xc], edx
// 00838b43  e8a85c0700           call 0x8ae7f0
// 00838b48  8bce                 mov ecx, esi
// 00838b4a  e8c1feffff           call 0x838a10
// 00838b4f  5f                   pop edi
// 00838b50  c7863801000000000000 mov dword ptr [esi + 0x138], 0
// 00838b5a  5e                   pop esi
// 00838b5b  8bc3                 mov eax, ebx
// 00838b5d  5b                   pop ebx
// 00838b5e  c21400               ret 0x14
// copied from an identical function in another client (function ?FloatPane@CXTPDockingPaneManager@@QAEPAVCXTPDockingPaneMiniWnd@@PAVCXTPDockingPaneBase@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp