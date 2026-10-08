// from server: 100% by colin
// roc 2007-08 004a5070  unit: RBX::Network::Server::ClientProxy  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5070
//
// 004a5070  8b01                 mov eax, dword ptr [ecx]
// 004a5072  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a5075  8908                 mov dword ptr [eax], ecx
// 004a5077  c3                   ret 

struct S
{
    int* ptr;
    int value;
    void f();
};

void S::f()
{
    *ptr = value;
}
