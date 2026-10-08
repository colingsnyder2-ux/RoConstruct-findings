// roc 2007-03 0058d500  unit: seg_00580000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058d500
//
// 0058d500  6aff                 push -1
// 0058d502  68087b7500           push 0x757b08
// 0058d507  64a100000000         mov eax, dword ptr fs:[0]
// 0058d50d  50                   push eax
// 0058d50e  64892500000000       mov dword ptr fs:[0], esp
// 0058d515  51                   push ecx
// 0058d516  56                   push esi
// 0058d517  8bf1                 mov esi, ecx
// 0058d519  89742404             mov dword ptr [esp + 4], esi
// 0058d51d  c70640127b00         mov dword ptr [esi], 0x7b1240
// 0058d523  c7460c34127b00       mov dword ptr [esi + 0xc], 0x7b1234
// 0058d52a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0058d52d  85c9                 test ecx, ecx
// 0058d52f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d537  7413                 je 0x58d54c
// 0058d539  8d4108               lea eax, [ecx + 8]
// 0058d53c  83caff               or edx, 0xffffffff
// 0058d53f  f00fc110             lock xadd dword ptr [eax], edx
// 0058d543  7507                 jne 0x58d54c
// 0058d545  8b01                 mov eax, dword ptr [ecx]
// 0058d547  8b5008               mov edx, dword ptr [eax + 8]
// 0058d54a  ffd2                 call edx
// 0058d54c  8bce                 mov ecx, esi
// 0058d54e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058d556  e8d5feffff           call 0x58d430
// 0058d55b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058d55f  5e                   pop esi
// 0058d560  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d567  83c410               add esp, 0x10
// 0058d56a  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1AIController@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
