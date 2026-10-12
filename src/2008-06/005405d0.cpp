// from server: 77% by king_originala
// roc 2008-06 005405d0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005405d0
//
// 005405d0  55                   push ebp
// 005405d1  8bec                 mov ebp, esp
// 005405d3  6aff                 push -1
// 005405d5  68e8d37c00           push 0x7cd3e8
// 005405da  64a100000000         mov eax, dword ptr fs:[0]
// 005405e0  50                   push eax
// 005405e1  51                   push ecx
// 005405e2  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 005405e7  33c5                 xor eax, ebp
// 005405e9  50                   push eax
// 005405ea  8d45f4               lea eax, [ebp - 0xc]
// 005405ed  64a300000000         mov dword ptr fs:[0], eax
// 005405f3  894df0               mov dword ptr [ebp - 0x10], ecx
// 005405f6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005405fd  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00540600  e8cb0e0000           call 0x5414d0
// 00540605  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054060c  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0054060f  e8ac0b0000           call 0x5411c0
// 00540614  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00540617  64890d00000000       mov dword ptr fs:[0], ecx
// 0054061e  59                   pop ecx
// 0054061f  8be5                 mov esp, ebp
// 00540621  5d                   pop ebp
// 00540622  c3                   ret 

#pragma optimize("", off)

struct Base
{
    ~Base();
};

struct Bucket : Base
{
    ~Bucket();
    void cleanup();
};

Bucket::~Bucket()
{
    cleanup();
}
