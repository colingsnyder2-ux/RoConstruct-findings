// roc 2010-06 00541ea0  unit: RBX::AggregatingSceneManager::Bucket  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541ea0
//
// 00541ea0  6aff                 push -1
// 00541ea2  68085c9800           push 0x985c08
// 00541ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00541ead  50                   push eax
// 00541eae  64892500000000       mov dword ptr fs:[0], esp
// 00541eb5  51                   push ecx
// 00541eb6  56                   push esi
// 00541eb7  8bf1                 mov esi, ecx
// 00541eb9  89742404             mov dword ptr [esp + 4], esi
// 00541ebd  8d4e0c               lea ecx, [esi + 0xc]
// 00541ec0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00541ec8  e823edffff           call 0x540bf0
// 00541ecd  f644241801           test byte ptr [esp + 0x18], 1
// 00541ed2  c7065032a100         mov dword ptr [esi], 0xa13250
// 00541ed8  7409                 je 0x541ee3
// 00541eda  56                   push esi
// 00541edb  e8ba5a2600           call 0x7a799a
// 00541ee0  83c404               add esp, 4
// 00541ee3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541ee7  8bc6                 mov eax, esi
// 00541ee9  5e                   pop esi
// 00541eea  64890d00000000       mov dword ptr fs:[0], ecx
// 00541ef1  83c410               add esp, 0x10
// 00541ef4  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??_GBucket@AggregatingSceneManager@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
