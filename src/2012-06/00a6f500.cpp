// roc 2012-06 00a6f500  unit: CXTPRibbonGroupControlPopup  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f500
//
// 00a6f500  55                   push ebp
// 00a6f501  56                   push esi
// 00a6f502  8be9                 mov ebp, ecx
// 00a6f504  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 00a6f507  83ee01               sub esi, 1
// 00a6f50a  7847                 js 0xa6f553
// 00a6f50c  53                   push ebx
// 00a6f50d  8d5d44               lea ebx, [ebp + 0x44]
// 00a6f510  57                   push edi
// 00a6f511  85f6                 test esi, esi
// 00a6f513  7c41                 jl 0xa6f556
// 00a6f515  3b7308               cmp esi, dword ptr [ebx + 8]
// 00a6f518  7d3c                 jge 0xa6f556
// 00a6f51a  8b4304               mov eax, dword ptr [ebx + 4]
// 00a6f51d  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00a6f520  6a01                 push 1
// 00a6f522  56                   push esi
// 00a6f523  8bcb                 mov ecx, ebx
// 00a6f525  c7875801000000000000 mov dword ptr [edi + 0x158], 0
// 00a6f52f  e83c3cf2ff           call 0x993170
// 00a6f534  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00a6f537  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00a6f53d  8b11                 mov edx, dword ptr [ecx]
// 00a6f53f  8b4258               mov eax, dword ptr [edx + 0x58]
// 00a6f542  57                   push edi
// 00a6f543  ffd0                 call eax
// 00a6f545  8bcf                 mov ecx, edi
// 00a6f547  e83e31f1ff           call 0x98268a
// 00a6f54c  83ee01               sub esi, 1
// 00a6f54f  79c0                 jns 0xa6f511
// 00a6f551  5f                   pop edi
// 00a6f552  5b                   pop ebx
// 00a6f553  5e                   pop esi
// 00a6f554  5d                   pop ebp
// 00a6f555  c3                   ret 
// 00a6f556  e8652ef1ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp