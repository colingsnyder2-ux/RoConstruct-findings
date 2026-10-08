// roc 2007-08 0058e4e0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e4e0
//
// 0058e4e0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e4e6  6aff                 push -1
// 0058e4e8  685e697500           push 0x75695e
// 0058e4ed  50                   push eax
// 0058e4ee  b801000000           mov eax, 1
// 0058e4f3  64892500000000       mov dword ptr fs:[0], esp
// 0058e4fa  8405f0408c00         test byte ptr [0x8c40f0], al
// 0058e500  7530                 jne 0x58e532
// 0058e502  0905f0408c00         or dword ptr [0x8c40f0], eax
// 0058e508  6804858a00           push 0x8a8504
// 0058e50d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e515  e876a1e8ff           call 0x418690
// 0058e51a  50                   push eax
// 0058e51b  b968408c00           mov ecx, 0x8c4068
// 0058e520  e8db26feff           call 0x570c00
// 0058e525  68f0a87700           push 0x77a8f0
// 0058e52a  e8f4270a00           call 0x630d23
// 0058e52f  83c404               add esp, 4
// 0058e532  8b0c24               mov ecx, dword ptr [esp]
// 0058e535  b868408c00           mov eax, 0x8c4068
// 0058e53a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e541  83c40c               add esp, 0xc
// 0058e544  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
