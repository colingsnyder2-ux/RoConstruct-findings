// from server: 100% by colin
// roc 2007-08 005b1be0  unit: RBX::VSnap::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1be0
//
// 005b1be0  8b442404             mov eax, dword ptr [esp + 4]
// 005b1be4  56                   push esi
// 005b1be5  50                   push eax
// 005b1be6  8bf1                 mov esi, ecx
// 005b1be8  e8b3faffff           call 0x5b16a0
// 005b1bed  c706e4727b00         mov dword ptr [esi], 0x7b72e4
// 005b1bf3  c74604dc727b00       mov dword ptr [esi + 4], 0x7b72dc
// 005b1bfa  c74610d4727b00       mov dword ptr [esi + 0x10], 0x7b72d4
// 005b1c01  c74614c4727b00       mov dword ptr [esi + 0x14], 0x7b72c4
// 005b1c08  c7462cb4727b00       mov dword ptr [esi + 0x2c], 0x7b72b4
// 005b1c0f  c74644a4727b00       mov dword ptr [esi + 0x44], 0x7b72a4
// 005b1c16  c7465c94727b00       mov dword ptr [esi + 0x5c], 0x7b7294
// 005b1c1d  c7467484727b00       mov dword ptr [esi + 0x74], 0x7b7284
// 005b1c24  c7868c00000074727b00 mov dword ptr [esi + 0x8c], 0x7b7274
// 005b1c2e  c786e80000005c727b00 mov dword ptr [esi + 0xe8], 0x7b725c
// 005b1c38  8bc6                 mov eax, esi
// 005b1c3a  5e                   pop esi
// 005b1c3b  c20400               ret 4

struct Base {
    void construct(int);
};

struct S : Base {
    S* S_ctor(int);
};

S* S::S_ctor(int arg)
{
    construct(arg);
    *(int*)((char*)this + 0x00) = 0x7b72e4;
    *(int*)((char*)this + 0x04) = 0x7b72dc;
    *(int*)((char*)this + 0x10) = 0x7b72d4;
    *(int*)((char*)this + 0x14) = 0x7b72c4;
    *(int*)((char*)this + 0x2c) = 0x7b72b4;
    *(int*)((char*)this + 0x44) = 0x7b72a4;
    *(int*)((char*)this + 0x5c) = 0x7b7294;
    *(int*)((char*)this + 0x74) = 0x7b7284;
    *(int*)((char*)this + 0x8c) = 0x7b7274;
    *(int*)((char*)this + 0xe8) = 0x7b725c;
    return this;
}
