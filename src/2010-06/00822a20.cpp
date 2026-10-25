// from server: 100% by atomic.potato
// roc 2010-06 00822a20  unit: CXTPResourceManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822a20
//
// 00822a20  56                   push esi
// 00822a21  8bf1                 mov esi, ecx
// 00822a23  e8a8f6ffff           call 0x8220d0
// 00822a28  50                   push eax
// 00822a29  e8e2feffff           call 0x822910
// 00822a2e  0fb7c0               movzx eax, ax
// 00822a31  83c404               add esp, 4
// 00822a34  50                   push eax
// 00822a35  8bce                 mov ecx, esi
// 00822a37  e804fdffff           call 0x822740
// 00822a3c  5e                   pop esi
// 00822a3d  c3                   ret 

extern "C" void* __cdecl func_8220d0();
extern "C" unsigned short __cdecl func_822910(void*);

struct CXTPResourceManager {
    void method_822740(unsigned short);
    void func_822a20();
};

void CXTPResourceManager::func_822a20() {
    method_822740(func_822910(func_8220d0()));
}
