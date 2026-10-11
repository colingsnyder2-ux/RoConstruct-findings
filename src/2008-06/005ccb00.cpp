// from server: 100% by atomic.potato
// roc 2008-06 005ccb00  unit: RBX::P8Camera::?$GetSetImpl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ccb00
//
// 005ccb00  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 005ccb06  85c0                 test eax, eax
// 005ccb08  7419                 je 0x5ccb23
// 005ccb0a  6a00                 push 0
// 005ccb0c  6804839400           push 0x948304
// 005ccb11  687c909200           push 0x92907c
// 005ccb16  6a00                 push 0
// 005ccb18  50                   push eax
// 005ccb19  e8a84c0d00           call 0x6a17c6
// 005ccb1e  83c414               add esp, 0x14
// 005ccb21  eb02                 jmp 0x5ccb25
// 005ccb23  33c0                 xor eax, eax
// 005ccb25  6a00                 push 0
// 005ccb27  68c8169500           push 0x9516c8
// 005ccb2c  6804839400           push 0x948304
// 005ccb31  6a00                 push 0
// 005ccb33  50                   push eax
// 005ccb34  e88d4c0d00           call 0x6a17c6
// 005ccb39  83c414               add esp, 0x14
// 005ccb3c  85c0                 test eax, eax
// 005ccb3e  7404                 je 0x5ccb44
// 005ccb40  8a403c               mov al, byte ptr [eax + 0x3c]
// 005ccb43  c3                   ret 
// 005ccb44  32c0                 xor al, al
// 005ccb46  c3                   ret 

extern "C" void* __cdecl sub_6A17C6(void*, void*, void*, void*, void*);

struct P8Camera_GetSetImpl {
    char pad[0x1dc];
    void* field_1dc;
    char get();
};

char P8Camera_GetSetImpl::get() {
    void* p = this->field_1dc;
    if (p) {
        p = sub_6A17C6(p, 0, (void*)0x92907c, (void*)0x948304, 0);
    } else {
        p = 0;
    }
    p = sub_6A17C6(p, 0, (void*)0x9516c8, (void*)0x948304, 0);
    if (p) {
        return *(char*)((char*)p + 0x3c);
    }
    return 0;
}
