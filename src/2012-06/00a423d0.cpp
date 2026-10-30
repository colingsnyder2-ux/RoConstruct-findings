// roc 2012-06 00a423d0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a423d0
//
// 00a423d0  6aff                 push -1
// 00a423d2  68c062ae00           push 0xae62c0
// 00a423d7  64a100000000         mov eax, dword ptr fs:[0]
// 00a423dd  50                   push eax
// 00a423de  83ec30               sub esp, 0x30
// 00a423e1  53                   push ebx
// 00a423e2  55                   push ebp
// 00a423e3  56                   push esi
// 00a423e4  57                   push edi
// 00a423e5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a423ea  33c4                 xor eax, esp
// 00a423ec  50                   push eax
// 00a423ed  8d442444             lea eax, [esp + 0x44]
// 00a423f1  64a300000000         mov dword ptr fs:[0], eax
// 00a423f7  8bf9                 mov edi, ecx
// 00a423f9  8b742458             mov esi, dword ptr [esp + 0x58]
// 00a423fd  8bce                 mov ecx, esi
// 00a423ff  33db                 xor ebx, ebx
// 00a42401  ff156046b200         call dword ptr [0xb24660]
// 00a42407  84c0                 test al, al
// 00a42409  7407                 je 0xa42412
// 00a4240b  33c0                 xor eax, eax
// 00a4240d  e9f6000000           jmp 0xa42508
// 00a42412  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 00a42416  7471                 je 0xa42489
// 00a42418  81c78c000000         add edi, 0x8c
// 00a4241e  57                   push edi
// 00a4241f  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00a42423  57                   push edi
// 00a42424  8d4c242c             lea ecx, [esp + 0x2c]
// 00a42428  e80331f9ff           call 0x9d5530
// 00a4242d  56                   push esi
// 00a4242e  8d442418             lea eax, [esp + 0x18]
// 00a42432  50                   push eax
// 00a42433  8bcf                 mov ecx, edi
// 00a42435  895c2454             mov dword ptr [esp + 0x54], ebx
// 00a42439  e8a2c0a5ff           call 0x49e4e0
// 00a4243e  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00a42442  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00a42446  3bdd                 cmp ebx, ebp
// 00a42448  7e35                 jle 0xa4247f
// 00a4244a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a4244e  8bc1                 mov eax, ecx
// 00a42450  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 00a42454  6820890000           push 0x8920
// 00a42459  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00a4245d  99                   cdq 
// 00a4245e  2bc2                 sub eax, edx
// 00a42460  d1f8                 sar eax, 1
// 00a42462  2bc8                 sub ecx, eax
// 00a42464  8bc1                 mov eax, ecx
// 00a42466  89442460             mov dword ptr [esp + 0x60], eax
// 00a4246a  8d4c2460             lea ecx, [esp + 0x60]
// 00a4246e  2bc5                 sub eax, ebp
// 00a42470  51                   push ecx
// 00a42471  03c3                 add eax, ebx
// 00a42473  56                   push esi
// 00a42474  8bcf                 mov ecx, edi
// 00a42476  89442470             mov dword ptr [esp + 0x70], eax
// 00a4247a  e8515ff4ff           call 0x9883d0
// 00a4247f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a42483  8d4c2424             lea ecx, [esp + 0x24]
// 00a42487  eb70                 jmp 0xa424f9
// 00a42489  81c784000000         add edi, 0x84
// 00a4248f  57                   push edi
// 00a42490  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00a42494  57                   push edi
// 00a42495  8d4c243c             lea ecx, [esp + 0x3c]
// 00a42499  e89230f9ff           call 0x9d5530
// 00a4249e  8b2f                 mov ebp, dword ptr [edi]
// 00a424a0  6824880000           push 0x8824
// 00a424a5  8d542460             lea edx, [esp + 0x60]
// 00a424a9  52                   push edx
// 00a424aa  8bce                 mov ecx, esi
// 00a424ac  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00a424b4  ff155846b200         call dword ptr [0xb24658]
// 00a424ba  50                   push eax
// 00a424bb  8bce                 mov ecx, esi
// 00a424bd  ff159847b200         call dword ptr [0xb24798]
// 00a424c3  50                   push eax
// 00a424c4  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00a424c7  8bcf                 mov ecx, edi
// 00a424c9  ffd0                 call eax
// 00a424cb  837c247000           cmp dword ptr [esp + 0x70], 0
// 00a424d0  7423                 je 0xa424f5
// 00a424d2  8d4c2414             lea ecx, [esp + 0x14]
// 00a424d6  e8252cf9ff           call 0x9d5100
// 00a424db  68200c0000           push 0xc20
// 00a424e0  8d4c2418             lea ecx, [esp + 0x18]
// 00a424e4  51                   push ecx
// 00a424e5  56                   push esi
// 00a424e6  8bcf                 mov ecx, edi
// 00a424e8  e8e35ef4ff           call 0x9883d0
// 00a424ed  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a424f1  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00a424f5  8d4c2434             lea ecx, [esp + 0x34]
// 00a424f9  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00a42501  e8aa30f9ff           call 0x9d55b0
// 00a42506  8bc3                 mov eax, ebx
// 00a42508  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a4250c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a42513  59                   pop ecx
// 00a42514  5f                   pop edi
// 00a42515  5e                   pop esi
// 00a42516  5d                   pop ebp
// 00a42517  5b                   pop ebx
// 00a42518  83c43c               add esp, 0x3c
// 00a4251b  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp