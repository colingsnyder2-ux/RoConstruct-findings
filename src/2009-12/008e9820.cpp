// roc 2009-12 008e9820  unit: CXTPRibbonGroupControlPopup  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9820
//
// 008e9820  55                   push ebp
// 008e9821  56                   push esi
// 008e9822  8be9                 mov ebp, ecx
// 008e9824  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 008e9827  83ee01               sub esi, 1
// 008e982a  7847                 js 0x8e9873
// 008e982c  53                   push ebx
// 008e982d  8d5d44               lea ebx, [ebp + 0x44]
// 008e9830  57                   push edi
// 008e9831  85f6                 test esi, esi
// 008e9833  7c41                 jl 0x8e9876
// 008e9835  3b7308               cmp esi, dword ptr [ebx + 8]
// 008e9838  7d3c                 jge 0x8e9876
// 008e983a  8b4304               mov eax, dword ptr [ebx + 4]
// 008e983d  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008e9840  6a01                 push 1
// 008e9842  56                   push esi
// 008e9843  8bcb                 mov ecx, ebx
// 008e9845  c7875801000000000000 mov dword ptr [edi + 0x158], 0
// 008e984f  e82c3af4ff           call 0x82d280
// 008e9854  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008e9857  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008e985d  8b11                 mov edx, dword ptr [ecx]
// 008e985f  8b4258               mov eax, dword ptr [edx + 0x58]
// 008e9862  57                   push edi
// 008e9863  ffd0                 call eax
// 008e9865  8bcf                 mov ecx, edi
// 008e9867  e870a5f0ff           call 0x7f3ddc
// 008e986c  83ee01               sub esi, 1
// 008e986f  79c0                 jns 0x8e9831
// 008e9871  5f                   pop edi
// 008e9872  5b                   pop ebx
// 008e9873  5e                   pop esi
// 008e9874  5d                   pop ebp
// 008e9875  c3                   ret 
// 008e9876  e891a2f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp