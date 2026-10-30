// from server: 100% by auto
// roc 2008-06 0065cc60  unit: RBX::BallBallContact  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065cc60
//
// 0065cc60  53                   push ebx
// 0065cc61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065cc65  56                   push esi
// 0065cc66  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065cc6a  8b4608               mov eax, dword ptr [esi + 8]
// 0065cc6d  3b4308               cmp eax, dword ptr [ebx + 8]
// 0065cc70  7412                 je 0x65cc84
// 0065cc72  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065cc76  53                   push ebx
// 0065cc77  56                   push esi
// 0065cc78  50                   push eax
// 0065cc79  e8726efcff           call 0x623af0
// 0065cc7e  83c40c               add esp, 0xc
// 0065cc81  5e                   pop esi
// 0065cc82  5b                   pop ebx
// 0065cc83  c3                   ret 
// 0065cc84  83f803               cmp eax, 3
// 0065cc87  7518                 jne 0x65cca1
// 0065cc89  dd03                 fld qword ptr [ebx]
// 0065cc8b  dc1e                 fcomp qword ptr [esi]
// 0065cc8d  dfe0                 fnstsw ax
// 0065cc8f  f6c441               test ah, 0x41
// 0065cc92  7508                 jne 0x65cc9c
// 0065cc94  5e                   pop esi
// 0065cc95  b801000000           mov eax, 1
// 0065cc9a  5b                   pop ebx
// 0065cc9b  c3                   ret 
// 0065cc9c  5e                   pop esi
// 0065cc9d  33c0                 xor eax, eax
// 0065cc9f  5b                   pop ebx
// 0065cca0  c3                   ret 
// 0065cca1  83f804               cmp eax, 4
// 0065cca4  7515                 jne 0x65ccbb
// 0065cca6  8b03                 mov eax, dword ptr [ebx]
// 0065cca8  8b0e                 mov ecx, dword ptr [esi]
// 0065ccaa  e841ffffff           call 0x65cbf0
// 0065ccaf  33c9                 xor ecx, ecx
// 0065ccb1  85c0                 test eax, eax
// 0065ccb3  0f9cc1               setl cl
// 0065ccb6  5e                   pop esi
// 0065ccb7  5b                   pop ebx
// 0065ccb8  8bc1                 mov eax, ecx
// 0065ccba  c3                   ret 
// 0065ccbb  57                   push edi
// 0065ccbc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065ccc0  6a0d                 push 0xd
// 0065ccc2  56                   push esi
// 0065ccc3  8bc7                 mov eax, edi
// 0065ccc5  e8a6feffff           call 0x65cb70
// 0065ccca  83c408               add esp, 8
// 0065cccd  83f8ff               cmp eax, -1
// 0065ccd0  750b                 jne 0x65ccdd
// 0065ccd2  53                   push ebx
// 0065ccd3  56                   push esi
// 0065ccd4  57                   push edi
// 0065ccd5  e8166efcff           call 0x623af0
// 0065ccda  83c40c               add esp, 0xc
// 0065ccdd  5f                   pop edi
// 0065ccde  5e                   pop esi
// 0065ccdf  5b                   pop ebx
// 0065cce0  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_lessthan)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
