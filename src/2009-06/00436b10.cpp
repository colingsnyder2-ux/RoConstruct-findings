// roc 2009-06 00436b10  unit: MVCXTPPropertyGridItem::?$XItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00436b10
//
// 00436b10  6aff                 push -1
// 00436b12  68991c8700           push 0x871c99
// 00436b17  64a100000000         mov eax, dword ptr fs:[0]
// 00436b1d  50                   push eax
// 00436b1e  64892500000000       mov dword ptr fs:[0], esp
// 00436b25  51                   push ecx
// 00436b26  56                   push esi
// 00436b27  8bf1                 mov esi, ecx
// 00436b29  89742404             mov dword ptr [esp + 4], esi
// 00436b2d  ff15c0e48900         call dword ptr [0x89e4c0]
// 00436b33  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00436b3b  e8206e1900           call 0x5cd960
// 00436b40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00436b44  89461c               mov dword ptr [esi + 0x1c], eax
// 00436b47  8bc6                 mov eax, esi
// 00436b49  5e                   pop esi
// 00436b4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00436b51  83c410               add esp, 0x10
// 00436b54  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
