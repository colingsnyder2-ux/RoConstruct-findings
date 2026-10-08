// roc 2007-08 004b6cd0  unit: RBX::Network::Replicator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6cd0
//
// 004b6cd0  c70124e17900         mov dword ptr [ecx], 0x79e124
// 004b6cd6  e91526feff           jmp 0x4992f0
// auto-matched from its assembly shape

struct B_func_004b6cd0 { virtual ~B_func_004b6cd0(); };
struct S_func_004b6cd0 : B_func_004b6cd0 { ~S_func_004b6cd0(); };
S_func_004b6cd0::~S_func_004b6cd0()
{
}
