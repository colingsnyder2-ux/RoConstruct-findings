// roc 2009-12 0086cb70  unit: CSelectionCaption  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086cb70
//
// 0086cb70  56                   push esi
// 0086cb71  8bf1                 mov esi, ecx
// 0086cb73  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086cb79  57                   push edi
// 0086cb7a  8b3d84cc9800         mov edi, dword ptr [0x98cc84]
// 0086cb80  50                   push eax
// 0086cb81  ffd7                 call edi
// 0086cb83  85c0                 test eax, eax
// 0086cb85  7423                 je 0x86cbaa
// 0086cb87  6a00                 push 0
// 0086cb89  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086cb8f  e8b46ff8ff           call 0x7f3b48
// 0086cb94  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0086cb9a  6a00                 push 0
// 0086cb9c  6a00                 push 0
// 0086cb9e  68f3000000           push 0xf3
// 0086cba3  51                   push ecx
// 0086cba4  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086cbaa  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0086cbb0  85c0                 test eax, eax
// 0086cbb2  7403                 je 0x86cbb7
// 0086cbb4  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086cbb7  50                   push eax
// 0086cbb8  ffd7                 call edi
// 0086cbba  85c0                 test eax, eax
// 0086cbbc  740d                 je 0x86cbcb
// 0086cbbe  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086cbc4  8b11                 mov edx, dword ptr [ecx]
// 0086cbc6  8b4268               mov eax, dword ptr [edx + 0x68]
// 0086cbc9  ffd0                 call eax
// 0086cbcb  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086cbd1  85c9                 test ecx, ecx
// 0086cbd3  7413                 je 0x86cbe8
// 0086cbd5  8b11                 mov edx, dword ptr [ecx]
// 0086cbd7  8b4204               mov eax, dword ptr [edx + 4]
// 0086cbda  6a01                 push 1
// 0086cbdc  ffd0                 call eax
// 0086cbde  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 0086cbe8  5f                   pop edi
// 0086cbe9  5e                   pop esi
// 0086cbea  c3                   ret 
// copied from an identical function in another client (function ?KillChildWindow@CXTCaption@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp