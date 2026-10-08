// roc 2008-06 00616080  unit: RBX::Unlocked  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616080
//
// 00616080  51                   push ecx
// 00616081  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00616085  50                   push eax
// 00616086  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061608a  8d542404             lea edx, [esp + 4]
// 0061608e  52                   push edx
// 0061608f  50                   push eax
// 00616090  c744240c483a8400     mov dword ptr [esp + 0xc], 0x843a48
// 00616098  e8f3fcffff           call 0x615d90
// 0061609d  59                   pop ecx
// 0061609e  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
