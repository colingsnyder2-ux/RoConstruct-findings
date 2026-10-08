// from server: 100% by auto
// roc 2010-06 00487900  unit: G3D::Win32Window  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487900
//
// 00487900  83c128               add ecx, 0x28
// 00487903  51                   push ecx
// 00487904  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487908  e863fdffff           call 0x487670
// 0048790d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getSettings@Win32Window@G3D@@UBEXAAVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
