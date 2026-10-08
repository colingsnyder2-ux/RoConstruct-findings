// roc 2007-03 005b5ec0  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5ec0
//
// 005b5ec0  b001                 mov al, 1
// 005b5ec2  888134010000         mov byte ptr [ecx + 0x134], al
// 005b5ec8  888101010000         mov byte ptr [ecx + 0x101], al
// 005b5ece  888119010000         mov byte ptr [ecx + 0x119], al
// 005b5ed4  e947c1f8ff           jmp 0x542020
// library rbxgs/v8datamodel\PVInstance.cpp (function ?onDescendentRemoving@PVInstance@RBX@@MAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
