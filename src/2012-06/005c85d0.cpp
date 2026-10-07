// roc 2012-06 005c85d0  unit: RBX::AdornRbxGfx  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c85d0
//
// 005c85d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005c85d3  0b4124               or eax, dword ptr [ecx + 0x24]
// 005c85d6  56                   push esi
// 005c85d7  750e                 jne 0x5c85e7
// 005c85d9  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c85dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c85e1  895120               mov dword ptr [ecx + 0x20], edx
// 005c85e4  894124               mov dword ptr [ecx + 0x24], eax
// 005c85e7  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005c85ea  8b542408             mov edx, dword ptr [esp + 8]
// 005c85ee  3bd6                 cmp edx, esi
// 005c85f0  751a                 jne 0x5c860c
// 005c85f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c85f6  42                   inc edx
// 005c85f7  c70000000000         mov dword ptr [eax], 0
// 005c85fd  81e2ffffff00         and edx, 0xffffff
// 005c8603  895134               mov dword ptr [ecx + 0x34], edx
// 005c8606  b001                 mov al, 1
// 005c8608  5e                   pop esi
// 005c8609  c21800               ret 0x18
// 005c860c  8bc6                 mov eax, esi
// 005c860e  2bc2                 sub eax, edx
// 005c8610  25ffffff00           and eax, 0xffffff
// 005c8615  3dffff7f00           cmp eax, 0x7fffff
// 005c861a  7639                 jbe 0x5c8655
// 005c861c  8bc2                 mov eax, edx
// 005c861e  2bc6                 sub eax, esi
// 005c8620  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c8624  25ffffff00           and eax, 0xffffff
// 005c8629  8906                 mov dword ptr [esi], eax
// 005c862b  3de8030000           cmp eax, 0x3e8
// 005c8630  7613                 jbe 0x5c8645
// 005c8632  3d50c30000           cmp eax, 0xc350
// 005c8637  7606                 jbe 0x5c863f
// 005c8639  32c0                 xor al, al
// 005c863b  5e                   pop esi
// 005c863c  c21800               ret 0x18
// 005c863f  c706e8030000         mov dword ptr [esi], 0x3e8
// 005c8645  42                   inc edx
// 005c8646  81e2ffffff00         and edx, 0xffffff
// 005c864c  895134               mov dword ptr [ecx + 0x34], edx
// 005c864f  b001                 mov al, 1
// 005c8651  5e                   pop esi
// 005c8652  c21800               ret 0x18
// 005c8655  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c8659  c70100000000         mov dword ptr [ecx], 0
// 005c865f  b001                 mov al, 1
// 005c8661  5e                   pop esi
// 005c8662  c21800               ret 0x18
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?OnGotPacket@CCRakNetSlidingWindow@RakNet@@QAE_NUuint24_t@2@_N_KIPAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
