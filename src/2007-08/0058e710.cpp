// roc 2007-08 0058e710  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e710
//
// 0058e710  64a100000000         mov eax, dword ptr fs:[0]
// 0058e716  6aff                 push -1
// 0058e718  68fe697500           push 0x7569fe
// 0058e71d  50                   push eax
// 0058e71e  b801000000           mov eax, 1
// 0058e723  64892500000000       mov dword ptr fs:[0], esp
// 0058e72a  8405c0438c00         test byte ptr [0x8c43c0], al
// 0058e730  7530                 jne 0x58e762
// 0058e732  0905c0438c00         or dword ptr [0x8c43c0], eax
// 0058e738  68505e7b00           push 0x7b5e50
// 0058e73d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e745  e8469fe8ff           call 0x418690
// 0058e74a  50                   push eax
// 0058e74b  b938438c00           mov ecx, 0x8c4338
// 0058e750  e8ab24feff           call 0x570c00
// 0058e755  68e0aa7700           push 0x77aae0
// 0058e75a  e8c4250a00           call 0x630d23
// 0058e75f  83c404               add esp, 4
// 0058e762  8b0c24               mov ecx, dword ptr [esp]
// 0058e765  b838438c00           mov eax, 0x8c4338
// 0058e76a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e771  83c40c               add esp, 0xc
// 0058e774  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
