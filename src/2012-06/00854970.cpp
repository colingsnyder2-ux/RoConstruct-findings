// from server: 100% by auto
// roc 2012-06 00854970  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854970
//
// 00854970  2b4620               sub eax, dword ptr [esi + 0x20]
// 00854973  57                   push edi
// 00854974  6aff                 push -1
// 00854976  6a01                 push 1
// 00854978  56                   push esi
// 00854979  8bf8                 mov edi, eax
// 0085497b  e810feffff           call 0x854790
// 00854980  8b4614               mov eax, dword ptr [esi + 0x14]
// 00854983  8b4804               mov ecx, dword ptr [eax + 4]
// 00854986  8b11                 mov edx, dword ptr [ecx]
// 00854988  83c40c               add esp, 0xc
// 0085498b  807a0600             cmp byte ptr [edx + 6], 0
// 0085498f  7529                 jne 0x8549ba
// 00854991  f6463802             test byte ptr [esi + 0x38], 2
// 00854995  7423                 je 0x8549ba
// 00854997  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085499a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0085499d  8d51ff               lea edx, [ecx - 1]
// 008549a0  895014               mov dword ptr [eax + 0x14], edx
// 008549a3  85c9                 test ecx, ecx
// 008549a5  7413                 je 0x8549ba
// 008549a7  6aff                 push -1
// 008549a9  6a04                 push 4
// 008549ab  56                   push esi
// 008549ac  e8dffdffff           call 0x854790
// 008549b1  83c40c               add esp, 0xc
// 008549b4  f6463802             test byte ptr [esi + 0x38], 2
// 008549b8  75dd                 jne 0x854997
// 008549ba  8b4620               mov eax, dword ptr [esi + 0x20]
// 008549bd  03c7                 add eax, edi
// 008549bf  5f                   pop edi
// 008549c0  c3                   ret 
// library lua-5.1.4/ldo.c (function _callrethooks)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
