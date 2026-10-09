// roc 2008-06 00494620  unit: RBX::Network::Player  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494620
//
// 00494620  8a442404             mov al, byte ptr [esp + 4]
// 00494624  3a817c010000         cmp al, byte ptr [ecx + 0x17c]
// 0049462a  7413                 je 0x49463f
// 0049462c  88817c010000         mov byte ptr [ecx + 0x17c], al
// 00494632  c7442404c8fe9600     mov dword ptr [esp + 4], 0x96fec8
// 0049463a  e9c194f7ff           jmp 0x40db00
// 0049463f  c20400               ret 4
// library openrbx-client/Network\Player.cpp (function ?setNeutral@Player@Network@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Network/Player.cpp
