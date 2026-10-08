// roc 2007-08 0058e5c0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e5c0
//
// 0058e5c0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e5c6  6aff                 push -1
// 0058e5c8  689e697500           push 0x75699e
// 0058e5cd  50                   push eax
// 0058e5ce  b801000000           mov eax, 1
// 0058e5d3  64892500000000       mov dword ptr fs:[0], esp
// 0058e5da  840510428c00         test byte ptr [0x8c4210], al
// 0058e5e0  7530                 jne 0x58e612
// 0058e5e2  090510428c00         or dword ptr [0x8c4210], eax
// 0058e5e8  689c868a00           push 0x8a869c
// 0058e5ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e5f5  e896a0e8ff           call 0x418690
// 0058e5fa  50                   push eax
// 0058e5fb  b988418c00           mov ecx, 0x8c4188
// 0058e600  e8fb25feff           call 0x570c00
// 0058e605  68c0a87700           push 0x77a8c0
// 0058e60a  e814270a00           call 0x630d23
// 0058e60f  83c404               add esp, 4
// 0058e612  8b0c24               mov ecx, dword ptr [esp]
// 0058e615  b888418c00           mov eax, 0x8c4188
// 0058e61a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e621  83c40c               add esp, 0xc
// 0058e624  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
