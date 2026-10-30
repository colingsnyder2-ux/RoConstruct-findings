// roc 2009-12 00804f20  unit: CXTPCommandBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804f20
//
// 00804f20  56                   push esi
// 00804f21  8bf1                 mov esi, ecx
// 00804f23  e878feffff           call 0x804da0
// 00804f28  85c0                 test eax, eax
// 00804f2a  7533                 jne 0x804f5f
// 00804f2c  3986e0000000         cmp dword ptr [esi + 0xe0], eax
// 00804f32  7412                 je 0x804f46
// 00804f34  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 00804f3b  7522                 jne 0x804f5f
// 00804f3d  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 00804f44  7519                 jne 0x804f5f
// 00804f46  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00804f4d  7510                 jne 0x804f5f
// 00804f4f  8b06                 mov eax, dword ptr [esi]
// 00804f51  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00804f57  6a00                 push 0
// 00804f59  6aff                 push -1
// 00804f5b  8bce                 mov ecx, esi
// 00804f5d  ffd2                 call edx
// 00804f5f  5e                   pop esi
// 00804f60  c3                   ret 
// copied from an identical function in another client (function ?OnMouseLeave@CXTPCommandBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp