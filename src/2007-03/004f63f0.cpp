// roc 2007-03 004f63f0  unit: seg_004f0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f63f0
//
// 004f63f0  57                   push edi
// 004f63f1  6858ae8b00           push 0x8bae58
// 004f63f6  ff1524ed7700         call dword ptr [0x77ed24]
// 004f63fc  8b3de4ed7700         mov edi, dword ptr [0x77ede4]
// 004f6402  6a01                 push 1
// 004f6404  ffd7                 call edi
// 004f6406  83e801               sub eax, 1
// 004f6409  83f8ff               cmp eax, -1
// 004f640c  a354ae8b00           mov dword ptr [0x8bae54], eax
// 004f6411  7d17                 jge 0x4f642a
// 004f6413  56                   push esi
// 004f6414  83ceff               or esi, 0xffffffff
// 004f6417  2bf0                 sub esi, eax
// 004f6419  8da42400000000       lea esp, [esp]
// 004f6420  6a01                 push 1
// 004f6422  ffd7                 call edi
// 004f6424  83ee01               sub esi, 1
// 004f6427  75f7                 jne 0x4f6420
// 004f6429  5e                   pop esi
// 004f642a  ff1520ee7700         call dword ptr [0x77ee20]
// 004f6430  68007f0000           push 0x7f00
// 004f6435  6a00                 push 0
// 004f6437  a340ae8b00           mov dword ptr [0x8bae40], eax
// 004f643c  ff15f0ec7700         call dword ptr [0x77ecf0]
// 004f6442  50                   push eax
// 004f6443  ff15d0ed7700         call dword ptr [0x77edd0]
// 004f6449  6844ae8b00           push 0x8bae44
// 004f644e  ff151cee7700         call dword ptr [0x77ee1c]
// 004f6454  6a00                 push 0
// 004f6456  ff15e8ed7700         call dword ptr [0x77ede8]
// 004f645c  5f                   pop edi
// 004f645d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/debugAssert.cpp
