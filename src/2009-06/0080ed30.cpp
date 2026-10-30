// roc 2009-06 0080ed30  unit: CXTPRibbonGroupControlPopup  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ed30
//
// 0080ed30  55                   push ebp
// 0080ed31  56                   push esi
// 0080ed32  8be9                 mov ebp, ecx
// 0080ed34  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 0080ed37  83ee01               sub esi, 1
// 0080ed3a  7847                 js 0x80ed83
// 0080ed3c  53                   push ebx
// 0080ed3d  8d5d44               lea ebx, [ebp + 0x44]
// 0080ed40  57                   push edi
// 0080ed41  85f6                 test esi, esi
// 0080ed43  7c41                 jl 0x80ed86
// 0080ed45  3b7308               cmp esi, dword ptr [ebx + 8]
// 0080ed48  7d3c                 jge 0x80ed86
// 0080ed4a  8b4304               mov eax, dword ptr [ebx + 4]
// 0080ed4d  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 0080ed50  6a01                 push 1
// 0080ed52  56                   push esi
// 0080ed53  8bcb                 mov ecx, ebx
// 0080ed55  c7875801000000000000 mov dword ptr [edi + 0x158], 0
// 0080ed5f  e8fc38f4ff           call 0x752660
// 0080ed64  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0080ed67  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0080ed6d  8b11                 mov edx, dword ptr [ecx]
// 0080ed6f  8b4258               mov eax, dword ptr [edx + 0x58]
// 0080ed72  57                   push edi
// 0080ed73  ffd0                 call eax
// 0080ed75  8bcf                 mov ecx, edi
// 0080ed77  e82ca2f0ff           call 0x718fa8
// 0080ed7c  83ee01               sub esi, 1
// 0080ed7f  79c0                 jns 0x80ed41
// 0080ed81  5f                   pop edi
// 0080ed82  5b                   pop ebx
// 0080ed83  5e                   pop esi
// 0080ed84  5d                   pop ebp
// 0080ed85  c3                   ret 
// 0080ed86  e8599ff0ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp