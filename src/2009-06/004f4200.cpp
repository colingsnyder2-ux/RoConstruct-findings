// roc 2009-06 004f4200  unit: RBX::Network::VMarker::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4200
//
// 004f4200  c701cc7e8c00         mov dword ptr [ecx], 0x8c7ecc
// 004f4206  e9951efeff           jmp 0x4d60a0
// auto-matched from its assembly shape

struct B_func_004f4200 { virtual ~B_func_004f4200(); };
struct S_func_004f4200 : B_func_004f4200 { ~S_func_004f4200(); };
S_func_004f4200::~S_func_004f4200()
{
}
