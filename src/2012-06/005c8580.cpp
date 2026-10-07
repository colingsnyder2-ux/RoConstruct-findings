// roc 2012-06 005c8580  unit: RBX::AdornRbxGfx  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8580
//
// 005c8580  8b5128               mov edx, dword ptr [ecx + 0x28]
// 005c8583  8b442404             mov eax, dword ptr [esp + 4]
// 005c8587  ff4128               inc dword ptr [ecx + 0x28]
// 005c858a  8910                 mov dword ptr [eax], edx
// 005c858c  c6412b00             mov byte ptr [ecx + 0x2b], 0
// 005c8590  c20400               ret 4
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?GetAndIncrementNextDatagramSequenceNumber@CCRakNetSlidingWindow@RakNet@@QAE?AUuint24_t@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
