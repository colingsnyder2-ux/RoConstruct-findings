// roc 2007-03 004f3260  unit: seg_004f0000  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3260
//
// 004f3260  55                   push ebp
// 004f3261  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004f3265  85ed                 test ebp, ebp
// 004f3267  56                   push esi
// 004f3268  8bf1                 mov esi, ecx
// 004f326a  0f84e7000000         je 0x4f3357
// 004f3270  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 004f3276  3be8                 cmp ebp, eax
// 004f3278  57                   push edi
// 004f3279  7237                 jb 0x4f32b2
// 004f327b  0500007d00           add eax, 0x7d0000
// 004f3280  3be8                 cmp ebp, eax
// 004f3282  732e                 jae 0x4f32b2
// 004f3284  8dbe10280400         lea edi, [esi + 0x42810]
// 004f328a  57                   push edi
// 004f328b  ff15bcd27700         call dword ptr [0x77d2bc]
// 004f3291  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 004f3297  89ac8608400000       mov dword ptr [esi + eax*4 + 0x4008], ebp
// 004f329e  83860828040001       add dword ptr [esi + 0x42808], 1
// 004f32a5  57                   push edi
// 004f32a6  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f32ac  5f                   pop edi
// 004f32ad  5e                   pop esi
// 004f32ae  5d                   pop ebp
// 004f32af  c20400               ret 4
// 004f32b2  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004f32b5  53                   push ebx
// 004f32b6  8d45fc               lea eax, [ebp - 4]
// 004f32b9  8d9e10280400         lea ebx, [esi + 0x42810]
// 004f32bf  53                   push ebx
// 004f32c0  89442418             mov dword ptr [esp + 0x18], eax
// 004f32c4  ff15bcd27700         call dword ptr [0x77d2bc]
// 004f32ca  81ff00040000         cmp edi, 0x400
// 004f32d0  7729                 ja 0x4f32fb
// 004f32d2  8b8600200000         mov eax, dword ptr [esi + 0x2000]
// 004f32d8  3d00040000           cmp eax, 0x400
// 004f32dd  7d54                 jge 0x4f3333
// 004f32df  892cc6               mov dword ptr [esi + eax*8], ebp
// 004f32e2  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 004f32e6  83860020000001       add dword ptr [esi + 0x2000], 1
// 004f32ed  53                   push ebx
// 004f32ee  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f32f4  5b                   pop ebx
// 004f32f5  5f                   pop edi
// 004f32f6  5e                   pop esi
// 004f32f7  5d                   pop ebp
// 004f32f8  c20400               ret 4
// 004f32fb  81ff00100000         cmp edi, 0x1000
// 004f3301  7730                 ja 0x4f3333
// 004f3303  8b8604400000         mov eax, dword ptr [esi + 0x4004]
// 004f3309  3d00040000           cmp eax, 0x400
// 004f330e  7d23                 jge 0x4f3333
// 004f3310  89acc604200000       mov dword ptr [esi + eax*8 + 0x2004], ebp
// 004f3317  89bcc608200000       mov dword ptr [esi + eax*8 + 0x2008], edi
// 004f331e  83860440000001       add dword ptr [esi + 0x4004], 1
// 004f3325  53                   push ebx
// 004f3326  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f332c  5b                   pop ebx
// 004f332d  5f                   pop edi
// 004f332e  5e                   pop esi
// 004f332f  5d                   pop ebp
// 004f3330  c20400               ret 4
// 004f3333  b9fcffffff           mov ecx, 0xfffffffc
// 004f3338  2bcf                 sub ecx, edi
// 004f333a  018e38280400         add dword ptr [esi + 0x42838], ecx
// 004f3340  53                   push ebx
// 004f3341  ff15b8d27700         call dword ptr [0x77d2b8]
// 004f3347  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f334b  52                   push edx
// 004f334c  ff1530e97700         call dword ptr [0x77e930]
// 004f3352  83c404               add esp, 4
// 004f3355  5b                   pop ebx
// 004f3356  5f                   pop edi
// 004f3357  5e                   pop esi
// 004f3358  5d                   pop ebp
// 004f3359  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?free@BufferPool@G3D@@QAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
