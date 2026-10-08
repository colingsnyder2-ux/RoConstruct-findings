// roc 2007-08 004a35b0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a35b0
//
// 004a35b0  8bc1                 mov eax, ecx
// 004a35b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a35b6  8b11                 mov edx, dword ptr [ecx]
// 004a35b8  8910                 mov dword ptr [eax], edx
// 004a35ba  668b5104             mov dx, word ptr [ecx + 4]
// 004a35be  66895004             mov word ptr [eax + 4], dx
// 004a35c2  668b4908             mov cx, word ptr [ecx + 8]
// 004a35c6  66894808             mov word ptr [eax + 8], cx
// 004a35ca  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??4NetworkID@@QAEAAU0@ABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
