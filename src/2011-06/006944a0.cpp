// roc 2011-06 006944a0  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006944a0
//
// 006944a0  8b442404             mov eax, dword ptr [esp + 4]
// 006944a4  50                   push eax
// 006944a5  e806ffffff           call 0x6943b0
// 006944aa  f7d8                 neg eax
// 006944ac  1bc0                 sbb eax, eax
// 006944ae  f7d8                 neg eax
// 006944b0  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Edit\XTPHexEdit.cpp (function ?PreCreateWindow@CXTPHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Edit/XTPHexEdit.cpp
