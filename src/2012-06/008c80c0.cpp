// roc 2012-06 008c80c0  unit: RBX::$$A6AXABVUIEvent::?$signal::Vslot::?$callable  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c80c0
//
// 008c80c0  51                   push ecx
// 008c80c1  56                   push esi
// 008c80c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c80c6  81c188000000         add ecx, 0x88
// 008c80cc  51                   push ecx
// 008c80cd  8bce                 mov ecx, esi
// 008c80cf  c744240800000000     mov dword ptr [esp + 8], 0
// 008c80d7  ff154426b200         call dword ptr [0xb22644]
// 008c80dd  8bc6                 mov eax, esi
// 008c80df  5e                   pop esi
// 008c80e0  59                   pop ecx
// 008c80e1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
