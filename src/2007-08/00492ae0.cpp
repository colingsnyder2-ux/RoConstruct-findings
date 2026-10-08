// from server: 79% by colin
// roc 2007-08 00492ae0  unit: RBX::Network::Players  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492ae0
//
// 00492ae0  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 00492ae6  85c0                 test eax, eax
// 00492ae8  7412                 je 0x492afc
// 00492aea  8b0d28de8b00         mov ecx, dword ptr [0x8bde28]
// 00492af0  8b11                 mov edx, dword ptr [ecx]
// 00492af2  83c004               add eax, 4
// 00492af5  50                   push eax
// 00492af6  8b4204               mov eax, dword ptr [edx + 4]
// 00492af9  ffd0                 call eax
// 00492afb  c3                   ret 
// 00492afc  32c0                 xor al, al
// 00492afe  c3                   ret 

struct Players {
    char pad[0x138];
    void* field_0x138;
    bool method();
};

bool Players::method() {
    if (field_0x138) {
        void* p = field_0x138;
        void** vtbl = *(void***)0x8bde28;
        void (*fn)(void*) = (void (*)(void*))vtbl[1];
        fn((char*)p + 4);
    } else {
        return false;
    }
}
