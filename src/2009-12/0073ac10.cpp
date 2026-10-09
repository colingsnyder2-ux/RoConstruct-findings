// roc 2009-12 0073ac10  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ac10
//
// 0073ac10  51                   push ecx
// 0073ac11  56                   push esi
// 0073ac12  8b742410             mov esi, dword ptr [esp + 0x10]
// 0073ac16  57                   push edi
// 0073ac17  6a4e                 push 0x4e
// 0073ac19  56                   push esi
// 0073ac1a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073ac22  e849e30400           call 0x788f70
// 0073ac27  68eed8ffff           push 0xffffd8ee
// 0073ac2c  56                   push esi
// 0073ac2d  e88ee30400           call 0x788fc0
// 0073ac32  56                   push esi
// 0073ac33  e868db0400           call 0x7887a0
// 0073ac38  8b0dfc32b500         mov ecx, dword ptr [0xb532fc]
// 0073ac3e  51                   push ecx
// 0073ac3f  50                   push eax
// 0073ac40  56                   push esi
// 0073ac41  e81afa0400           call 0x78a660
// 0073ac46  6afe                 push -2
// 0073ac48  56                   push esi
// 0073ac49  8bf8                 mov edi, eax
// 0073ac4b  e860db0400           call 0x7887b0
// 0073ac50  8b17                 mov edx, dword ptr [edi]
// 0073ac52  8b442438             mov eax, dword ptr [esp + 0x38]
// 0073ac56  83c428               add esp, 0x28
// 0073ac59  8910                 mov dword ptr [eax], edx
// 0073ac5b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0073ac5e  5f                   pop edi
// 0073ac5f  894804               mov dword ptr [eax + 4], ecx
// 0073ac62  5e                   pop esi
// 0073ac63  85c9                 test ecx, ecx
// 0073ac65  740c                 je 0x73ac73
// 0073ac67  83c104               add ecx, 4
// 0073ac6a  ba01000000           mov edx, 1
// 0073ac6f  f00fc111             lock xadd dword ptr [ecx], edx
// 0073ac73  59                   pop ecx
// 0073ac74  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
