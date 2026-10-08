// roc 2009-12 005db5b0  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005db5b0
//
// 005db5b0  c70164139c00         mov dword ptr [ecx], 0x9c1364
// 005db5b6  ff25a8b79800         jmp dword ptr [0x98b7a8]
// standard library vector<ptr> (function ??1bad_alloc@std@@UAE@XZ)

// stl: vector<ptr>
struct T; typedef T* E;
#include <vector>
template class std::vector<E>;
