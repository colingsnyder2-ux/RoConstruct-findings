// from server: 100% by auto
// roc 2008-06 007016b0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007016b0
//
// 007016b0  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 007016b7  741f                 je 0x7016d8
// 007016b9  8b442408             mov eax, dword ptr [esp + 8]
// 007016bd  8b542404             mov edx, dword ptr [esp + 4]
// 007016c1  50                   push eax
// 007016c2  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007016c8  52                   push edx
// 007016c9  8b5020               mov edx, dword ptr [eax + 0x20]
// 007016cc  52                   push edx
// 007016cd  81c178010000         add ecx, 0x178
// 007016d3  e8f8b00700           call 0x77c7d0
// 007016d8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
