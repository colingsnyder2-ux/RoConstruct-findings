// roc 2007-03 00514dc0  unit: seg_00510000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514dc0
//
// 00514dc0  d9ee                 fldz 
// 00514dc2  83ec18               sub esp, 0x18
// 00514dc5  53                   push ebx
// 00514dc6  56                   push esi
// 00514dc7  8bf1                 mov esi, ecx
// 00514dc9  d916                 fst dword ptr [esi]
// 00514dcb  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00514dcf  d95604               fst dword ptr [esi + 4]
// 00514dd2  57                   push edi
// 00514dd3  d95608               fst dword ptr [esi + 8]
// 00514dd6  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00514dda  d9560c               fst dword ptr [esi + 0xc]
// 00514ddd  57                   push edi
// 00514dde  d95610               fst dword ptr [esi + 0x10]
// 00514de1  8d442410             lea eax, [esp + 0x10]
// 00514de5  d95614               fst dword ptr [esi + 0x14]
// 00514de8  50                   push eax
// 00514de9  d95618               fst dword ptr [esi + 0x18]
// 00514dec  8bcb                 mov ecx, ebx
// 00514dee  d9561c               fst dword ptr [esi + 0x1c]
// 00514df1  d95620               fst dword ptr [esi + 0x20]
// 00514df4  d95624               fst dword ptr [esi + 0x24]
// 00514df7  d95628               fst dword ptr [esi + 0x28]
// 00514dfa  d9562c               fst dword ptr [esi + 0x2c]
// 00514dfd  d95630               fst dword ptr [esi + 0x30]
// 00514e00  d95634               fst dword ptr [esi + 0x34]
// 00514e03  d95638               fst dword ptr [esi + 0x38]
// 00514e06  d9563c               fst dword ptr [esi + 0x3c]
// 00514e09  d95640               fst dword ptr [esi + 0x40]
// 00514e0c  d95644               fst dword ptr [esi + 0x44]
// 00514e0f  d95648               fst dword ptr [esi + 0x48]
// 00514e12  d9564c               fst dword ptr [esi + 0x4c]
// 00514e15  d95650               fst dword ptr [esi + 0x50]
// 00514e18  d95654               fst dword ptr [esi + 0x54]
// 00514e1b  d95658               fst dword ptr [esi + 0x58]
// 00514e1e  d9565c               fst dword ptr [esi + 0x5c]
// 00514e21  d95660               fst dword ptr [esi + 0x60]
// 00514e24  d95664               fst dword ptr [esi + 0x64]
// 00514e27  d95668               fst dword ptr [esi + 0x68]
// 00514e2a  d9566c               fst dword ptr [esi + 0x6c]
// 00514e2d  d95670               fst dword ptr [esi + 0x70]
// 00514e30  d95674               fst dword ptr [esi + 0x74]
// 00514e33  d95678               fst dword ptr [esi + 0x78]
// 00514e36  d9567c               fst dword ptr [esi + 0x7c]
// 00514e39  d99680000000         fst dword ptr [esi + 0x80]
// 00514e3f  d99684000000         fst dword ptr [esi + 0x84]
// 00514e45  d99688000000         fst dword ptr [esi + 0x88]
// 00514e4b  d9968c000000         fst dword ptr [esi + 0x8c]
// 00514e51  d99690000000         fst dword ptr [esi + 0x90]
// 00514e57  d99694000000         fst dword ptr [esi + 0x94]
// 00514e5d  d99e98000000         fstp dword ptr [esi + 0x98]
// 00514e63  e8b832fdff           call 0x4e8120
// 00514e68  50                   push eax
// 00514e69  57                   push edi
// 00514e6a  8d4c2420             lea ecx, [esp + 0x20]
// 00514e6e  51                   push ecx
// 00514e6f  8bcb                 mov ecx, ebx
// 00514e71  e83a32fdff           call 0x4e80b0
// 00514e76  50                   push eax
// 00514e77  8bce                 mov ecx, esi
// 00514e79  e812fdffff           call 0x514b90
// 00514e7e  5f                   pop edi
// 00514e7f  8bc6                 mov eax, esi
// 00514e81  5e                   pop esi
// 00514e82  5b                   pop ebx
// 00514e83  83c418               add esp, 0x18
// 00514e86  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Box.cpp (function ??0Box@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Box.cpp
