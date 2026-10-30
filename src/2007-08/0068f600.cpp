// from server: 100% by auto
// roc 2007-08 0068f600  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f600
//
// 0068f600  8b442404             mov eax, dword ptr [esp + 4]
// 0068f604  85c0                 test eax, eax
// 0068f606  7508                 jne 0x68f610
// 0068f608  b857000780           mov eax, 0x80070057
// 0068f60d  c20400               ret 4
// 0068f610  33d2                 xor edx, edx
// 0068f612  39515c               cmp dword ptr [ecx + 0x5c], edx
// 0068f615  0f95c2               setne dl
// 0068f618  8910                 mov dword ptr [eax], edx
// 0068f61a  33c0                 xor eax, eax
// 0068f61c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
