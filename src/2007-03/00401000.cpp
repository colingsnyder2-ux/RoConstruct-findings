// roc 2007-03 00401000  unit: seg_00400000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00401000
//
// 00401000  8b442404             mov eax, dword ptr [esp + 4]
// 00401004  3d0e000780           cmp eax, 0x8007000e
// 00401009  7505                 jne 0x401010
// 0040100b  e8ecd02100           call 0x61e0fc
// 00401010  50                   push eax
// 00401011  e8e0d02100           call 0x61e0f6
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp