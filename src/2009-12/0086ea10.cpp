// roc 2009-12 0086ea10  unit: CXTPResourceManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ea10
//
// 0086ea10  56                   push esi
// 0086ea11  8bf1                 mov esi, ecx
// 0086ea13  e8a8f6ffff           call 0x86e0c0
// 0086ea18  50                   push eax
// 0086ea19  e8e2feffff           call 0x86e900
// 0086ea1e  0fb7c0               movzx eax, ax
// 0086ea21  83c404               add esp, 4
// 0086ea24  50                   push eax
// 0086ea25  8bce                 mov ecx, esi
// 0086ea27  e804fdffff           call 0x86e730
// 0086ea2c  5e                   pop esi
// 0086ea2d  c3                   ret 
// copied from an identical function in another client (function ?func_822a20@CXTPResourceManager@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern "C" void* __cdecl func_8220d0();
extern "C" unsigned short __cdecl func_822910(void*);

struct CXTPResourceManager {
    void method_822740(unsigned short);
    void func_822a20();
};

void CXTPResourceManager::func_822a20() {
    method_822740(func_822910(func_8220d0()));
}
}
