// roc 2009-12 0047d9c0  unit: RBX::MeshGen  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d9c0
//
// 0047d9c0  8b442404             mov eax, dword ptr [esp + 4]
// 0047d9c4  c20400               ret 4
// standard library vector<ptr> (function ?get_allocator@?$vector@PAUT@@V?$allocator@PAUT@@@std@@@std@@QBE?AV?$allocator@PAUT@@@2@XZ)

// stl: vector<ptr>
struct T; typedef T* E;
#include <vector>
template class std::vector<E>;
