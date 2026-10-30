// roc 2009-12 007d54d0  unit: seg_007d0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d54d0
//
// 007d54d0  53                   push ebx
// 007d54d1  8bd8                 mov ebx, eax
// 007d54d3  8b03                 mov eax, dword ptr [ebx]
// 007d54d5  50                   push eax
// 007d54d6  51                   push ecx
// 007d54d7  ff1530b89800         call dword ptr [0x98b830]
// 007d54dd  83c408               add esp, 8
// 007d54e0  85c0                 test eax, eax
// 007d54e2  7502                 jne 0x7d54e6
// 007d54e4  5b                   pop ebx
// 007d54e5  c3                   ret 
// 007d54e6  8b13                 mov edx, dword ptr [ebx]
// 007d54e8  52                   push edx
// 007d54e9  e892fcffff           call 0x7d5180
// 007d54ee  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d54f1  8b08                 mov ecx, dword ptr [eax]
// 007d54f3  83c404               add esp, 4
// 007d54f6  8d51ff               lea edx, [ecx - 1]
// 007d54f9  8910                 mov dword ptr [eax], edx
// 007d54fb  85c9                 test ecx, ecx
// 007d54fd  7616                 jbe 0x7d5515
// 007d54ff  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5502  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5505  0fb602               movzx eax, byte ptr [edx]
// 007d5508  42                   inc edx
// 007d5509  895104               mov dword ptr [ecx + 4], edx
// 007d550c  8903                 mov dword ptr [ebx], eax
// 007d550e  b801000000           mov eax, 1
// 007d5513  5b                   pop ebx
// 007d5514  c3                   ret 
// 007d5515  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5518  50                   push eax
// 007d5519  e8b2bbffff           call 0x7d10d0
// 007d551e  83c404               add esp, 4
// 007d5521  8903                 mov dword ptr [ebx], eax
// 007d5523  b801000000           mov eax, 1
// 007d5528  5b                   pop ebx
// 007d5529  c3                   ret 
// copied from an identical function in another client (function _check_next)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll llex.c