// roc 2009-12 00401410  unit: CAboutRobloxDialog  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401410
//
// 00401410  c70178f49900         mov dword ptr [ecx], 0x99f478
// 00401416  ff2550b79800         jmp dword ptr [0x98b750]
// standard library vector<ptr> (function ??1bad_alloc@std@@UAE@XZ)

// stl: vector<ptr>
struct T; typedef T* E;
#include <vector>
template class std::vector<E>;
