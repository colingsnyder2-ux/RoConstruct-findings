// roc 2009-06 00643740  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643740
//
// 00643740  d94108               fld dword ptr [ecx + 8]
// 00643743  d9442408             fld dword ptr [esp + 8]
// 00643747  d8d1                 fcom st(1)
// 00643749  dfe0                 fnstsw ax
// 0064374b  d944240c             fld dword ptr [esp + 0xc]
// 0064374f  f6c401               test ah, 1
// 00643752  7506                 jne 0x64375a
// 00643754  ddda                 fstp st(2)
// 00643756  d9c0                 fld st(0)
// 00643758  eb11                 jmp 0x64376b
// 0064375a  d8d2                 fcom st(2)
// 0064375c  dfe0                 fnstsw ax
// 0064375e  f6c441               test ah, 0x41
// 00643761  7a06                 jp 0x643769
// 00643763  ddda                 fstp st(2)
// 00643765  d9c1                 fld st(1)
// 00643767  eb02                 jmp 0x64376b
// 00643769  d9ca                 fxch st(2)
// 0064376b  d94104               fld dword ptr [ecx + 4]
// 0064376e  d8d2                 fcom st(2)
// 00643770  dfe0                 fnstsw ax
// 00643772  f6c441               test ah, 0x41
// 00643775  7a06                 jp 0x64377d
// 00643777  ddd8                 fstp st(0)
// 00643779  d9c1                 fld st(1)
// 0064377b  eb0d                 jmp 0x64378a
// 0064377d  d8d3                 fcom st(3)
// 0064377f  dfe0                 fnstsw ax
// 00643781  f6c401               test ah, 1
// 00643784  7504                 jne 0x64378a
// 00643786  ddd8                 fstp st(0)
// 00643788  d9c2                 fld st(2)
// 0064378a  d901                 fld dword ptr [ecx]
// 0064378c  d8d3                 fcom st(3)
// 0064378e  dfe0                 fnstsw ax
// 00643790  f6c441               test ah, 0x41
// 00643793  7a17                 jp 0x6437ac
// 00643795  8b442404             mov eax, dword ptr [esp + 4]
// 00643799  ddd8                 fstp st(0)
// 0064379b  dddb                 fstp st(3)
// 0064379d  d9c9                 fxch st(1)
// 0064379f  d918                 fstp dword ptr [eax]
// 006437a1  d9c9                 fxch st(1)
// 006437a3  d95804               fstp dword ptr [eax + 4]
// 006437a6  d95808               fstp dword ptr [eax + 8]
// 006437a9  c20c00               ret 0xc
// 006437ac  dddb                 fstp st(3)
// 006437ae  d9ca                 fxch st(2)
// 006437b0  d8d3                 fcom st(3)
// 006437b2  dfe0                 fnstsw ax
// 006437b4  f6c401               test ah, 1
// 006437b7  7504                 jne 0x6437bd
// 006437b9  ddd8                 fstp st(0)
// 006437bb  eb02                 jmp 0x6437bf
// 006437bd  dddb                 fstp st(3)
// 006437bf  8b442404             mov eax, dword ptr [esp + 4]
// 006437c3  d9c9                 fxch st(1)
// 006437c5  d9ca                 fxch st(2)
// 006437c7  d9c9                 fxch st(1)
// 006437c9  d9c9                 fxch st(1)
// 006437cb  d918                 fstp dword ptr [eax]
// 006437cd  d9c9                 fxch st(1)
// 006437cf  d95804               fstp dword ptr [eax + 4]
// 006437d2  d95808               fstp dword ptr [eax + 8]
// 006437d5  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?clamp@Vector3@G3D@@QBE?AV12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
