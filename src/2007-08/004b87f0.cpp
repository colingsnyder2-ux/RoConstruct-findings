// from server: 88% by colin
// roc 2007-08 004b87f0  unit: RakPeerInterface  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b87f0
//
// 004b87f0  6a1c                 push 0x1c
// 004b87f2  ff15d0e67700         call dword ptr [0x77e6d0]
// 004b87f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b87fc  8b542408             mov edx, dword ptr [esp + 8]
// 004b8800  83c404               add esp, 4
// 004b8803  894814               mov dword ptr [eax + 0x14], ecx
// 004b8806  89500c               mov dword ptr [eax + 0xc], edx
// 004b8809  c6401801             mov byte ptr [eax + 0x18], 1
// 004b880d  c3                   ret 

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
