// roc 2009-12 007f9460  unit: CPatchedControlComboBox  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9460
//
// 007f9460  8b442404             mov eax, dword ptr [esp + 4]
// 007f9464  56                   push esi
// 007f9465  8bf1                 mov esi, ecx
// 007f9467  898688010000         mov dword ptr [esi + 0x188], eax
// 007f946d  85c0                 test eax, eax
// 007f946f  7420                 je 0x7f9491
// 007f9471  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 007f9478  7534                 jne 0x7f94ae
// 007f947a  8b06                 mov eax, dword ptr [esi]
// 007f947c  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 007f9482  ffd2                 call edx
// 007f9484  898684010000         mov dword ptr [esi + 0x184], eax
// 007f948a  897060               mov dword ptr [eax + 0x60], esi
// 007f948d  5e                   pop esi
// 007f948e  c20400               ret 4
// 007f9491  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007f9497  85c9                 test ecx, ecx
// 007f9499  7413                 je 0x7f94ae
// 007f949b  8b01                 mov eax, dword ptr [ecx]
// 007f949d  8b5004               mov edx, dword ptr [eax + 4]
// 007f94a0  6a01                 push 1
// 007f94a2  ffd2                 call edx
// 007f94a4  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 007f94ae  5e                   pop esi
// 007f94af  c20400               ret 4
// copied from an identical function in another client (function ?SetDropDownListStyle@CXTPControlComboBox@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp