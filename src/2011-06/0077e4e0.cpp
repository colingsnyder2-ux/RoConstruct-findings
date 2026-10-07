// roc 2011-06 0077e4e0  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e4e0
//
// 0077e4e0  2b4620               sub eax, dword ptr [esi + 0x20]
// 0077e4e3  57                   push edi
// 0077e4e4  6aff                 push -1
// 0077e4e6  6a01                 push 1
// 0077e4e8  56                   push esi
// 0077e4e9  8bf8                 mov edi, eax
// 0077e4eb  e810feffff           call 0x77e300
// 0077e4f0  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077e4f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0077e4f6  8b11                 mov edx, dword ptr [ecx]
// 0077e4f8  83c40c               add esp, 0xc
// 0077e4fb  807a0600             cmp byte ptr [edx + 6], 0
// 0077e4ff  7529                 jne 0x77e52a
// 0077e501  f6463802             test byte ptr [esi + 0x38], 2
// 0077e505  7423                 je 0x77e52a
// 0077e507  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077e50a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0077e50d  8d51ff               lea edx, [ecx - 1]
// 0077e510  895014               mov dword ptr [eax + 0x14], edx
// 0077e513  85c9                 test ecx, ecx
// 0077e515  7413                 je 0x77e52a
// 0077e517  6aff                 push -1
// 0077e519  6a04                 push 4
// 0077e51b  56                   push esi
// 0077e51c  e8dffdffff           call 0x77e300
// 0077e521  83c40c               add esp, 0xc
// 0077e524  f6463802             test byte ptr [esi + 0x38], 2
// 0077e528  75dd                 jne 0x77e507
// 0077e52a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0077e52d  03c7                 add eax, edi
// 0077e52f  5f                   pop edi
// 0077e530  c3                   ret 
// library lua-5.1.4/ldo.c (function _callrethooks)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
