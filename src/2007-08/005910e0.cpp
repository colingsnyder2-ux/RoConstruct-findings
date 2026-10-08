// roc 2007-08 005910e0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005910e0
//
// 005910e0  64a100000000         mov eax, dword ptr fs:[0]
// 005910e6  6aff                 push -1
// 005910e8  68be6c7500           push 0x756cbe
// 005910ed  50                   push eax
// 005910ee  b801000000           mov eax, 1
// 005910f3  64892500000000       mov dword ptr fs:[0], esp
// 005910fa  840560498c00         test byte ptr [0x8c4960], al
// 00591100  7530                 jne 0x591132
// 00591102  090560498c00         or dword ptr [0x8c4960], eax
// 00591108  688c5e7b00           push 0x7b5e8c
// 0059110d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00591115  e8d6fbffff           call 0x590cf0
// 0059111a  50                   push eax
// 0059111b  b9d8488c00           mov ecx, 0x8c48d8
// 00591120  e8dbfafdff           call 0x570c00
// 00591125  68f0a97700           push 0x77a9f0
// 0059112a  e8f4fb0900           call 0x630d23
// 0059112f  83c404               add esp, 4
// 00591132  8b0c24               mov ecx, dword ptr [esp]
// 00591135  b8d8488c00           mov eax, 0x8c48d8
// 0059113a  64890d00000000       mov dword ptr fs:[0], ecx
// 00591141  83c40c               add esp, 0xc
// 00591144  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
