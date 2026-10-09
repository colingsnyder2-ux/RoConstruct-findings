// roc 2008-06 006c0e30  unit: CXTPImageManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0e30
//
// 006c0e30  8b442404             mov eax, dword ptr [esp + 4]
// 006c0e34  83f801               cmp eax, 1
// 006c0e37  7509                 jne 0x6c0e42
// 006c0e39  89442404             mov dword ptr [esp + 4], eax
// 006c0e3d  e92efdffff           jmp 0x6c0b70
// 006c0e42  83f802               cmp eax, 2
// 006c0e45  7508                 jne 0x6c0e4f
// 006c0e47  e824a7ffff           call 0x6bb570
// 006c0e4c  c20400               ret 4
// 006c0e4f  83f803               cmp eax, 3
// 006c0e52  7508                 jne 0x6c0e5c
// 006c0e54  e837a7ffff           call 0x6bb590
// 006c0e59  c20400               ret 4
// 006c0e5c  83f804               cmp eax, 4
// 006c0e5f  7508                 jne 0x6c0e69
// 006c0e61  e84aa7ffff           call 0x6bb5b0
// 006c0e66  c20400               ret 4
// 006c0e69  e8028cffff           call 0x6b9a70
// 006c0e6e  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPImageManagerIconSet@ns_ROCX000036@ns_ROCX000039@@QAEXH@Z)

namespace ns_ROCX000036 {
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
}
