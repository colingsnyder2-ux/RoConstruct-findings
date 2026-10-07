// roc 2012-06 00a49f20  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49f20
//
// 00a49f20  6aff                 push -1
// 00a49f22  68ae6bae00           push 0xae6bae
// 00a49f27  64a100000000         mov eax, dword ptr fs:[0]
// 00a49f2d  50                   push eax
// 00a49f2e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a49f33  33c4                 xor eax, esp
// 00a49f35  50                   push eax
// 00a49f36  8d442404             lea eax, [esp + 4]
// 00a49f3a  64a300000000         mov dword ptr fs:[0], eax
// 00a49f40  b801000000           mov eax, 1
// 00a49f45  8405a4a3e500         test byte ptr [0xe5a3a4], al
// 00a49f4b  7525                 jne 0xa49f72
// 00a49f4d  0905a4a3e500         or dword ptr [0xe5a3a4], eax
// 00a49f53  b980a3e500           mov ecx, 0xe5a380
// 00a49f58  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a49f60  e8dbfeffff           call 0xa49e40
// 00a49f65  681018b200           push 0xb21810
// 00a49f6a  e88692f3ff           call 0x9831f5
// 00a49f6f  83c404               add esp, 4
// 00a49f72  b880a3e500           mov eax, 0xe5a380
// 00a49f77  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a49f7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00a49f82  59                   pop ecx
// 00a49f83  83c40c               add esp, 0xc
// 00a49f86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
