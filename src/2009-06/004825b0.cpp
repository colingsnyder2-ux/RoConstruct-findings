// roc 2009-06 004825b0  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004825b0
//
// 004825b0  b801000000           mov eax, 1
// 004825b5  8405f8c6a300         test byte ptr [0xa3c6f8], al
// 004825bb  751a                 jne 0x4825d7
// 004825bd  d9ee                 fldz 
// 004825bf  0905f8c6a300         or dword ptr [0xa3c6f8], eax
// 004825c5  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 004825cb  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 004825d1  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 004825d7  b8ecc6a300           mov eax, 0xa3c6ec
// 004825dc  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
