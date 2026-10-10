// roc 2008-06 006ab8d0  unit: CXTPControl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab8d0
//
// 006ab8d0  83ec10               sub esp, 0x10
// 006ab8d3  56                   push esi
// 006ab8d4  8bf1                 mov esi, ecx
// 006ab8d6  8b06                 mov eax, dword ptr [esi]
// 006ab8d8  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 006ab8de  6a00                 push 0
// 006ab8e0  ffd2                 call edx
// 006ab8e2  85c0                 test eax, eax
// 006ab8e4  744b                 je 0x6ab931
// 006ab8e6  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 006ab8ed  7442                 je 0x6ab931
// 006ab8ef  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 006ab8f5  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 006ab8fb  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 006ab901  89442404             mov dword ptr [esp + 4], eax
// 006ab905  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006ab90b  89442410             mov dword ptr [esp + 0x10], eax
// 006ab90f  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ab913  894c2408             mov dword ptr [esp + 8], ecx
// 006ab917  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ab91d  8954240c             mov dword ptr [esp + 0xc], edx
// 006ab921  8b11                 mov edx, dword ptr [ecx]
// 006ab923  8b92ac010000         mov edx, dword ptr [edx + 0x1ac]
// 006ab929  50                   push eax
// 006ab92a  8d442408             lea eax, [esp + 8]
// 006ab92e  50                   push eax
// 006ab92f  ffd2                 call edx
// 006ab931  5e                   pop esi
// 006ab932  83c410               add esp, 0x10
// 006ab935  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?RedrawParent@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
