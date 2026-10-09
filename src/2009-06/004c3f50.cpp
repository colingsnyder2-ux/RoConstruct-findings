// roc 2009-06 004c3f50  unit: RBX::Network::VPlayer::?$EventDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c3f50
//
// 004c3f50  56                   push esi
// 004c3f51  8b742408             mov esi, dword ptr [esp + 8]
// 004c3f55  56                   push esi
// 004c3f56  e875f8feff           call 0x4b37d0
// 004c3f5b  83c404               add esp, 4
// 004c3f5e  85c0                 test eax, eax
// 004c3f60  7419                 je 0x4c3f7b
// 004c3f62  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c3f66  50                   push eax
// 004c3f67  56                   push esi
// 004c3f68  e8733b0100           call 0x4d7ae0
// 004c3f6d  83c408               add esp, 8
// 004c3f70  84c0                 test al, al
// 004c3f72  7507                 jne 0x4c3f7b
// 004c3f74  b801000000           mov eax, 1
// 004c3f79  5e                   pop esi
// 004c3f7a  c3                   ret 
// 004c3f7b  33c0                 xor eax, eax
// 004c3f7d  5e                   pop esi
// 004c3f7e  c3                   ret 
// copied from an identical function in another client (function ?sub_4915C0@ns_ROCX000002@@YAHHH@Z)

namespace ns_ROCX000002 {
extern "C" int __cdecl sub_486830(int);
extern "C" char __cdecl sub_49E5E0(int, int);

int __cdecl sub_4915C0(int a, int b)
{
    if (sub_486830(a) != 0) {
        if (sub_49E5E0(a, b) == 0) {
            return 1;
        }
    }
    return 0;
}
}
