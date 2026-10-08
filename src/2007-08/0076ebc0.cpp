// roc 2007-08 0076ebc0  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ebc0
//
// 0076ebc0  56                   push esi
// 0076ebc1  6a05                 push 5
// 0076ebc3  33c9                 xor ecx, ecx
// 0076ebc5  51                   push ecx
// 0076ebc6  b8a0f24800           mov eax, 0x48f2a0
// 0076ebcb  50                   push eax
// 0076ebcc  33f6                 xor esi, esi
// 0076ebce  56                   push esi
// 0076ebcf  ba80684800           mov edx, 0x486880
// 0076ebd4  52                   push edx
// 0076ebd5  68fcb67900           push 0x79b6fc
// 0076ebda  6804b77900           push 0x79b704
// 0076ebdf  b93cdf8b00           mov ecx, 0x8bdf3c
// 0076ebe4  e817f3d1ff           call 0x48df00
// 0076ebe9  6830807700           push 0x778030
// 0076ebee  e83021ecff           call 0x630d23
// 0076ebf3  83c404               add esp, 4
// 0076ebf6  5e                   pop esi
// 0076ebf7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_neutral@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
