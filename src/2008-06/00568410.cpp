// roc 2008-06 00568410  unit: RBX::Selection  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568410
//
// 00568410  c7019cb48000         mov dword ptr [ecx], 0x80b49c
// 00568416  ff259c288000         jmp dword ptr [0x80289c]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00568410 { virtual ~B_func_00568410(); };
struct S_func_00568410 : B_func_00568410 { ~S_func_00568410(); };
S_func_00568410::~S_func_00568410()
{
}
