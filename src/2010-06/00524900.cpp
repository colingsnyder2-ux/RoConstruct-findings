// roc 2010-06 00524900  unit: RBX::MeshGen  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00524900
//
// 00524900  6a01                 push 1
// 00524902  6a01                 push 1
// 00524904  b93c88c000           mov ecx, 0xc0883c
// 00524909  e852e5ffff           call 0x522e60
// 0052490e  6a01                 push 1
// 00524910  6a01                 push 1
// 00524912  b94888c000           mov ecx, 0xc08848
// 00524917  e844e5ffff           call 0x522e60
// 0052491c  6a01                 push 1
// 0052491e  6a01                 push 1
// 00524920  b9e087c000           mov ecx, 0xc087e0
// 00524925  e846e6ffff           call 0x522f70
// 0052492a  6a01                 push 1
// 0052492c  6a01                 push 1
// 0052492e  b9a488c000           mov ecx, 0xc088a4
// 00524933  e828e5ffff           call 0x522e60
// 00524938  6a01                 push 1
// 0052493a  6a01                 push 1
// 0052493c  b99888c000           mov ecx, 0xc08898
// 00524941  e8da42f6ff           call 0x488c20
// 00524946  a19888c000           mov eax, dword ptr [0xc08898]
// 0052494b  6a01                 push 1
// 0052494d  6a00                 push 0
// 0052494f  b9ec87c000           mov ecx, 0xc087ec
// 00524954  c70001000000         mov dword ptr [eax], 1
// 0052495a  e8c142f6ff           call 0x488c20
// 0052495f  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?initStatics@Mesh@Render@RBX@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
