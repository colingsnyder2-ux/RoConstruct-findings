// roc 2009-12 00763420  unit: RBX::VInstance::?$NonFactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00763420
//
// 00763420  6aff                 push -1
// 00763422  68cb1e9500           push 0x951ecb
// 00763427  64a100000000         mov eax, dword ptr fs:[0]
// 0076342d  50                   push eax
// 0076342e  64892500000000       mov dword ptr fs:[0], esp
// 00763435  51                   push ecx
// 00763436  56                   push esi
// 00763437  8bf1                 mov esi, ecx
// 00763439  89742404             mov dword ptr [esp + 4], esi
// 0076343d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00763440  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00763448  85c9                 test ecx, ecx
// 0076344a  7408                 je 0x763454
// 0076344c  8b01                 mov eax, dword ptr [ecx]
// 0076344e  8b10                 mov edx, dword ptr [eax]
// 00763450  6a01                 push 1
// 00763452  ffd2                 call edx
// 00763454  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00763457  c644241000           mov byte ptr [esp + 0x10], 0
// 0076345c  85c9                 test ecx, ecx
// 0076345e  7408                 je 0x763468
// 00763460  8b01                 mov eax, dword ptr [ecx]
// 00763462  8b10                 mov edx, dword ptr [eax]
// 00763464  6a01                 push 1
// 00763466  ffd2                 call edx
// 00763468  8d4e18               lea ecx, [esi + 0x18]
// 0076346b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00763473  e82896d9ff           call 0x4fcaa0
// 00763478  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076347c  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 00763482  5e                   pop esi
// 00763483  64890d00000000       mov dword ptr fs:[0], ecx
// 0076348a  83c410               add esp, 0x10
// 0076348d  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??1?$BoundFuncDesc@VDebrisService@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
