// roc 2009-12 00816a70  unit: MyXTPCommandBars  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816a70
//
// 00816a70  53                   push ebx
// 00816a71  55                   push ebp
// 00816a72  57                   push edi
// 00816a73  8bf9                 mov edi, ecx
// 00816a75  33ed                 xor ebp, ebp
// 00816a77  33db                 xor ebx, ebx
// 00816a79  39af84000000         cmp dword ptr [edi + 0x84], ebp
// 00816a7f  c787c000000001000000 mov dword ptr [edi + 0xc0], 1
// 00816a89  7e65                 jle 0x816af0
// 00816a8b  56                   push esi
// 00816a8c  8d642400             lea esp, [esp]
// 00816a90  53                   push ebx
// 00816a91  8bcf                 mov ecx, edi
// 00816a93  e848e2ffff           call 0x814ce0
// 00816a98  8bf0                 mov esi, eax
// 00816a9a  3bf5                 cmp esi, ebp
// 00816a9c  7413                 je 0x816ab1
// 00816a9e  396e20               cmp dword ptr [esi + 0x20], ebp
// 00816aa1  740e                 je 0x816ab1
// 00816aa3  55                   push ebp
// 00816aa4  8bce                 mov ecx, esi
// 00816aa6  e89dd0fdff           call 0x7f3b48
// 00816aab  89aedc000000         mov dword ptr [esi + 0xdc], ebp
// 00816ab1  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00816ab7  3bcd                 cmp ecx, ebp
// 00816ab9  740e                 je 0x816ac9
// 00816abb  6aff                 push -1
// 00816abd  56                   push esi
// 00816abe  e80dbb0700           call 0x8925d0
// 00816ac3  89ae80010000         mov dword ptr [esi + 0x180], ebp
// 00816ac9  8b07                 mov eax, dword ptr [edi]
// 00816acb  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00816ace  56                   push esi
// 00816acf  8bcf                 mov ecx, edi
// 00816ad1  ffd2                 call edx
// 00816ad3  8b06                 mov eax, dword ptr [esi]
// 00816ad5  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 00816adb  8bce                 mov ecx, esi
// 00816add  ffd2                 call edx
// 00816adf  8bce                 mov ecx, esi
// 00816ae1  e8f6d2fdff           call 0x7f3ddc
// 00816ae6  43                   inc ebx
// 00816ae7  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 00816aed  7ca1                 jl 0x816a90
// 00816aef  5e                   pop esi
// 00816af0  6aff                 push -1
// 00816af2  55                   push ebp
// 00816af3  8d4f7c               lea ecx, [edi + 0x7c]
// 00816af6  e8a5e80300           call 0x8553a0
// 00816afb  6a01                 push 1
// 00816afd  8bcf                 mov ecx, edi
// 00816aff  89afc0000000         mov dword ptr [edi + 0xc0], ebp
// 00816b05  e896deffff           call 0x8149a0
// 00816b0a  5f                   pop edi
// 00816b0b  5d                   pop ebp
// 00816b0c  5b                   pop ebx
// 00816b0d  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp