// roc 2007-03 0058cb90  unit: seg_00580000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058cb90
//
// 0058cb90  56                   push esi
// 0058cb91  8bf1                 mov esi, ecx
// 0058cb93  e8b881faff           call 0x534d50
// 0058cb98  8b10                 mov edx, dword ptr [eax]
// 0058cb9a  8bc8                 mov ecx, eax
// 0058cb9c  8b420c               mov eax, dword ptr [edx + 0xc]
// 0058cb9f  ffd0                 call eax
// 0058cba1  84c0                 test al, al
// 0058cba3  7450                 je 0x58cbf5
// 0058cba5  80be0101000000       cmp byte ptr [esi + 0x101], 0
// 0058cbac  7437                 je 0x58cbe5
// 0058cbae  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0058cbb4  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 0058cbba  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 0058cbc0  8b0c11               mov ecx, dword ptr [ecx + edx]
// 0058cbc3  038e0c010000         add ecx, dword ptr [esi + 0x10c]
// 0058cbc9  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 0058cbcf  8d8c01f4000000       lea ecx, [ecx + eax + 0xf4]
// 0058cbd6  ffd2                 call edx
// 0058cbd8  888600010000         mov byte ptr [esi + 0x100], al
// 0058cbde  c6860101000000       mov byte ptr [esi + 0x101], 0
// 0058cbe5  80be0001000000       cmp byte ptr [esi + 0x100], 0
// 0058cbec  7407                 je 0x58cbf5
// 0058cbee  b801000000           mov eax, 1
// 0058cbf3  5e                   pop esi
// 0058cbf4  c3                   ret 
// 0058cbf5  33c0                 xor eax, eax
// 0058cbf7  5e                   pop esi
// 0058cbf8  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ?isChaseable@PVInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
