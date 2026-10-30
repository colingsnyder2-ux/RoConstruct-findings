// roc 2009-12 008166a0  unit: CXTPCommandBar  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008166a0
//
// 008166a0  53                   push ebx
// 008166a1  55                   push ebp
// 008166a2  56                   push esi
// 008166a3  57                   push edi
// 008166a4  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008166a8  57                   push edi
// 008166a9  e8e2b20200           call 0x841990
// 008166ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008166b2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008166b6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008166ba  8bf0                 mov esi, eax
// 008166bc  8b06                 mov eax, dword ptr [esi]
// 008166be  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008166c4  83c404               add esp, 4
// 008166c7  6a01                 push 1
// 008166c9  51                   push ecx
// 008166ca  8bce                 mov ecx, esi
// 008166cc  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 008166d2  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 008166d8  89be04010000         mov dword ptr [esi + 0x104], edi
// 008166de  ffd2                 call edx
// 008166e0  85c0                 test eax, eax
// 008166e2  750e                 jne 0x8166f2
// 008166e4  8bce                 mov ecx, esi
// 008166e6  e8f1d6fdff           call 0x7f3ddc
// 008166eb  5f                   pop edi
// 008166ec  5e                   pop esi
// 008166ed  5d                   pop ebp
// 008166ee  33c0                 xor eax, eax
// 008166f0  5b                   pop ebx
// 008166f1  c3                   ret 
// 008166f2  85ff                 test edi, edi
// 008166f4  741d                 je 0x816713
// 008166f6  e8a9fe1000           call 0x9265a4
// 008166fb  83c058               add eax, 0x58
// 008166fe  8378047b             cmp dword ptr [eax + 4], 0x7b
// 00816702  750f                 jne 0x816713
// 00816704  83780cff             cmp dword ptr [eax + 0xc], -1
// 00816708  7509                 jne 0x816713
// 0081670a  6a01                 push 1
// 0081670c  8bcf                 mov ecx, edi
// 0081670e  e82df4ffff           call 0x815b40
// 00816713  8b442428             mov eax, dword ptr [esp + 0x28]
// 00816717  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081671b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0081671f  55                   push ebp
// 00816720  50                   push eax
// 00816721  8b442420             mov eax, dword ptr [esp + 0x20]
// 00816725  53                   push ebx
// 00816726  51                   push ecx
// 00816727  52                   push edx
// 00816728  50                   push eax
// 00816729  56                   push esi
// 0081672a  e811feffff           call 0x816540
// 0081672f  83c41c               add esp, 0x1c
// 00816732  8bce                 mov ecx, esi
// 00816734  8bf8                 mov edi, eax
// 00816736  e8a1d6fdff           call 0x7f3ddc
// 0081673b  8bc7                 mov eax, edi
// 0081673d  5f                   pop edi
// 0081673e  5e                   pop esi
// 0081673f  5d                   pop ebp
// 00816740  5b                   pop ebx
// 00816741  c3                   ret 
// copied from an identical function in another client (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCMenu@@IHHPAVCWnd@@PBUtagRECT@@1PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp