// roc 2011-06 0080c3e0  unit: boost::exception  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c3e0
//
// 0080c3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0080c3e4  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0080c3ea  8910                 mov dword ptr [eax], edx
// 0080c3ec  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0080c3f2  895004               mov dword ptr [eax + 4], edx
// 0080c3f5  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0080c3fb  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0080c401  895008               mov dword ptr [eax + 8], edx
// 0080c404  89480c               mov dword ptr [eax + 0xc], ecx
// 0080c407  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
