// roc 2009-12 0084dbe0  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dbe0
//
// 0084dbe0  8b442404             mov eax, dword ptr [esp + 4]
// 0084dbe4  56                   push esi
// 0084dbe5  50                   push eax
// 0084dbe6  8bf1                 mov esi, ecx
// 0084dbe8  e843880d00           call 0x926430
// 0084dbed  85c0                 test eax, eax
// 0084dbef  740e                 je 0x84dbff
// 0084dbf1  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084dbf7  8b11                 mov edx, dword ptr [ecx]
// 0084dbf9  50                   push eax
// 0084dbfa  8b4210               mov eax, dword ptr [edx + 0x10]
// 0084dbfd  ffd0                 call eax
// 0084dbff  b801000000           mov eax, 1
// 0084dc04  5e                   pop esi
// 0084dc05  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
