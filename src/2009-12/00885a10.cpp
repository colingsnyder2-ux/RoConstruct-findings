// roc 2009-12 00885a10  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885a10
//
// 00885a10  8b542408             mov edx, dword ptr [esp + 8]
// 00885a14  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 00885a1a  85c0                 test eax, eax
// 00885a1c  7417                 je 0x885a35
// 00885a1e  83f801               cmp eax, 1
// 00885a21  7412                 je 0x885a35
// 00885a23  56                   push esi
// 00885a24  8b742408             mov esi, dword ptr [esp + 8]
// 00885a28  52                   push edx
// 00885a29  56                   push esi
// 00885a2a  e831d1f7ff           call 0x802b60
// 00885a2f  8bc6                 mov eax, esi
// 00885a31  5e                   pop esi
// 00885a32  c20800               ret 8
// 00885a35  8b442404             mov eax, dword ptr [esp + 4]
// 00885a39  b902000000           mov ecx, 2
// 00885a3e  c70004000000         mov dword ptr [eax], 4
// 00885a44  894804               mov dword ptr [eax + 4], ecx
// 00885a47  894808               mov dword ptr [eax + 8], ecx
// 00885a4a  89480c               mov dword ptr [eax + 0xc], ecx
// 00885a4d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
