// roc 2007-03 00678ce0  unit: seg_00670000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678ce0
//
// 00678ce0  56                   push esi
// 00678ce1  8bf1                 mov esi, ecx
// 00678ce3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00678cea  7425                 je 0x678d11
// 00678cec  ff154cee7700         call dword ptr [0x77ee4c]
// 00678cf2  50                   push eax
// 00678cf3  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00678cf9  50                   push eax
// 00678cfa  ff1554ef7700         call dword ptr [0x77ef54]
// 00678d00  85c0                 test eax, eax
// 00678d02  750d                 jne 0x678d11
// 00678d04  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00678d0a  51                   push ecx
// 00678d0b  ff1534ee7700         call dword ptr [0x77ee34]
// 00678d11  5e                   pop esi
// 00678d12  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
