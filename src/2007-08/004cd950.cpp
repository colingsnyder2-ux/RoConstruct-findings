// roc 2007-08 004cd950  unit: RBX::Render::VMaterial::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd950
//
// 004cd950  6aff                 push -1
// 004cd952  6858c57400           push 0x74c558
// 004cd957  64a100000000         mov eax, dword ptr fs:[0]
// 004cd95d  50                   push eax
// 004cd95e  64892500000000       mov dword ptr fs:[0], esp
// 004cd965  51                   push ecx
// 004cd966  56                   push esi
// 004cd967  8bf1                 mov esi, ecx
// 004cd969  89742404             mov dword ptr [esp + 4], esi
// 004cd96d  c70634f07900         mov dword ptr [esi], 0x79f034
// 004cd973  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd97b  e810ffffff           call 0x4cd890
// 004cd980  f644241801           test byte ptr [esp + 0x18], 1
// 004cd985  c70610f07900         mov dword ptr [esi], 0x79f010
// 004cd98b  7409                 je 0x4cd996
// 004cd98d  56                   push esi
// 004cd98e  e8cf221600           call 0x62fc62
// 004cd993  83c404               add esp, 4
// 004cd996  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd99a  8bc6                 mov eax, esi
// 004cd99c  5e                   pop esi
// 004cd99d  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd9a4  83c410               add esp, 0x10
// 004cd9a7  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
