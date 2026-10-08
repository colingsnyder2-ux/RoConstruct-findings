// from server: 17% by colin
// roc 2007-08 004c7d30  unit: RakPeer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c7d30
//
// 004c7d30  40                   inc eax
// 004c7d31  008d7efc526a         add byte ptr [ebp + 0x6a52fc7e], cl
// 004c7d37  0856e8               or byte ptr [esi - 0x18], dl
// 004c7d3a  b98d160057           mov ecx, 0x5700168d
// 004c7d3f  e81e7f1600           call 0x62fc62
// 004c7d44  83c404               add esp, 4
// 004c7d47  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7d4b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7d52  59                   pop ecx
// 004c7d53  5f                   pop edi
// 004c7d54  5e                   pop esi
// 004c7d55  83c410               add esp, 0x10
// 004c7d58  c3                   ret 

extern "C" void __cdecl sub_0062FC62();

struct RakPeer
{
    void func_004C7D30();
};

void RakPeer::func_004C7D30()
{
    sub_0062FC62();
}
