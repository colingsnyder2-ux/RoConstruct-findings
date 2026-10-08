// roc 2007-08 0059afa0  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059afa0
//
// 0059afa0  64a100000000         mov eax, dword ptr fs:[0]
// 0059afa6  6aff                 push -1
// 0059afa8  682e787500           push 0x75782e
// 0059afad  50                   push eax
// 0059afae  b801000000           mov eax, 1
// 0059afb3  64892500000000       mov dword ptr fs:[0], esp
// 0059afba  840518508c00         test byte ptr [0x8c5018], al
// 0059afc0  7530                 jne 0x59aff2
// 0059afc2  090518508c00         or dword ptr [0x8c5018], eax
// 0059afc8  685c608a00           push 0x8a605c
// 0059afcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059afd5  e8b6d6e7ff           call 0x418690
// 0059afda  50                   push eax
// 0059afdb  b9904f8c00           mov ecx, 0x8c4f90
// 0059afe0  e81b5cfdff           call 0x570c00
// 0059afe5  6890af7700           push 0x77af90
// 0059afea  e8345d0900           call 0x630d23
// 0059afef  83c404               add esp, 4
// 0059aff2  8b0c24               mov ecx, dword ptr [esp]
// 0059aff5  b8904f8c00           mov eax, 0x8c4f90
// 0059affa  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b001  83c40c               add esp, 0xc
// 0059b004  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
