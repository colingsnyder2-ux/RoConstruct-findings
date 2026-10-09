// roc 2009-06 00569250  unit: RBX::RbxG3D::RenderScene  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569250
//
// 00569250  6aff                 push -1
// 00569252  688efa8500           push 0x85fa8e
// 00569257  64a100000000         mov eax, dword ptr fs:[0]
// 0056925d  50                   push eax
// 0056925e  64892500000000       mov dword ptr fs:[0], esp
// 00569265  51                   push ecx
// 00569266  56                   push esi
// 00569267  8bf1                 mov esi, ecx
// 00569269  57                   push edi
// 0056926a  89742408             mov dword ptr [esp + 8], esi
// 0056926e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00569271  8b3da4e18900         mov edi, dword ptr [0x89e1a4]
// 00569277  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0056927f  85c0                 test eax, eax
// 00569281  7428                 je 0x5692ab
// 00569283  83c004               add eax, 4
// 00569286  50                   push eax
// 00569287  ffd7                 call edi
// 00569289  85c0                 test eax, eax
// 0056928b  7517                 jne 0x5692a4
// 0056928d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00569290  e8ebbaedff           call 0x444d80
// 00569295  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00569298  85c9                 test ecx, ecx
// 0056929a  7408                 je 0x5692a4
// 0056929c  8b01                 mov eax, dword ptr [ecx]
// 0056929e  8b10                 mov edx, dword ptr [eax]
// 005692a0  6a01                 push 1
// 005692a2  ffd2                 call edx
// 005692a4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005692ab  6860d14900           push 0x49d160
// 005692b0  6a02                 push 2
// 005692b2  6a04                 push 4
// 005692b4  8d4608               lea eax, [esi + 8]
// 005692b7  50                   push eax
// 005692b8  c644242400           mov byte ptr [esp + 0x24], 0
// 005692bd  e8b4081b00           call 0x719b76
// 005692c2  8b06                 mov eax, dword ptr [esi]
// 005692c4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005692cc  85c0                 test eax, eax
// 005692ce  7425                 je 0x5692f5
// 005692d0  83c004               add eax, 4
// 005692d3  50                   push eax
// 005692d4  ffd7                 call edi
// 005692d6  85c0                 test eax, eax
// 005692d8  7515                 jne 0x5692ef
// 005692da  8b0e                 mov ecx, dword ptr [esi]
// 005692dc  e89fbaedff           call 0x444d80
// 005692e1  8b0e                 mov ecx, dword ptr [esi]
// 005692e3  85c9                 test ecx, ecx
// 005692e5  7408                 je 0x5692ef
// 005692e7  8b11                 mov edx, dword ptr [ecx]
// 005692e9  8b02                 mov eax, dword ptr [edx]
// 005692eb  6a01                 push 1
// 005692ed  ffd0                 call eax
// 005692ef  c70600000000         mov dword ptr [esi], 0
// 005692f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005692f9  5f                   pop edi
// 005692fa  5e                   pop esi
// 005692fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00569302  83c410               add esp, 0x10
// 00569305  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
