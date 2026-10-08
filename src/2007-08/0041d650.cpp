// roc 2007-08 0041d650  unit: CInsertObjectDialog  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d650
//
// 0041d650  8b542404             mov edx, dword ptr [esp + 4]
// 0041d654  8b4104               mov eax, dword ptr [ecx + 4]
// 0041d657  3bc2                 cmp eax, edx
// 0041d659  7606                 jbe 0x41d661
// 0041d65b  83c0ff               add eax, -1
// 0041d65e  894104               mov dword ptr [ecx + 4], eax
// 0041d661  8b01                 mov eax, dword ptr [ecx]
// 0041d663  3bc2                 cmp eax, edx
// 0041d665  7205                 jb 0x41d66c
// 0041d667  83c0ff               add eax, -1
// 0041d66a  8901                 mov dword ptr [ecx], eax
// 0041d66c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0041d66f  85c9                 test ecx, ecx
// 0041d671  75e1                 jne 0x41d654
// 0041d673  c20400               ret 4
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?removeIndex@RaiseRange@RBX@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
