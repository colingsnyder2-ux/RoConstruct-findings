// roc 2007-03 004f2fe0  unit: seg_004f0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2fe0
//
// 004f2fe0  83ec14               sub esp, 0x14
// 004f2fe3  6850a18b00           push 0x8ba150
// 004f2fe8  ff15e8d17700         call dword ptr [0x77d1e8]
// 004f2fee  85c0                 test eax, eax
// 004f2ff0  740b                 je 0x4f2ffd
// 004f2ff2  6860a58b00           push 0x8ba560
// 004f2ff7  ff15ecd17700         call dword ptr [0x77d1ec]
// 004f2ffd  8d442404             lea eax, [esp + 4]
// 004f3001  50                   push eax
// 004f3002  ff1504e97700         call dword ptr [0x77e904]
// 004f3008  df6c2408             fild qword ptr [esp + 8]
// 004f300c  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 004f3011  668b542414           mov dx, word ptr [esp + 0x14]
// 004f3016  8bc8                 mov ecx, eax
// 004f3018  c1e104               shl ecx, 4
// 004f301b  2bc8                 sub ecx, eax
// 004f301d  03c9                 add ecx, ecx
// 004f301f  03c9                 add ecx, ecx
// 004f3021  66f7da               neg dx
// 004f3024  894c2404             mov dword ptr [esp + 4], ecx
// 004f3028  db442404             fild dword ptr [esp + 4]
// 004f302c  dee9                 fsubp st(1)
// 004f302e  1bd2                 sbb edx, edx
// 004f3030  81e2100e0000         and edx, 0xe10
// 004f3036  89542404             mov dword ptr [esp + 4], edx
// 004f303a  db442404             fild dword ptr [esp + 4]
// 004f303e  dec1                 faddp st(1)
// 004f3040  dd1d58a58b00         fstp qword ptr [0x8ba558]
// 004f3046  83c418               add esp, 0x18
// 004f3049  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
