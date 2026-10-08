// from server: 66% by colin
// roc 2009-06 006803f0  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006803f0
//
// 006803f0  833900               cmp dword ptr [ecx], 0
// 006803f3  0f95c0               setne al
// 006803f6  c3                   ret 

struct RBX_Mechanism {
    int f() const;
};

extern "C" __declspec(dllimport) void* __cdecl some_function();

int RBX_Mechanism::f() const {
    return *(int*)this != 0;
}
