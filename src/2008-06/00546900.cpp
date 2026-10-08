// roc 2008-06 00546900  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00546900
//
// 00546900  55                   push ebp
// 00546901  8bec                 mov ebp, esp
// 00546903  51                   push ecx
// 00546904  8a45ff               mov al, byte ptr [ebp - 1]
// 00546907  8be5                 mov esp, ebp
// 00546909  5d                   pop ebp
// 0054690a  c3                   ret 
// library rccservice/gSOAP\generated\stdsoap2.cpp (function ??$_Char_traits_cat@U?$char_traits@D@std@@@std@@YA?AU_Secure_char_traits_tag@0@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Oy- /GS- /MD
// roc-lib: rccservice gSOAP/generated/stdsoap2.cpp
