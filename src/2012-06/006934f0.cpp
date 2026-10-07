// roc 2012-06 006934f0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006934f0
//
// 006934f0  56                   push esi
// 006934f1  8b31                 mov esi, dword ptr [ecx]
// 006934f3  85f6                 test esi, esi
// 006934f5  7410                 je 0x693507
// 006934f7  8bce                 mov ecx, esi
// 006934f9  e8d2d71900           call 0x830cd0
// 006934fe  56                   push esi
// 006934ff  e810ec2e00           call 0x982114
// 00693504  83c404               add esp, 4
// 00693507  5e                   pop esi
// 00693508  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
