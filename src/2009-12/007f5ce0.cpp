// roc 2009-12 007f5ce0  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5ce0
//
// 007f5ce0  56                   push esi
// 007f5ce1  8bf1                 mov esi, ecx
// 007f5ce3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f5ce9  6a00                 push 0
// 007f5ceb  6aff                 push -1
// 007f5ced  e8ae080100           call 0x8065a0
// 007f5cf2  85c0                 test eax, eax
// 007f5cf4  742a                 je 0x7f5d20
// 007f5cf6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f5cfc  83b8e000000002       cmp dword ptr [eax + 0xe0], 2
// 007f5d03  751b                 jne 0x7f5d20
// 007f5d05  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 007f5d0c  7412                 je 0x7f5d20
// 007f5d0e  6a00                 push 0
// 007f5d10  8bc8                 mov ecx, eax
// 007f5d12  8b01                 mov eax, dword ptr [ecx]
// 007f5d14  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 007f5d1a  6a01                 push 1
// 007f5d1c  6a00                 push 0
// 007f5d1e  ffd2                 call edx
// 007f5d20  5e                   pop esi
// 007f5d21  c3                   ret 
// copied from an identical function in another client (function ?OnMouseHover@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp