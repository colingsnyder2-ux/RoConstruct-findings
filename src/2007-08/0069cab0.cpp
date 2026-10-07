// roc 2007-08 0069cab0  unit: CXTPPropertyGridView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cab0
//
// 0069cab0  8b542404             mov edx, dword ptr [esp + 4]
// 0069cab4  8d41ac               lea eax, [ecx - 0x54]
// 0069cab7  85c0                 test eax, eax
// 0069cab9  c70200000000         mov dword ptr [edx], 0
// 0069cabf  742e                 je 0x69caef
// 0069cac1  83782000             cmp dword ptr [eax + 0x20], 0
// 0069cac5  7428                 je 0x69caef
// 0069cac7  85c0                 test eax, eax
// 0069cac9  7510                 jne 0x69cadb
// 0069cacb  52                   push edx
// 0069cacc  687c4e7c00           push 0x7c4e7c
// 0069cad1  50                   push eax
// 0069cad2  50                   push eax
// 0069cad3  e8c853fdff           call 0x671ea0
// 0069cad8  c20400               ret 4
// 0069cadb  8b4020               mov eax, dword ptr [eax + 0x20]
// 0069cade  52                   push edx
// 0069cadf  687c4e7c00           push 0x7c4e7c
// 0069cae4  6a00                 push 0
// 0069cae6  50                   push eax
// 0069cae7  e8b453fdff           call 0x671ea0
// 0069caec  c20400               ret 4
// 0069caef  b805400080           mov eax, 0x80004005
// 0069caf4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleParent@CXTPPropertyGridView@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
