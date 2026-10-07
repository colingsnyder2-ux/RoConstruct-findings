// roc 2008-06 006dbe80  unit: CXTTreeCtrl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbe80
//
// 006dbe80  8b442408             mov eax, dword ptr [esp + 8]
// 006dbe84  8b542404             mov edx, dword ptr [esp + 4]
// 006dbe88  c70000000000         mov dword ptr [eax], 0
// 006dbe8e  8b4210               mov eax, dword ptr [edx + 0x10]
// 006dbe91  894110               mov dword ptr [ecx + 0x10], eax
// 006dbe94  33c0                 xor eax, eax
// 006dbe96  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnBeginLabelEdit@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
