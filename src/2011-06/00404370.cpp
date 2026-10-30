// roc 2011-06 00404370  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404370
//
// 00404370  680e000780           push 0x8007000e
// 00404375  e826f2ffff           call 0x4035a0
// copied from an identical function in another client (function ?ThrowMemoryException@?$CSimpleStringT@D$0A@@ATL@@KAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp