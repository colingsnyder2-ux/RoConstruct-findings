// roc 2007-08 006e8600  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e8600
//
// 006e8600  6aff                 push -1
// 006e8602  68e07f7600           push 0x767fe0
// 006e8607  64a100000000         mov eax, dword ptr fs:[0]
// 006e860d  50                   push eax
// 006e860e  83ec30               sub esp, 0x30
// 006e8611  53                   push ebx
// 006e8612  55                   push ebp
// 006e8613  56                   push esi
// 006e8614  57                   push edi
// 006e8615  a188518b00           mov eax, dword ptr [0x8b5188]
// 006e861a  33c4                 xor eax, esp
// 006e861c  50                   push eax
// 006e861d  8d442444             lea eax, [esp + 0x44]
// 006e8621  64a300000000         mov dword ptr fs:[0], eax
// 006e8627  8bf9                 mov edi, ecx
// 006e8629  8b742458             mov esi, dword ptr [esp + 0x58]
// 006e862d  8bce                 mov ecx, esi
// 006e862f  33db                 xor ebx, ebx
// 006e8631  ff15d0dc7700         call dword ptr [0x77dcd0]
// 006e8637  84c0                 test al, al
// 006e8639  7407                 je 0x6e8642
// 006e863b  33c0                 xor eax, eax
// 006e863d  e9f6000000           jmp 0x6e8738
// 006e8642  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 006e8646  7471                 je 0x6e86b9
// 006e8648  81c78c000000         add edi, 0x8c
// 006e864e  57                   push edi
// 006e864f  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 006e8653  57                   push edi
// 006e8654  8d4c242c             lea ecx, [esp + 0x2c]
// 006e8658  e8f37ef9ff           call 0x680550
// 006e865d  56                   push esi
// 006e865e  8d442418             lea eax, [esp + 0x18]
// 006e8662  50                   push eax
// 006e8663  8bcf                 mov ecx, edi
// 006e8665  895c2454             mov dword ptr [esp + 0x54], ebx
// 006e8669  e89253d7ff           call 0x45da00
// 006e866e  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 006e8672  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 006e8676  3bdd                 cmp ebx, ebp
// 006e8678  7e35                 jle 0x6e86af
// 006e867a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006e867e  8bc1                 mov eax, ecx
// 006e8680  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 006e8684  6820890000           push 0x8920
// 006e8689  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 006e868d  99                   cdq 
// 006e868e  2bc2                 sub eax, edx
// 006e8690  d1f8                 sar eax, 1
// 006e8692  2bc8                 sub ecx, eax
// 006e8694  8bc1                 mov eax, ecx
// 006e8696  89442460             mov dword ptr [esp + 0x60], eax
// 006e869a  8d4c2460             lea ecx, [esp + 0x60]
// 006e869e  2bc5                 sub eax, ebp
// 006e86a0  51                   push ecx
// 006e86a1  03c3                 add eax, ebx
// 006e86a3  56                   push esi
// 006e86a4  8bcf                 mov ecx, edi
// 006e86a6  89442470             mov dword ptr [esp + 0x70], eax
// 006e86aa  e8c1ddf4ff           call 0x636470
// 006e86af  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006e86b3  8d4c2424             lea ecx, [esp + 0x24]
// 006e86b7  eb70                 jmp 0x6e8729
// 006e86b9  81c784000000         add edi, 0x84
// 006e86bf  57                   push edi
// 006e86c0  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 006e86c4  57                   push edi
// 006e86c5  8d4c243c             lea ecx, [esp + 0x3c]
// 006e86c9  e8827ef9ff           call 0x680550
// 006e86ce  8b2f                 mov ebp, dword ptr [edi]
// 006e86d0  6824880000           push 0x8824
// 006e86d5  8d542460             lea edx, [esp + 0x60]
// 006e86d9  52                   push edx
// 006e86da  8bce                 mov ecx, esi
// 006e86dc  c744245401000000     mov dword ptr [esp + 0x54], 1
// 006e86e4  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006e86ea  50                   push eax
// 006e86eb  8bce                 mov ecx, esi
// 006e86ed  ff1598dd7700         call dword ptr [0x77dd98]
// 006e86f3  50                   push eax
// 006e86f4  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006e86f7  8bcf                 mov ecx, edi
// 006e86f9  ffd0                 call eax
// 006e86fb  837c247000           cmp dword ptr [esp + 0x70], 0
// 006e8700  7423                 je 0x6e8725
// 006e8702  8d4c2414             lea ecx, [esp + 0x14]
// 006e8706  e85578f9ff           call 0x67ff60
// 006e870b  68200c0000           push 0xc20
// 006e8710  8d4c2418             lea ecx, [esp + 0x18]
// 006e8714  51                   push ecx
// 006e8715  56                   push esi
// 006e8716  8bcf                 mov ecx, edi
// 006e8718  e853ddf4ff           call 0x636470
// 006e871d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006e8721  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 006e8725  8d4c2434             lea ecx, [esp + 0x34]
// 006e8729  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 006e8731  e89a7ef9ff           call 0x6805d0
// 006e8736  8bc3                 mov eax, ebx
// 006e8738  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006e873c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e8743  59                   pop ecx
// 006e8744  5f                   pop edi
// 006e8745  5e                   pop esi
// 006e8746  5d                   pop ebp
// 006e8747  5b                   pop ebx
// 006e8748  83c43c               add esp, 0x3c
// 006e874b  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp