// roc 2008-06 00505c70  unit: RBX::Render::RenderScene  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505c70
//
// 00505c70  83ec50               sub esp, 0x50
// 00505c73  53                   push ebx
// 00505c74  55                   push ebp
// 00505c75  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00505c79  56                   push esi
// 00505c7a  8b742464             mov esi, dword ptr [esp + 0x64]
// 00505c7e  57                   push edi
// 00505c7f  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00505c83  57                   push edi
// 00505c84  56                   push esi
// 00505c85  ffd5                 call ebp
// 00505c87  83c408               add esp, 8
// 00505c8a  84c0                 test al, al
// 00505c8c  7422                 je 0x505cb0
// 00505c8e  3bf7                 cmp esi, edi
// 00505c90  741e                 je 0x505cb0
// 00505c92  56                   push esi
// 00505c93  8d4c2414             lea ecx, [esp + 0x14]
// 00505c97  e8b41ff7ff           call 0x477c50
// 00505c9c  57                   push edi
// 00505c9d  8bce                 mov ecx, esi
// 00505c9f  e8fc0cf7ff           call 0x4769a0
// 00505ca4  8d442410             lea eax, [esp + 0x10]
// 00505ca8  50                   push eax
// 00505ca9  8bcf                 mov ecx, edi
// 00505cab  e8f00cf7ff           call 0x4769a0
// 00505cb0  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00505cb4  56                   push esi
// 00505cb5  53                   push ebx
// 00505cb6  ffd5                 call ebp
// 00505cb8  83c408               add esp, 8
// 00505cbb  84c0                 test al, al
// 00505cbd  7422                 je 0x505ce1
// 00505cbf  3bde                 cmp ebx, esi
// 00505cc1  741e                 je 0x505ce1
// 00505cc3  53                   push ebx
// 00505cc4  8d4c2414             lea ecx, [esp + 0x14]
// 00505cc8  e8831ff7ff           call 0x477c50
// 00505ccd  56                   push esi
// 00505cce  8bcb                 mov ecx, ebx
// 00505cd0  e8cb0cf7ff           call 0x4769a0
// 00505cd5  8d4c2410             lea ecx, [esp + 0x10]
// 00505cd9  51                   push ecx
// 00505cda  8bce                 mov ecx, esi
// 00505cdc  e8bf0cf7ff           call 0x4769a0
// 00505ce1  57                   push edi
// 00505ce2  56                   push esi
// 00505ce3  ffd5                 call ebp
// 00505ce5  83c408               add esp, 8
// 00505ce8  84c0                 test al, al
// 00505cea  7422                 je 0x505d0e
// 00505cec  3bf7                 cmp esi, edi
// 00505cee  741e                 je 0x505d0e
// 00505cf0  56                   push esi
// 00505cf1  8d4c2414             lea ecx, [esp + 0x14]
// 00505cf5  e8561ff7ff           call 0x477c50
// 00505cfa  57                   push edi
// 00505cfb  8bce                 mov ecx, esi
// 00505cfd  e89e0cf7ff           call 0x4769a0
// 00505d02  8d542410             lea edx, [esp + 0x10]
// 00505d06  52                   push edx
// 00505d07  8bcf                 mov ecx, edi
// 00505d09  e8920cf7ff           call 0x4769a0
// 00505d0e  5f                   pop edi
// 00505d0f  5e                   pop esi
// 00505d10  5d                   pop ebp
// 00505d11  5b                   pop ebx
// 00505d12  83c450               add esp, 0x50
// 00505d15  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
