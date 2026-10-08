// from server: 100% by auto
// roc 2007-08 0068f510  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f510
//
// 0068f510  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0068f516  83f8ff               cmp eax, -1
// 0068f519  7506                 jne 0x68f521
// 0068f51b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0068f521  8b542404             mov edx, dword ptr [esp + 4]
// 0068f525  52                   push edx
// 0068f526  50                   push eax
// 0068f527  83c120               add ecx, 0x20
// 0068f52a  e811100500           call 0x6e0540
// 0068f52f  8bc8                 mov ecx, eax
// 0068f531  e87aecfdff           call 0x66e1b0
// 0068f536  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
