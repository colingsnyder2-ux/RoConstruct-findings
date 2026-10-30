// roc 2010-06 0089e660  unit: CXTPRibbonGroupControlPopup  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e660
//
// 0089e660  55                   push ebp
// 0089e661  56                   push esi
// 0089e662  8be9                 mov ebp, ecx
// 0089e664  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 0089e667  83ee01               sub esi, 1
// 0089e66a  7847                 js 0x89e6b3
// 0089e66c  53                   push ebx
// 0089e66d  8d5d44               lea ebx, [ebp + 0x44]
// 0089e670  57                   push edi
// 0089e671  85f6                 test esi, esi
// 0089e673  7c41                 jl 0x89e6b6
// 0089e675  3b7308               cmp esi, dword ptr [ebx + 8]
// 0089e678  7d3c                 jge 0x89e6b6
// 0089e67a  8b4304               mov eax, dword ptr [ebx + 4]
// 0089e67d  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 0089e680  6a01                 push 1
// 0089e682  56                   push esi
// 0089e683  8bcb                 mov ecx, ebx
// 0089e685  c7875801000000000000 mov dword ptr [edi + 0x158], 0
// 0089e68f  e8aca3f1ff           call 0x7b8a40
// 0089e694  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0089e697  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0089e69d  8b11                 mov edx, dword ptr [ecx]
// 0089e69f  8b4258               mov eax, dword ptr [edx + 0x58]
// 0089e6a2  57                   push edi
// 0089e6a3  ffd0                 call eax
// 0089e6a5  8bcf                 mov ecx, edi
// 0089e6a7  e87098f0ff           call 0x7a7f1c
// 0089e6ac  83ee01               sub esi, 1
// 0089e6af  79c0                 jns 0x89e671
// 0089e6b1  5f                   pop edi
// 0089e6b2  5b                   pop ebx
// 0089e6b3  5e                   pop esi
// 0089e6b4  5d                   pop ebp
// 0089e6b5  c3                   ret 
// 0089e6b6  e89195f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp