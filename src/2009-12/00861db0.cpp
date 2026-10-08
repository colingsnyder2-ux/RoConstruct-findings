// roc 2009-12 00861db0  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861db0
//
// 00861db0  c7010ce09f00         mov dword ptr [ecx], 0x9fe00c
// 00861db6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00861db9  85c9                 test ecx, ecx
// 00861dbb  7407                 je 0x861dc4
// 00861dbd  51                   push ecx
// 00861dbe  e8431df9ff           call 0x7f3b06
// 00861dc3  59                   pop ecx
// 00861dc4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
