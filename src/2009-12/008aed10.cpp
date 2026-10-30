// roc 2009-12 008aed10  unit: CXTPDockingPaneMiniWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aed10
//
// 008aed10  56                   push esi
// 008aed11  57                   push edi
// 008aed12  8bf9                 mov edi, ecx
// 008aed14  8db708ffffff         lea esi, [edi - 0xf8]
// 008aed1a  8bce                 mov ecx, esi
// 008aed1c  e8dff9ffff           call 0x8ae700
// 008aed21  85c0                 test eax, eax
// 008aed23  7432                 je 0x8aed57
// 008aed25  85f6                 test esi, esi
// 008aed27  7418                 je 0x8aed41
// 008aed29  837e2000             cmp dword ptr [esi + 0x20], 0
// 008aed2d  7412                 je 0x8aed41
// 008aed2f  85f6                 test esi, esi
// 008aed31  7403                 je 0x8aed36
// 008aed33  8b7620               mov esi, dword ptr [esi + 0x20]
// 008aed36  6a00                 push 0
// 008aed38  6a00                 push 0
// 008aed3a  56                   push esi
// 008aed3b  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008aed41  8b8728ffffff         mov eax, dword ptr [edi - 0xd8]
// 008aed47  6a00                 push 0
// 008aed49  6a00                 push 0
// 008aed4b  6885000000           push 0x85
// 008aed50  50                   push eax
// 008aed51  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008aed57  5f                   pop edi
// 008aed58  5e                   pop esi
// 008aed59  c3                   ret 
// copied from an identical function in another client (function ?RedrawPane@CXTPDockingPaneMiniWnd@@MAEXXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp