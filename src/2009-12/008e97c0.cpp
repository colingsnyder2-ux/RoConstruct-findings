// roc 2009-12 008e97c0  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e97c0
//
// 008e97c0  8b442404             mov eax, dword ptr [esp + 4]
// 008e97c4  57                   push edi
// 008e97c5  8bf9                 mov edi, ecx
// 008e97c7  85c0                 test eax, eax
// 008e97c9  7c3f                 jl 0x8e980a
// 008e97cb  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 008e97ce  7d3a                 jge 0x8e980a
// 008e97d0  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 008e97d3  8d4f44               lea ecx, [edi + 0x44]
// 008e97d6  7d36                 jge 0x8e980e
// 008e97d8  8b5104               mov edx, dword ptr [ecx + 4]
// 008e97db  56                   push esi
// 008e97dc  8b3482               mov esi, dword ptr [edx + eax*4]
// 008e97df  6a01                 push 1
// 008e97e1  50                   push eax
// 008e97e2  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 008e97ec  e88f3af4ff           call 0x82d280
// 008e97f1  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008e97f4  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008e97fa  8b11                 mov edx, dword ptr [ecx]
// 008e97fc  8b4258               mov eax, dword ptr [edx + 0x58]
// 008e97ff  56                   push esi
// 008e9800  ffd0                 call eax
// 008e9802  8bce                 mov ecx, esi
// 008e9804  e8d3a5f0ff           call 0x7f3ddc
// 008e9809  5e                   pop esi
// 008e980a  5f                   pop edi
// 008e980b  c20400               ret 4
// 008e980e  e8f9a2f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@CXTPRibbonGroup@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp