// roc 2009-06 004dd000  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dd000
//
// 004dd000  d94108               fld dword ptr [ecx + 8]
// 004dd003  8b542408             mov edx, dword ptr [esp + 8]
// 004dd007  d94208               fld dword ptr [edx + 8]
// 004dd00a  56                   push esi
// 004dd00b  8b742410             mov esi, dword ptr [esp + 0x10]
// 004dd00f  d94608               fld dword ptr [esi + 8]
// 004dd012  d9ca                 fxch st(2)
// 004dd014  d8d1                 fcom st(1)
// 004dd016  dfe0                 fnstsw ax
// 004dd018  f6c441               test ah, 0x41
// 004dd01b  7a41                 jp 0x4dd05e
// 004dd01d  ddd8                 fstp st(0)
// 004dd01f  ddd9                 fstp st(1)
// 004dd021  d94104               fld dword ptr [ecx + 4]
// 004dd024  d94204               fld dword ptr [edx + 4]
// 004dd027  d94604               fld dword ptr [esi + 4]
// 004dd02a  d9ca                 fxch st(2)
// 004dd02c  d8d1                 fcom st(1)
// 004dd02e  dfe0                 fnstsw ax
// 004dd030  f6c441               test ah, 0x41
// 004dd033  7a38                 jp 0x4dd06d
// 004dd035  ddd8                 fstp st(0)
// 004dd037  ddd9                 fstp st(1)
// 004dd039  d901                 fld dword ptr [ecx]
// 004dd03b  d902                 fld dword ptr [edx]
// 004dd03d  d906                 fld dword ptr [esi]
// 004dd03f  5e                   pop esi
// 004dd040  d9ca                 fxch st(2)
// 004dd042  d8d1                 fcom st(1)
// 004dd044  dfe0                 fnstsw ax
// 004dd046  f6c441               test ah, 0x41
// 004dd049  7a31                 jp 0x4dd07c
// 004dd04b  ddd8                 fstp st(0)
// 004dd04d  8b442404             mov eax, dword ptr [esp + 4]
// 004dd051  ddd9                 fstp st(1)
// 004dd053  d918                 fstp dword ptr [eax]
// 004dd055  d95804               fstp dword ptr [eax + 4]
// 004dd058  d95808               fstp dword ptr [eax + 8]
// 004dd05b  c20c00               ret 0xc
// 004dd05e  ddd9                 fstp st(1)
// 004dd060  d8d1                 fcom st(1)
// 004dd062  dfe0                 fnstsw ax
// 004dd064  f6c401               test ah, 1
// 004dd067  75b6                 jne 0x4dd01f
// 004dd069  ddd8                 fstp st(0)
// 004dd06b  ebb4                 jmp 0x4dd021
// 004dd06d  ddd9                 fstp st(1)
// 004dd06f  d8d1                 fcom st(1)
// 004dd071  dfe0                 fnstsw ax
// 004dd073  f6c401               test ah, 1
// 004dd076  75bf                 jne 0x4dd037
// 004dd078  ddd8                 fstp st(0)
// 004dd07a  ebbd                 jmp 0x4dd039
// 004dd07c  ddd9                 fstp st(1)
// 004dd07e  d8d1                 fcom st(1)
// 004dd080  dfe0                 fnstsw ax
// 004dd082  f6c401               test ah, 1
// 004dd085  75c6                 jne 0x4dd04d
// 004dd087  8b442404             mov eax, dword ptr [esp + 4]
// 004dd08b  ddd8                 fstp st(0)
// 004dd08d  d918                 fstp dword ptr [eax]
// 004dd08f  d95804               fstp dword ptr [eax + 4]
// 004dd092  d95808               fstp dword ptr [eax + 8]
// 004dd095  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\AABox.cpp (function ?clamp@Vector3@G3D@@QBE?AV12@ABV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/AABox.cpp
