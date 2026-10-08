// roc 2007-03 0048b8e0  unit: seg_00480000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048b8e0
//
// 0048b8e0  56                   push esi
// 0048b8e1  8bf1                 mov esi, ecx
// 0048b8e3  833e00               cmp dword ptr [esi], 0
// 0048b8e6  57                   push edi
// 0048b8e7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 0048b8ed  7502                 jne 0x48b8f1
// 0048b8ef  ffd7                 call edi
// 0048b8f1  8b06                 mov eax, dword ptr [esi]
// 0048b8f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048b8f6  3b4804               cmp ecx, dword ptr [eax + 4]
// 0048b8f9  7502                 jne 0x48b8fd
// 0048b8fb  ffd7                 call edi
// 0048b8fd  8b5604               mov edx, dword ptr [esi + 4]
// 0048b900  8b02                 mov eax, dword ptr [edx]
// 0048b902  894604               mov dword ptr [esi + 4], eax
// 0048b905  5f                   pop edi
// 0048b906  8bc6                 mov eax, esi
// 0048b908  5e                   pop esi
// 0048b909  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??E?$_Const_iterator@$00@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEAAV012@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
