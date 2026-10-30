// from server: 100% by auto
// roc 2011-06 00875ea0  unit: CXTPPropertyGridView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875ea0
//
// 00875ea0  8d442404             lea eax, [esp + 4]
// 00875ea4  50                   push eax
// 00875ea5  e886b4fdff           call 0x851330
// 00875eaa  85c0                 test eax, eax
// 00875eac  740d                 je 0x875ebb
// 00875eae  83f8ff               cmp eax, -1
// 00875eb1  7408                 je 0x875ebb
// 00875eb3  b857000780           mov eax, 0x80070057
// 00875eb8  c21400               ret 0x14
// 00875ebb  681cd5ac00           push 0xacd51c
// 00875ec0  ff15bc0aa400         call dword ptr [0xa40abc]
// 00875ec6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00875eca  8901                 mov dword ptr [ecx], eax
// 00875ecc  33c0                 xor eax, eax
// 00875ece  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleName@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
