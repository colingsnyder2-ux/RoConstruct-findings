// from server: 100% by colin
// roc 2007-08 0061b740  unit: RBX::ChatButton  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b740
//
// 0061b740  56                   push esi
// 0061b741  8bf1                 mov esi, ecx
// 0061b743  56                   push esi
// 0061b744  e86728e7ff           call 0x48dfb0
// 0061b749  83c404               add esp, 4
// 0061b74c  85c0                 test eax, eax
// 0061b74e  741f                 je 0x61b76f
// 0061b750  83b83801000000       cmp dword ptr [eax + 0x138], 0
// 0061b757  7416                 je 0x61b76f
// 0061b759  6a01                 push 1
// 0061b75b  56                   push esi
// 0061b75c  e83f5ee7ff           call 0x4915a0
// 0061b761  83c408               add esp, 8
// 0061b764  84c0                 test al, al
// 0061b766  7407                 je 0x61b76f
// 0061b768  b801000000           mov eax, 1
// 0061b76d  5e                   pop esi
// 0061b76e  c3                   ret 
// 0061b76f  33c0                 xor eax, eax
// 0061b771  5e                   pop esi
// 0061b772  c3                   ret 

struct ChatButton {
    int isVisible() const;
};

extern "C" void* __cdecl sub_48DFB0(void*);
extern "C" bool __cdecl sub_4915A0(void*, int);

int ChatButton::isVisible() const {
    void* p = sub_48DFB0((void*)this);
    if (p != 0 && *(int*)((char*)p + 0x138) != 0) {
        if (sub_4915A0((void*)this, 1)) {
            return 1;
        }
    }
    return 0;
}
