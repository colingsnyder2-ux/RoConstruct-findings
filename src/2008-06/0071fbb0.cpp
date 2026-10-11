// from server: 100% by colin
// roc 2008-06 0071fbb0  unit: CXTPResourceManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071fbb0
//
// 0071fbb0  56                   push esi
// 0071fbb1  8bf1                 mov esi, ecx
// 0071fbb3  e8a8f6ffff           call 0x71f260
// 0071fbb8  50                   push eax
// 0071fbb9  e8e2feffff           call 0x71faa0
// 0071fbbe  0fb7c0               movzx eax, ax
// 0071fbc1  83c404               add esp, 4
// 0071fbc4  50                   push eax
// 0071fbc5  8bce                 mov ecx, esi
// 0071fbc7  e804fdffff           call 0x71f8d0
// 0071fbcc  5e                   pop esi
// 0071fbcd  c3                   ret 

struct CXTPResourceManager {
    void sub_71f8d0(unsigned short);
    void sub_71fbb0();
};

extern "C" void* __cdecl sub_71f260();
extern "C" unsigned short __cdecl sub_71faa0(void*);

void CXTPResourceManager::sub_71fbb0() {
    void* p = sub_71f260();
    unsigned short v = sub_71faa0(p);
    sub_71f8d0(v);
}
