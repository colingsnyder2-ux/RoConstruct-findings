// roc 2009-06 005bab70  unit: seg_005b0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bab70
//
// 005bab70  55                   push ebp
// 005bab71  8bec                 mov ebp, esp
// 005bab73  51                   push ecx
// 005bab74  894dfc               mov dword ptr [ebp - 4], ecx
// 005bab77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bab7a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bab7d  8b11                 mov edx, dword ptr [ecx]
// 005bab7f  8910                 mov dword ptr [eax], edx
// 005bab81  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bab84  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bab87  8b11                 mov edx, dword ptr [ecx]
// 005bab89  895004               mov dword ptr [eax + 4], edx
// 005bab8c  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bab8f  8be5                 mov esp, ebp
// 005bab91  5d                   pop ebp
// 005bab92  c20800               ret 8
// copied from an identical function in another client (function ??0?$pair@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@QAE@ABQAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp