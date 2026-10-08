// roc 2007-08 004fcdc0  unit: RBX::Render::AggregateChunk  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcdc0
//
// 004fcdc0  53                   push ebx
// 004fcdc1  55                   push ebp
// 004fcdc2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004fcdc6  56                   push esi
// 004fcdc7  8b742414             mov esi, dword ptr [esp + 0x14]
// 004fcdcb  57                   push edi
// 004fcdcc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004fcdd0  57                   push edi
// 004fcdd1  56                   push esi
// 004fcdd2  ffd5                 call ebp
// 004fcdd4  83c408               add esp, 8
// 004fcdd7  84c0                 test al, al
// 004fcdd9  7408                 je 0x4fcde3
// 004fcddb  8b0f                 mov ecx, dword ptr [edi]
// 004fcddd  8b06                 mov eax, dword ptr [esi]
// 004fcddf  890e                 mov dword ptr [esi], ecx
// 004fcde1  8907                 mov dword ptr [edi], eax
// 004fcde3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004fcde7  56                   push esi
// 004fcde8  53                   push ebx
// 004fcde9  ffd5                 call ebp
// 004fcdeb  83c408               add esp, 8
// 004fcdee  84c0                 test al, al
// 004fcdf0  7408                 je 0x4fcdfa
// 004fcdf2  8b16                 mov edx, dword ptr [esi]
// 004fcdf4  8b03                 mov eax, dword ptr [ebx]
// 004fcdf6  8913                 mov dword ptr [ebx], edx
// 004fcdf8  8906                 mov dword ptr [esi], eax
// 004fcdfa  57                   push edi
// 004fcdfb  56                   push esi
// 004fcdfc  ffd5                 call ebp
// 004fcdfe  83c408               add esp, 8
// 004fce01  84c0                 test al, al
// 004fce03  7408                 je 0x4fce0d
// 004fce05  8b0f                 mov ecx, dword ptr [edi]
// 004fce07  8b06                 mov eax, dword ptr [esi]
// 004fce09  890e                 mov dword ptr [esi], ecx
// 004fce0b  8907                 mov dword ptr [edi], eax
// 004fce0d  5f                   pop edi
// 004fce0e  5e                   pop esi
// 004fce0f  5d                   pop ebp
// 004fce10  5b                   pop ebx
// 004fce11  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
