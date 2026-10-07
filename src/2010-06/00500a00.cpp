// roc 2010-06 00500a00  unit: RBX::Network::VMarker::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00500a00
//
// 00500a00  c701ccc8a100         mov dword ptr [ecx], 0xa1c8cc
// 00500a06  e97595fdff           jmp 0x4d9f80
// auto-matched from its assembly shape

struct B_func_00500a00 { virtual ~B_func_00500a00(); };
struct S_func_00500a00 : B_func_00500a00 { ~S_func_00500a00(); };
S_func_00500a00::~S_func_00500a00()
{
}
