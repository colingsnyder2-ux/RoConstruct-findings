// roc 2010-06 0054aff0  unit: RBX::AggregateChunk  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054aff0
//
// 0054aff0  53                   push ebx
// 0054aff1  55                   push ebp
// 0054aff2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0054aff6  56                   push esi
// 0054aff7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054affb  57                   push edi
// 0054affc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054b000  57                   push edi
// 0054b001  56                   push esi
// 0054b002  ffd5                 call ebp
// 0054b004  83c408               add esp, 8
// 0054b007  84c0                 test al, al
// 0054b009  740c                 je 0x54b017
// 0054b00b  3bf7                 cmp esi, edi
// 0054b00d  7408                 je 0x54b017
// 0054b00f  8b0f                 mov ecx, dword ptr [edi]
// 0054b011  8b06                 mov eax, dword ptr [esi]
// 0054b013  890e                 mov dword ptr [esi], ecx
// 0054b015  8907                 mov dword ptr [edi], eax
// 0054b017  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0054b01b  56                   push esi
// 0054b01c  53                   push ebx
// 0054b01d  ffd5                 call ebp
// 0054b01f  83c408               add esp, 8
// 0054b022  84c0                 test al, al
// 0054b024  740c                 je 0x54b032
// 0054b026  3bde                 cmp ebx, esi
// 0054b028  7408                 je 0x54b032
// 0054b02a  8b16                 mov edx, dword ptr [esi]
// 0054b02c  8b03                 mov eax, dword ptr [ebx]
// 0054b02e  8913                 mov dword ptr [ebx], edx
// 0054b030  8906                 mov dword ptr [esi], eax
// 0054b032  57                   push edi
// 0054b033  56                   push esi
// 0054b034  ffd5                 call ebp
// 0054b036  83c408               add esp, 8
// 0054b039  84c0                 test al, al
// 0054b03b  740c                 je 0x54b049
// 0054b03d  3bf7                 cmp esi, edi
// 0054b03f  7408                 je 0x54b049
// 0054b041  8b0f                 mov ecx, dword ptr [edi]
// 0054b043  8b06                 mov eax, dword ptr [esi]
// 0054b045  890e                 mov dword ptr [esi], ecx
// 0054b047  8907                 mov dword ptr [edi], eax
// 0054b049  5f                   pop edi
// 0054b04a  5e                   pop esi
// 0054b04b  5d                   pop ebp
// 0054b04c  5b                   pop ebx
// 0054b04d  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
