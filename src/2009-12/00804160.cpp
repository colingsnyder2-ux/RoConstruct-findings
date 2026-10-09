// roc 2009-12 00804160  unit: CXTPPaintManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804160
//
// 00804160  8b442404             mov eax, dword ptr [esp + 4]
// 00804164  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0080416a  8910                 mov dword ptr [eax], edx
// 0080416c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 00804172  895004               mov dword ptr [eax + 4], edx
// 00804175  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 0080417b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00804181  895008               mov dword ptr [eax + 8], edx
// 00804184  89480c               mov dword ptr [eax + 0xc], ecx
// 00804187  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
