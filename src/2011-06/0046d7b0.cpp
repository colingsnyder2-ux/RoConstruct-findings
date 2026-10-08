// roc 2011-06 0046d7b0  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d7b0
//
// 0046d7b0  8b442404             mov eax, dword ptr [esp + 4]
// 0046d7b4  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0046d7ba  7413                 je 0x46d7cf
// 0046d7bc  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0046d7c2  c744240401000000     mov dword ptr [esp + 4], 1
// 0046d7ca  e9c1f53900           jmp 0x80cd90
// 0046d7cf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
