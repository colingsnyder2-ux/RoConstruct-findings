// roc 2008-06 006ace70  unit: PAVCXTPControlAction::?$CArray  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ace70
//
// 006ace70  56                   push esi
// 006ace71  8bf1                 mov esi, ecx
// 006ace73  837e6400             cmp dword ptr [esi + 0x64], 0
// 006ace77  7e17                 jle 0x6ace90
// 006ace79  8b4660               mov eax, dword ptr [esi + 0x60]
// 006ace7c  8b08                 mov ecx, dword ptr [eax]
// 006ace7e  8b11                 mov edx, dword ptr [ecx]
// 006ace80  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 006ace86  6a00                 push 0
// 006ace88  ffd0                 call eax
// 006ace8a  837e6400             cmp dword ptr [esi + 0x64], 0
// 006ace8e  7fe9                 jg 0x6ace79
// 006ace90  5e                   pop esi
// 006ace91  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?OnRemoved@CXTPControlAction@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
