// roc 2007-08 00598670  unit: RBX::SteppingController  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598670
//
// 00598670  6aff                 push -1
// 00598672  6858777500           push 0x757758
// 00598677  64a100000000         mov eax, dword ptr fs:[0]
// 0059867d  50                   push eax
// 0059867e  64892500000000       mov dword ptr fs:[0], esp
// 00598685  51                   push ecx
// 00598686  56                   push esi
// 00598687  8bf1                 mov esi, ecx
// 00598689  89742404             mov dword ptr [esp + 4], esi
// 0059868d  c70664127b00         mov dword ptr [esi], 0x7b1264
// 00598693  c7460c58127b00       mov dword ptr [esi + 0xc], 0x7b1258
// 0059869a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0059869d  85c9                 test ecx, ecx
// 0059869f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005986a7  7413                 je 0x5986bc
// 005986a9  8d4108               lea eax, [ecx + 8]
// 005986ac  83caff               or edx, 0xffffffff
// 005986af  f00fc110             lock xadd dword ptr [eax], edx
// 005986b3  7507                 jne 0x5986bc
// 005986b5  8b01                 mov eax, dword ptr [ecx]
// 005986b7  8b5008               mov edx, dword ptr [eax + 8]
// 005986ba  ffd2                 call edx
// 005986bc  8bce                 mov ecx, esi
// 005986be  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005986c6  e8d5feffff           call 0x5985a0
// 005986cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005986cf  5e                   pop esi
// 005986d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005986d7  83c410               add esp, 0x10
// 005986da  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1AIController@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
