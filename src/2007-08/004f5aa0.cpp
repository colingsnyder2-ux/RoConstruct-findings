// roc 2007-08 004f5aa0  unit: boost::bad_lexical_cast  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f5aa0
//
// 004f5aa0  56                   push esi
// 004f5aa1  e8bafbffff           call 0x4f5660
// 004f5aa6  8b742408             mov esi, dword ptr [esp + 8]
// 004f5aaa  8bce                 mov ecx, esi
// 004f5aac  e82ff2f7ff           call 0x474ce0
// 004f5ab1  b9e0fa8b00           mov ecx, 0x8bfae0
// 004f5ab6  e80508f9ff           call 0x4862c0
// 004f5abb  84c0                 test al, al
// 004f5abd  740c                 je 0x4f5acb
// 004f5abf  68e0fa8b00           push 0x8bfae0
// 004f5ac4  8bce                 mov ecx, esi
// 004f5ac6  e8450bf8ff           call 0x476610
// 004f5acb  b900fb8b00           mov ecx, 0x8bfb00
// 004f5ad0  e8eb07f9ff           call 0x4862c0
// 004f5ad5  84c0                 test al, al
// 004f5ad7  740c                 je 0x4f5ae5
// 004f5ad9  6800fb8b00           push 0x8bfb00
// 004f5ade  8bce                 mov ecx, esi
// 004f5ae0  e84b0bf8ff           call 0x476630
// 004f5ae5  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004f5aea  741c                 je 0x4f5b08
// 004f5aec  b950fb8b00           mov ecx, 0x8bfb50
// 004f5af1  e8ca07f9ff           call 0x4862c0
// 004f5af6  84c0                 test al, al
// 004f5af8  740e                 je 0x4f5b08
// 004f5afa  6850fb8b00           push 0x8bfb50
// 004f5aff  6a00                 push 0
// 004f5b01  8bce                 mov ecx, esi
// 004f5b03  e8480bf8ff           call 0x476650
// 004f5b08  807c241000           cmp byte ptr [esp + 0x10], 0
// 004f5b0d  741c                 je 0x4f5b2b
// 004f5b0f  b970fb8b00           mov ecx, 0x8bfb70
// 004f5b14  e8a707f9ff           call 0x4862c0
// 004f5b19  84c0                 test al, al
// 004f5b1b  740e                 je 0x4f5b2b
// 004f5b1d  6870fb8b00           push 0x8bfb70
// 004f5b22  6a02                 push 2
// 004f5b24  8bce                 mov ecx, esi
// 004f5b26  e8250bf8ff           call 0x476650
// 004f5b2b  5e                   pop esi
// 004f5b2c  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?beginRender@Mesh@Render@RBX@@SAXPAVRenderDevice@G3D@@_N1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
