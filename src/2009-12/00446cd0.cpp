// roc 2009-12 00446cd0  unit: RBX::CRenderSettings::W4ShadowMode::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00446cd0
//
// 00446cd0  b83486b000           mov eax, 0xb08634
// 00446cd5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
