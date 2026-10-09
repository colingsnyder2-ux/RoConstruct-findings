// roc 2009-06 004c3f80  unit: RBX::Network::VPlayer::?$EventDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c3f80
//
// 004c3f80  56                   push esi
// 004c3f81  8b742408             mov esi, dword ptr [esp + 8]
// 004c3f85  56                   push esi
// 004c3f86  e845f8feff           call 0x4b37d0
// 004c3f8b  83c404               add esp, 4
// 004c3f8e  85c0                 test eax, eax
// 004c3f90  7419                 je 0x4c3fab
// 004c3f92  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c3f96  50                   push eax
// 004c3f97  56                   push esi
// 004c3f98  e893f60000           call 0x4d3630
// 004c3f9d  83c408               add esp, 8
// 004c3fa0  84c0                 test al, al
// 004c3fa2  7507                 jne 0x4c3fab
// 004c3fa4  b801000000           mov eax, 1
// 004c3fa9  5e                   pop esi
// 004c3faa  c3                   ret 
// 004c3fab  33c0                 xor eax, eax
// 004c3fad  5e                   pop esi
// 004c3fae  c3                   ret 
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
