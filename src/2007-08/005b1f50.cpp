// from server: 100% by colin
// roc 2007-08 005b1f50  unit: RBX::VRotateV::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1f50
//
// 005b1f50  8b442404             mov eax, dword ptr [esp + 4]
// 005b1f54  56                   push esi
// 005b1f55  50                   push eax
// 005b1f56  8bf1                 mov esi, ecx
// 005b1f58  e8d3fbffff           call 0x5b1b30
// 005b1f5d  c706c4777b00         mov dword ptr [esi], 0x7b77c4
// 005b1f63  c74604bc777b00       mov dword ptr [esi + 4], 0x7b77bc
// 005b1f6a  c74610b4777b00       mov dword ptr [esi + 0x10], 0x7b77b4
// 005b1f71  c74614a4777b00       mov dword ptr [esi + 0x14], 0x7b77a4
// 005b1f78  c7462c94777b00       mov dword ptr [esi + 0x2c], 0x7b7794
// 005b1f7f  c7464484777b00       mov dword ptr [esi + 0x44], 0x7b7784
// 005b1f86  c7465c74777b00       mov dword ptr [esi + 0x5c], 0x7b7774
// 005b1f8d  c7467464777b00       mov dword ptr [esi + 0x74], 0x7b7764
// 005b1f94  c7868c00000054777b00 mov dword ptr [esi + 0x8c], 0x7b7754
// 005b1f9e  c786e80000003c777b00 mov dword ptr [esi + 0xe8], 0x7b773c
// 005b1fa8  8bc6                 mov eax, esi
// 005b1faa  5e                   pop esi
// 005b1fab  c20400               ret 4

struct Base {
    void construct(int);
};

struct S : Base {
    S* ctor(int);
};

S* S::ctor(int a)
{
    Base::construct(a);
    *(int*)((char*)this + 0x00) = 0x7b77c4;
    *(int*)((char*)this + 0x04) = 0x7b77bc;
    *(int*)((char*)this + 0x10) = 0x7b77b4;
    *(int*)((char*)this + 0x14) = 0x7b77a4;
    *(int*)((char*)this + 0x2c) = 0x7b7794;
    *(int*)((char*)this + 0x44) = 0x7b7784;
    *(int*)((char*)this + 0x5c) = 0x7b7774;
    *(int*)((char*)this + 0x74) = 0x7b7764;
    *(int*)((char*)this + 0x8c) = 0x7b7754;
    *(int*)((char*)this + 0xe8) = 0x7b773c;
    return this;
}
