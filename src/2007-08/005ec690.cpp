// from server: 100% by colin
// roc 2007-08 005ec690  unit: RBX::VBodyGyro::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec690
//
// 005ec690  c70144e87b00         mov dword ptr [ecx], 0x7be844
// 005ec696  c741043ce87b00       mov dword ptr [ecx + 4], 0x7be83c
// 005ec69d  c7411034e87b00       mov dword ptr [ecx + 0x10], 0x7be834
// 005ec6a4  c7411424e87b00       mov dword ptr [ecx + 0x14], 0x7be824
// 005ec6ab  c7412c14e87b00       mov dword ptr [ecx + 0x2c], 0x7be814
// 005ec6b2  c7414404e87b00       mov dword ptr [ecx + 0x44], 0x7be804
// 005ec6b9  c7415cf4e77b00       mov dword ptr [ecx + 0x5c], 0x7be7f4
// 005ec6c0  c74174e4e77b00       mov dword ptr [ecx + 0x74], 0x7be7e4
// 005ec6c7  c7818c000000d4e77b00 mov dword ptr [ecx + 0x8c], 0x7be7d4
// 005ec6d1  c781e8000000bce77b00 mov dword ptr [ecx + 0xe8], 0x7be7bc
// 005ec6db  c781f0000000b0e77b00 mov dword ptr [ecx + 0xf0], 0x7be7b0
// 005ec6e5  e966efffff           jmp 0x5eb650

struct S_005ec690 {
    char pad[0x100];
    void ctor();
};

void S_005ec690::ctor()
{
    *(int*)((char*)this + 0x00) = 0x7be844;
    *(int*)((char*)this + 0x04) = 0x7be83c;
    *(int*)((char*)this + 0x10) = 0x7be834;
    *(int*)((char*)this + 0x14) = 0x7be824;
    *(int*)((char*)this + 0x2c) = 0x7be814;
    *(int*)((char*)this + 0x44) = 0x7be804;
    *(int*)((char*)this + 0x5c) = 0x7be7f4;
    *(int*)((char*)this + 0x74) = 0x7be7e4;
    *(int*)((char*)this + 0x8c) = 0x7be7d4;
    *(int*)((char*)this + 0xe8) = 0x7be7bc;
    *(int*)((char*)this + 0xf0) = 0x7be7b0;
    extern void __stdcall sub_005eb650();
    sub_005eb650();
}
