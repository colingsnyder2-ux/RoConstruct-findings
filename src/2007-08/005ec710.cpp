// from server: 100% by colin
// roc 2007-08 005ec710  unit: RBX::VBodyForce::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec710
//
// 005ec710  c70124e97b00         mov dword ptr [ecx], 0x7be924
// 005ec716  c741041ce97b00       mov dword ptr [ecx + 4], 0x7be91c
// 005ec71d  c7411014e97b00       mov dword ptr [ecx + 0x10], 0x7be914
// 005ec724  c7411404e97b00       mov dword ptr [ecx + 0x14], 0x7be904
// 005ec72b  c7412cf4e87b00       mov dword ptr [ecx + 0x2c], 0x7be8f4
// 005ec732  c74144e4e87b00       mov dword ptr [ecx + 0x44], 0x7be8e4
// 005ec739  c7415cd4e87b00       mov dword ptr [ecx + 0x5c], 0x7be8d4
// 005ec740  c74174c4e87b00       mov dword ptr [ecx + 0x74], 0x7be8c4
// 005ec747  c7818c000000b4e87b00 mov dword ptr [ecx + 0x8c], 0x7be8b4
// 005ec751  c781e80000009ce87b00 mov dword ptr [ecx + 0xe8], 0x7be89c
// 005ec75b  c781f000000090e87b00 mov dword ptr [ecx + 0xf0], 0x7be890
// 005ec765  e9e6eeffff           jmp 0x5eb650

struct RBX_VBodyForce_FactoryProduct {
    void construct();
};

extern "C" void __stdcall sub_5eb650();

void RBX_VBodyForce_FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7be924;
    *(int*)((char*)this + 0x04) = 0x7be91c;
    *(int*)((char*)this + 0x10) = 0x7be914;
    *(int*)((char*)this + 0x14) = 0x7be904;
    *(int*)((char*)this + 0x2c) = 0x7be8f4;
    *(int*)((char*)this + 0x44) = 0x7be8e4;
    *(int*)((char*)this + 0x5c) = 0x7be8d4;
    *(int*)((char*)this + 0x74) = 0x7be8c4;
    *(int*)((char*)this + 0x8c) = 0x7be8b4;
    *(int*)((char*)this + 0xe8) = 0x7be89c;
    *(int*)((char*)this + 0xf0) = 0x7be890;
    sub_5eb650();
}
