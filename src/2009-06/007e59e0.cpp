// roc 2009-06 007e59e0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e59e0
//
// 007e59e0  6aff                 push -1
// 007e59e2  68cefc8700           push 0x87fcce
// 007e59e7  64a100000000         mov eax, dword ptr fs:[0]
// 007e59ed  50                   push eax
// 007e59ee  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e59f3  33c4                 xor eax, esp
// 007e59f5  50                   push eax
// 007e59f6  8d442404             lea eax, [esp + 4]
// 007e59fa  64a300000000         mov dword ptr fs:[0], eax
// 007e5a00  b801000000           mov eax, 1
// 007e5a05  8405c429a500         test byte ptr [0xa529c4], al
// 007e5a0b  7525                 jne 0x7e5a32
// 007e5a0d  0905c429a500         or dword ptr [0xa529c4], eax
// 007e5a13  b9a029a500           mov ecx, 0xa529a0
// 007e5a18  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007e5a20  e8dbfeffff           call 0x7e5900
// 007e5a25  68c0d58900           push 0x89d5c0
// 007e5a2a  e8cc40f3ff           call 0x719afb
// 007e5a2f  83c404               add esp, 4
// 007e5a32  b8a029a500           mov eax, 0xa529a0
// 007e5a37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007e5a3b  64890d00000000       mov dword ptr fs:[0], ecx
// 007e5a42  59                   pop ecx
// 007e5a43  83c40c               add esp, 0xc
// 007e5a46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
