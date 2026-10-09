// from server: 98% by colin
// roc 2007-08 005b1e90  unit: RBX::VRotateP::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1e90
//
// 005b1e90  8b442404             mov eax, dword ptr [esp + 4]
// 005b1e94  56                   push esi
// 005b1e95  50                   push eax
// 005b1e96  8bf1                 mov esi, ecx
// 005b1e98  e883fbffff           call 0x5b1a20
// 005b1e9d  c706f4767b00         mov dword ptr [esi], 0x7b76f4
// 005b1ea3  c74604ec767b00       mov dword ptr [esi + 4], 0x7b76ec
// 005b1eaa  c74610e4767b00       mov dword ptr [esi + 0x10], 0x7b76e4
// 005b1eb1  c74614d4767b00       mov dword ptr [esi + 0x14], 0x7b76d4
// 005b1eb8  c7462cc4767b00       mov dword ptr [esi + 0x2c], 0x7b76c4
// 005b1ebf  c74644b4767b00       mov dword ptr [esi + 0x44], 0x7b76b4
// 005b1ec6  c7465ca4767b00       mov dword ptr [esi + 0x5c], 0x7b76a4
// 005b1ecd  c7467494767b00       mov dword ptr [esi + 0x74], 0x7b7694
// 005b1ed4  c7868c00000084767b00 mov dword ptr [esi + 0x8c], 0x7b7684
// 005b1ede  c786e80000006c767b00 mov dword ptr [esi + 0xe8], 0x7b766c
// 005b1ee8  8bc6                 mov eax, esi
// 005b1eea  5e                   pop esi
// 005b1eeb  c20400               ret 4

struct RBX_VRotateP_FactoryProduct {
    void construct(int);
    char pad[0x100];
};

extern "C" void __stdcall func_005b1a20(int);

void RBX_VRotateP_FactoryProduct::construct(int arg)
{
    func_005b1a20(arg);
    *(int*)((char*)this + 0x00) = 0x7b76f4;
    *(int*)((char*)this + 0x04) = 0x7b76ec;
    *(int*)((char*)this + 0x10) = 0x7b76e4;
    *(int*)((char*)this + 0x14) = 0x7b76d4;
    *(int*)((char*)this + 0x2c) = 0x7b76c4;
    *(int*)((char*)this + 0x44) = 0x7b76b4;
    *(int*)((char*)this + 0x5c) = 0x7b76a4;
    *(int*)((char*)this + 0x74) = 0x7b7694;
    *(int*)((char*)this + 0x8c) = 0x7b7684;
    *(int*)((char*)this + 0xe8) = 0x7b766c;
}
