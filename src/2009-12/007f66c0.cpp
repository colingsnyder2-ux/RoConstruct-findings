// roc 2009-12 007f66c0  unit: CXTPControl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f66c0
//
// 007f66c0  83ec10               sub esp, 0x10
// 007f66c3  56                   push esi
// 007f66c4  8bf1                 mov esi, ecx
// 007f66c6  8b06                 mov eax, dword ptr [esi]
// 007f66c8  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007f66ce  6a00                 push 0
// 007f66d0  ffd2                 call edx
// 007f66d2  85c0                 test eax, eax
// 007f66d4  744b                 je 0x7f6721
// 007f66d6  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 007f66dd  7442                 je 0x7f6721
// 007f66df  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007f66e5  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 007f66eb  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007f66f1  89442404             mov dword ptr [esp + 4], eax
// 007f66f5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007f66fb  89442410             mov dword ptr [esp + 0x10], eax
// 007f66ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f6703  894c2408             mov dword ptr [esp + 8], ecx
// 007f6707  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f670d  8954240c             mov dword ptr [esp + 0xc], edx
// 007f6711  8b11                 mov edx, dword ptr [ecx]
// 007f6713  8b92ac010000         mov edx, dword ptr [edx + 0x1ac]
// 007f6719  50                   push eax
// 007f671a  8d442408             lea eax, [esp + 8]
// 007f671e  50                   push eax
// 007f671f  ffd2                 call edx
// 007f6721  5e                   pop esi
// 007f6722  83c410               add esp, 0x10
// 007f6725  c20400               ret 4
// copied from an identical function in another client (function ?RedrawParent@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp