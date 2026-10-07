// roc 2008-06 007763b0  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007763b0
//
// 007763b0  56                   push esi
// 007763b1  8bf1                 mov esi, ecx
// 007763b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007763b7  85c9                 test ecx, ecx
// 007763b9  750e                 jne 0x7763c9
// 007763bb  8b4674               mov eax, dword ptr [esi + 0x74]
// 007763be  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007763c1  83c070               add eax, 0x70
// 007763c4  83f9ff               cmp ecx, -1
// 007763c7  eb36                 jmp 0x7763ff
// 007763c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007763cd  6a00                 push 0
// 007763cf  50                   push eax
// 007763d0  e86bb3f9ff           call 0x711740
// 007763d5  83caff               or edx, 0xffffffff
// 007763d8  85c0                 test eax, eax
// 007763da  7418                 je 0x7763f4
// 007763dc  395078               cmp dword ptr [eax + 0x78], edx
// 007763df  7505                 jne 0x7763e6
// 007763e1  395074               cmp dword ptr [eax + 0x74], edx
// 007763e4  740e                 je 0x7763f4
// 007763e6  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007763e9  3bca                 cmp ecx, edx
// 007763eb  751b                 jne 0x776408
// 007763ed  8b4074               mov eax, dword ptr [eax + 0x74]
// 007763f0  5e                   pop esi
// 007763f1  c20800               ret 8
// 007763f4  8b4674               mov eax, dword ptr [esi + 0x74]
// 007763f7  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007763fa  83c070               add eax, 0x70
// 007763fd  3bca                 cmp ecx, edx
// 007763ff  7507                 jne 0x776408
// 00776401  8b4004               mov eax, dword ptr [eax + 4]
// 00776404  5e                   pop esi
// 00776405  c20800               ret 8
// 00776408  8bc1                 mov eax, ecx
// 0077640a  5e                   pop esi
// 0077640b  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
