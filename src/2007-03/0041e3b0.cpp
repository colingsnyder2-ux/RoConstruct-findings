// roc 2007-03 0041e3b0  unit: seg_00410000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e3b0
//
// 0041e3b0  8b542404             mov edx, dword ptr [esp + 4]
// 0041e3b4  8b4104               mov eax, dword ptr [ecx + 4]
// 0041e3b7  3bc2                 cmp eax, edx
// 0041e3b9  7606                 jbe 0x41e3c1
// 0041e3bb  83c0ff               add eax, -1
// 0041e3be  894104               mov dword ptr [ecx + 4], eax
// 0041e3c1  8b01                 mov eax, dword ptr [ecx]
// 0041e3c3  3bc2                 cmp eax, edx
// 0041e3c5  7205                 jb 0x41e3cc
// 0041e3c7  83c0ff               add eax, -1
// 0041e3ca  8901                 mov dword ptr [ecx], eax
// 0041e3cc  8b4908               mov ecx, dword ptr [ecx + 8]
// 0041e3cf  85c9                 test ecx, ecx
// 0041e3d1  75e1                 jne 0x41e3b4
// 0041e3d3  c20400               ret 4
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?removeIndex@RaiseRange@RBX@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
