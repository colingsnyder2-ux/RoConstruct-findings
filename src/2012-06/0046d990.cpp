// roc 2012-06 0046d990  unit: CRobloxApp  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046d990
//
// 0046d990  680e000780           push 0x8007000e
// 0046d995  e81668f9ff           call 0x4041b0
// copied from an identical function in another client (function ?ThrowMemoryException@?$CSimpleStringT@D$0A@@ATL@@KAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp