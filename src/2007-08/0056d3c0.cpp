// from server: 100% by colin
// roc 2007-08 0056d3c0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d3c0
//
// 0056d3c0  56                   push esi
// 0056d3c1  8bf1                 mov esi, ecx
// 0056d3c3  e888ffffff           call 0x56d350
// 0056d3c8  8906                 mov dword ptr [esi], eax
// 0056d3ca  c7460400000000       mov dword ptr [esi + 4], 0
// 0056d3d1  8bc6                 mov eax, esi
// 0056d3d3  5e                   pop esi
// 0056d3d4  c3                   ret 

struct VNode {
    int v[2];

    VNode* init();
};

extern "C" int __cdecl helper();

VNode* VNode::init()
{
    this->v[0] = helper();
    this->v[1] = 0;
    return this;
}
