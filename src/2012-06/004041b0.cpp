// roc 2012-06 004041b0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004041b0
//
// 004041b0  8b442404             mov eax, dword ptr [esp + 4]
// 004041b4  3d0e000780           cmp eax, 0x8007000e
// 004041b9  7505                 jne 0x4041c0
// 004041bb  e806e25700           call 0x9823c6
// 004041c0  50                   push eax
// 004041c1  e806e25700           call 0x9823cc
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp