// roc 2007-08 0059ce80  unit: RBX::P8HopperBin::?$SetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ce80
//
// 0059ce80  8b442404             mov eax, dword ptr [esp + 4]
// 0059ce84  85c0                 test eax, eax
// 0059ce86  8bd1                 mov edx, ecx
// 0059ce88  7415                 je 0x59ce9f
// 0059ce8a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ce8e  51                   push ecx
// 0059ce8f  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0059ce92  8b5208               mov edx, dword ptr [edx + 8]
// 0059ce95  83c0fc               add eax, -4
// 0059ce98  03c8                 add ecx, eax
// 0059ce9a  ffd2                 call edx
// 0059ce9c  c20800               ret 8
// 0059ce9f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cea3  51                   push ecx
// 0059cea4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0059cea7  8b5208               mov edx, dword ptr [edx + 8]
// 0059ceaa  33c0                 xor eax, eax
// 0059ceac  03c8                 add ecx, eax
// 0059ceae  ffd2                 call edx
// 0059ceb0  c20800               ret 8
// library rbxgs/v8datamodel\Hopper.cpp (function ?setValue@?$SetImpl@P8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
