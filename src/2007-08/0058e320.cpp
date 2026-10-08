// roc 2007-08 0058e320  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e320
//
// 0058e320  64a100000000         mov eax, dword ptr fs:[0]
// 0058e326  6aff                 push -1
// 0058e328  68de687500           push 0x7568de
// 0058e32d  50                   push eax
// 0058e32e  b801000000           mov eax, 1
// 0058e333  64892500000000       mov dword ptr fs:[0], esp
// 0058e33a  8405b03e8c00         test byte ptr [0x8c3eb0], al
// 0058e340  7530                 jne 0x58e372
// 0058e342  0905b03e8c00         or dword ptr [0x8c3eb0], eax
// 0058e348  6820048b00           push 0x8b0420
// 0058e34d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e355  e856ffffff           call 0x58e2b0
// 0058e35a  50                   push eax
// 0058e35b  b9283e8c00           mov ecx, 0x8c3e28
// 0058e360  e89b28feff           call 0x570c00
// 0058e365  6830a97700           push 0x77a930
// 0058e36a  e8b4290a00           call 0x630d23
// 0058e36f  83c404               add esp, 4
// 0058e372  8b0c24               mov ecx, dword ptr [esp]
// 0058e375  b8283e8c00           mov eax, 0x8c3e28
// 0058e37a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e381  83c40c               add esp, 0xc
// 0058e384  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
