// from server: 100% by tester
// roc 2008-06 0064ea90  unit: RBX::ChatButton  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ea90
//
// 0064ea90  56                   push esi
// 0064ea91  8bf1                 mov esi, ecx
// 0064ea93  56                   push esi
// 0064ea94  e8b732e4ff           call 0x491d50
// 0064ea99  83c404               add esp, 4
// 0064ea9c  85c0                 test eax, eax
// 0064ea9e  741f                 je 0x64eabf
// 0064eaa0  83b8a001000000       cmp dword ptr [eax + 0x1a0], 0
// 0064eaa7  7416                 je 0x64eabf
// 0064eaa9  6a01                 push 1
// 0064eaab  56                   push esi
// 0064eaac  e8af73e4ff           call 0x495e60
// 0064eab1  83c408               add esp, 8
// 0064eab4  84c0                 test al, al
// 0064eab6  7407                 je 0x64eabf
// 0064eab8  b801000000           mov eax, 1
// 0064eabd  5e                   pop esi
// 0064eabe  c3                   ret 
// 0064eabf  33c0                 xor eax, eax
// 0064eac1  5e                   pop esi
// 0064eac2  c3                   ret 

struct ChatButton {
    int isVisible() const;
};

extern "C" void* __cdecl sub_48DFB0(void*);
extern "C" bool __cdecl sub_4915A0(void*, int);

int ChatButton::isVisible() const {
    void* p = sub_48DFB0((void*)this);
    if (p != 0 && *(int*)((char*)p + 0x1a0) != 0) {
        if (sub_4915A0((void*)this, 1)) {
            return 1;
        }
    }
    return 0;
}
