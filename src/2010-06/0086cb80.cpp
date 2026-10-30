// roc 2010-06 0086cb80  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086cb80
//
// 0086cb80  6aff                 push -1
// 0086cb82  6810959b00           push 0x9b9510
// 0086cb87  64a100000000         mov eax, dword ptr fs:[0]
// 0086cb8d  50                   push eax
// 0086cb8e  83ec30               sub esp, 0x30
// 0086cb91  53                   push ebx
// 0086cb92  55                   push ebp
// 0086cb93  56                   push esi
// 0086cb94  57                   push edi
// 0086cb95  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0086cb9a  33c4                 xor eax, esp
// 0086cb9c  50                   push eax
// 0086cb9d  8d442444             lea eax, [esp + 0x44]
// 0086cba1  64a300000000         mov dword ptr fs:[0], eax
// 0086cba7  8bf9                 mov edi, ecx
// 0086cba9  8b742458             mov esi, dword ptr [esp + 0x58]
// 0086cbad  8bce                 mov ecx, esi
// 0086cbaf  33db                 xor ebx, ebx
// 0086cbb1  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0086cbb7  84c0                 test al, al
// 0086cbb9  7407                 je 0x86cbc2
// 0086cbbb  33c0                 xor eax, eax
// 0086cbbd  e9f6000000           jmp 0x86ccb8
// 0086cbc2  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 0086cbc6  7471                 je 0x86cc39
// 0086cbc8  81c78c000000         add edi, 0x8c
// 0086cbce  57                   push edi
// 0086cbcf  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0086cbd3  57                   push edi
// 0086cbd4  8d4c242c             lea ecx, [esp + 0x2c]
// 0086cbd8  e8c32af9ff           call 0x7ff6a0
// 0086cbdd  56                   push esi
// 0086cbde  8d442418             lea eax, [esp + 0x18]
// 0086cbe2  50                   push eax
// 0086cbe3  8bcf                 mov ecx, edi
// 0086cbe5  895c2454             mov dword ptr [esp + 0x54], ebx
// 0086cbe9  e8c222c0ff           call 0x46eeb0
// 0086cbee  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0086cbf2  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 0086cbf6  3bdd                 cmp ebx, ebp
// 0086cbf8  7e35                 jle 0x86cc2f
// 0086cbfa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0086cbfe  8bc1                 mov eax, ecx
// 0086cc00  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 0086cc04  6820890000           push 0x8920
// 0086cc09  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0086cc0d  99                   cdq 
// 0086cc0e  2bc2                 sub eax, edx
// 0086cc10  d1f8                 sar eax, 1
// 0086cc12  2bc8                 sub ecx, eax
// 0086cc14  8bc1                 mov eax, ecx
// 0086cc16  89442460             mov dword ptr [esp + 0x60], eax
// 0086cc1a  8d4c2460             lea ecx, [esp + 0x60]
// 0086cc1e  2bc5                 sub eax, ebp
// 0086cc20  51                   push ecx
// 0086cc21  03c3                 add eax, ebx
// 0086cc23  56                   push esi
// 0086cc24  8bcf                 mov ecx, edi
// 0086cc26  89442470             mov dword ptr [esp + 0x70], eax
// 0086cc2a  e8b110f4ff           call 0x7adce0
// 0086cc2f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0086cc33  8d4c2424             lea ecx, [esp + 0x24]
// 0086cc37  eb70                 jmp 0x86cca9
// 0086cc39  81c784000000         add edi, 0x84
// 0086cc3f  57                   push edi
// 0086cc40  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0086cc44  57                   push edi
// 0086cc45  8d4c243c             lea ecx, [esp + 0x3c]
// 0086cc49  e8522af9ff           call 0x7ff6a0
// 0086cc4e  8b2f                 mov ebp, dword ptr [edi]
// 0086cc50  6824880000           push 0x8824
// 0086cc55  8d542460             lea edx, [esp + 0x60]
// 0086cc59  52                   push edx
// 0086cc5a  8bce                 mov ecx, esi
// 0086cc5c  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0086cc64  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0086cc6a  50                   push eax
// 0086cc6b  8bce                 mov ecx, esi
// 0086cc6d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0086cc73  50                   push eax
// 0086cc74  8b4570               mov eax, dword ptr [ebp + 0x70]
// 0086cc77  8bcf                 mov ecx, edi
// 0086cc79  ffd0                 call eax
// 0086cc7b  837c247000           cmp dword ptr [esp + 0x70], 0
// 0086cc80  7423                 je 0x86cca5
// 0086cc82  8d4c2414             lea ecx, [esp + 0x14]
// 0086cc86  e8e525f9ff           call 0x7ff270
// 0086cc8b  68200c0000           push 0xc20
// 0086cc90  8d4c2418             lea ecx, [esp + 0x18]
// 0086cc94  51                   push ecx
// 0086cc95  56                   push esi
// 0086cc96  8bcf                 mov ecx, edi
// 0086cc98  e84310f4ff           call 0x7adce0
// 0086cc9d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0086cca1  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0086cca5  8d4c2434             lea ecx, [esp + 0x34]
// 0086cca9  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0086ccb1  e86a2af9ff           call 0x7ff720
// 0086ccb6  8bc3                 mov eax, ebx
// 0086ccb8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0086ccbc  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ccc3  59                   pop ecx
// 0086ccc4  5f                   pop edi
// 0086ccc5  5e                   pop esi
// 0086ccc6  5d                   pop ebp
// 0086ccc7  5b                   pop ebx
// 0086ccc8  83c43c               add esp, 0x3c
// 0086cccb  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp