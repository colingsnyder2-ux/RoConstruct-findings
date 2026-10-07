// roc 2011-06 008d1c30  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1c30
//
// 008d1c30  6aff                 push -1
// 008d1c32  684ecfa000           push 0xa0cf4e
// 008d1c37  64a100000000         mov eax, dword ptr fs:[0]
// 008d1c3d  50                   push eax
// 008d1c3e  a12058c900           mov eax, dword ptr [0xc95820]
// 008d1c43  33c4                 xor eax, esp
// 008d1c45  50                   push eax
// 008d1c46  8d442404             lea eax, [esp + 4]
// 008d1c4a  64a300000000         mov dword ptr fs:[0], eax
// 008d1c50  b801000000           mov eax, 1
// 008d1c55  84053492d100         test byte ptr [0xd19234], al
// 008d1c5b  7525                 jne 0x8d1c82
// 008d1c5d  09053492d100         or dword ptr [0xd19234], eax
// 008d1c63  b91092d100           mov ecx, 0xd19210
// 008d1c68  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008d1c70  e8dbfeffff           call 0x8d1b50
// 008d1c75  6830fda300           push 0xa3fd30
// 008d1c7a  e8de94f3ff           call 0x80b15d
// 008d1c7f  83c404               add esp, 4
// 008d1c82  b81092d100           mov eax, 0xd19210
// 008d1c87  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d1c8b  64890d00000000       mov dword ptr fs:[0], ecx
// 008d1c92  59                   pop ecx
// 008d1c93  83c40c               add esp, 0xc
// 008d1c96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
