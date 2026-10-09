// roc 2007-03 004ada60  unit: seg_004a0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ada60
//
// 004ada60  6a1c                 push 0x1c
// 004ada62  e897141700           call 0x61eefe
// 004ada67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ada6b  8b542408             mov edx, dword ptr [esp + 8]
// 004ada6f  83c404               add esp, 4
// 004ada72  894814               mov dword ptr [eax + 0x14], ecx
// 004ada75  89500c               mov dword ptr [eax + 0xc], edx
// 004ada78  c6401801             mov byte ptr [eax + 0x18], 1
// 004ada7c  c3                   ret 
// copied from an identical function in another client (function ?construct@ns_ROCX000001@@YAPAXII@Z)

namespace ns_ROCX000001 {
extern "C" void* __cdecl malloc(unsigned int size);

struct RakPeerInterface {
};

void* __cdecl construct(unsigned int a, unsigned int b) {
    char* p = (char*)malloc(0x1c);
    *(unsigned int*)(p + 0x14) = b;
    *(unsigned int*)(p + 0xc) = a;
    *(unsigned char*)(p + 0x18) = 1;
    return p;
}
}
