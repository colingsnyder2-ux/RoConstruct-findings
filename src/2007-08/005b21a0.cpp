// from server: 100% by colin
// roc 2007-08 005b21a0  unit: RBX::VSnap::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b21a0
//
// 005b21a0  8b442404             mov eax, dword ptr [esp + 4]
// 005b21a4  56                   push esi
// 005b21a5  50                   push eax
// 005b21a6  8bf1                 mov esi, ecx
// 005b21a8  e8e3faffff           call 0x5b1c90
// 005b21ad  c7066c797b00         mov dword ptr [esi], 0x7b796c
// 005b21b3  c7460464797b00       mov dword ptr [esi + 4], 0x7b7964
// 005b21ba  c746105c797b00       mov dword ptr [esi + 0x10], 0x7b795c
// 005b21c1  c746144c797b00       mov dword ptr [esi + 0x14], 0x7b794c
// 005b21c8  c7462c3c797b00       mov dword ptr [esi + 0x2c], 0x7b793c
// 005b21cf  c746442c797b00       mov dword ptr [esi + 0x44], 0x7b792c
// 005b21d6  c7465c1c797b00       mov dword ptr [esi + 0x5c], 0x7b791c
// 005b21dd  c746740c797b00       mov dword ptr [esi + 0x74], 0x7b790c
// 005b21e4  c7868c000000fc787b00 mov dword ptr [esi + 0x8c], 0x7b78fc
// 005b21ee  c786e8000000e4787b00 mov dword ptr [esi + 0xe8], 0x7b78e4
// 005b21f8  8bc6                 mov eax, esi
// 005b21fa  5e                   pop esi
// 005b21fb  c20400               ret 4

struct Base {
    void construct(int);
};

struct S : Base {
    S* S_ctor(int);
};

S* S::S_ctor(int arg)
{
    Base::construct(arg);
    *(int*)((char*)this + 0x00) = 0x7b796c;
    *(int*)((char*)this + 0x04) = 0x7b7964;
    *(int*)((char*)this + 0x10) = 0x7b795c;
    *(int*)((char*)this + 0x14) = 0x7b794c;
    *(int*)((char*)this + 0x2c) = 0x7b793c;
    *(int*)((char*)this + 0x44) = 0x7b792c;
    *(int*)((char*)this + 0x5c) = 0x7b791c;
    *(int*)((char*)this + 0x74) = 0x7b790c;
    *(int*)((char*)this + 0x8c) = 0x7b78fc;
    *(int*)((char*)this + 0xe8) = 0x7b78e4;
    return this;
}
