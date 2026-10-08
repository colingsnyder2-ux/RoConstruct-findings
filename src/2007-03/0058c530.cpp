// roc 2007-03 0058c530  unit: seg_00580000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058c530
//
// 0058c530  8b442404             mov eax, dword ptr [esp + 4]
// 0058c534  d9448124             fld dword ptr [ecx + eax*4 + 0x24]
// 0058c538  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?getValue@AIController@RBX@@MBEMW4InputType@Controller@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
