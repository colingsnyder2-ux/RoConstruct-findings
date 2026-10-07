// roc 2008-06 0071c740  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c740
//
// 0071c740  b801000000           mov eax, 1
// 0071c745  840594ed9700         test byte ptr [0x97ed94], al
// 0071c74b  751d                 jne 0x71c76a
// 0071c74d  090594ed9700         or dword ptr [0x97ed94], eax
// 0071c753  b978ed9700           mov ecx, 0x97ed78
// 0071c758  e803ffffff           call 0x71c660
// 0071c75d  68a0188000           push 0x8018a0
// 0071c762  e84850f8ff           call 0x6a17af
// 0071c767  83c404               add esp, 4
// 0071c76a  b878ed9700           mov eax, 0x97ed78
// 0071c76f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
