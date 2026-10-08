// roc 2008-06 005ca420  unit: RBX::AIController  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca420
//
// 005ca420  8b442404             mov eax, dword ptr [esp + 4]
// 005ca424  d9448124             fld dword ptr [ecx + eax*4 + 0x24]
// 005ca428  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?getValue@AIController@RBX@@MBEMW4InputType@Controller@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
