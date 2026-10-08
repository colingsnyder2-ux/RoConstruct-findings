// from server: 91% by colin
// roc 2007-08 00631c50  unit: CXTPCommandBars  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631c50
//
// 00631c50  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00631c56  56                   push esi
// 00631c57  51                   push ecx
// 00631c58  e861eaffff           call 0x6306be
// 00631c5d  50                   push eax
// 00631c5e  e89fe5ffff           call 0x630202
// 00631c63  8bf0                 mov esi, eax
// 00631c65  83c408               add esp, 8
// 00631c68  85f6                 test esi, esi
// 00631c6a  741e                 je 0x631c8a
// 00631c6c  f686d000000008       test byte ptr [esi + 0xd0], 8
// 00631c73  7415                 je 0x631c8a
// 00631c75  8b06                 mov eax, dword ptr [esi]
// 00631c77  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00631c7d  6a00                 push 0
// 00631c7f  8bce                 mov ecx, esi
// 00631c81  ffd2                 call edx
// 00631c83  83a6d0000000f7       and dword ptr [esi + 0xd0], 0xfffffff7
// 00631c8a  5e                   pop esi
// 00631c8b  c3                   ret 

struct CXTPCommandBars {
    char pad[0xa0];
    void* field_a0;
    void sub_631c50();
};

extern "C" void* __cdecl sub_6306be(void*);
extern "C" void* __cdecl sub_630202(void*);

void CXTPCommandBars::sub_631c50() {
    void* p = sub_630202(sub_6306be(field_a0));
    if (p != 0) {
        if (*(unsigned char*)((char*)p + 0xd0) & 8) {
            void** vt = *(void***)p;
            void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x150 / 4];
            fn(p, 0);
            *(unsigned int*)((char*)p + 0xd0) &= 0xfffffff7;
        }
    }
}
