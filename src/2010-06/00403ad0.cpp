// roc 2010-06 00403ad0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403ad0
//
// 00403ad0  680e000780           push 0x8007000e
// 00403ad5  e8f6f0ffff           call 0x402bd0
// copied from an identical function in another client (function ?ThrowMemoryException@?$CSimpleStringT@D$0A@@ATL@@KAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp