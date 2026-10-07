// roc 2007-08 0050a4b0  unit: G3D::GCamera  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050a4b0
//
// 0050a4b0  b801000000           mov eax, 1
// 0050a4b5  8405d8098c00         test byte ptr [0x8c09d8], al
// 0050a4bb  7538                 jne 0x50a4f5
// 0050a4bd  d9ee                 fldz 
// 0050a4bf  0905d8098c00         or dword ptr [0x8c09d8], eax
// 0050a4c5  83ec24               sub esp, 0x24
// 0050a4c8  d9542420             fst dword ptr [esp + 0x20]
// 0050a4cc  d954241c             fst dword ptr [esp + 0x1c]
// 0050a4d0  b9b4098c00           mov ecx, 0x8c09b4
// 0050a4d5  d9542418             fst dword ptr [esp + 0x18]
// 0050a4d9  d9542414             fst dword ptr [esp + 0x14]
// 0050a4dd  d9542410             fst dword ptr [esp + 0x10]
// 0050a4e1  d954240c             fst dword ptr [esp + 0xc]
// 0050a4e5  d9542408             fst dword ptr [esp + 8]
// 0050a4e9  d9542404             fst dword ptr [esp + 4]
// 0050a4ed  d91c24               fstp dword ptr [esp]
// 0050a4f0  e83bfcffff           call 0x50a130
// 0050a4f5  b8b4098c00           mov eax, 0x8c09b4
// 0050a4fa  c3                   ret 
// library rbx2016-g3d/Quat.cpp (function ?zero@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /arch:SSE2 /fp:fast
// roc-lib: rbx2016-g3d Quat.cpp
