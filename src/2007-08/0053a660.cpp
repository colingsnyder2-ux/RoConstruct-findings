// from server: 100% by colin
// roc 2007-08 0053a660  unit: RBX::VScriptContext::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053a660
//
// 0053a660  8b442404             mov eax, dword ptr [esp + 4]
// 0053a664  56                   push esi
// 0053a665  50                   push eax
// 0053a666  8bf1                 mov esi, ecx
// 0053a668  e873f9ffff           call 0x539fe0
// 0053a66d  c70604387900         mov dword ptr [esi], 0x793804
// 0053a673  c74604fc377900       mov dword ptr [esi + 4], 0x7937fc
// 0053a67a  c74610f4377900       mov dword ptr [esi + 0x10], 0x7937f4
// 0053a681  c74614e4377900       mov dword ptr [esi + 0x14], 0x7937e4
// 0053a688  c7462cd4377900       mov dword ptr [esi + 0x2c], 0x7937d4
// 0053a68f  c74644c4377900       mov dword ptr [esi + 0x44], 0x7937c4
// 0053a696  c7465cb4377900       mov dword ptr [esi + 0x5c], 0x7937b4
// 0053a69d  c74674a4377900       mov dword ptr [esi + 0x74], 0x7937a4
// 0053a6a4  c7868c00000094377900 mov dword ptr [esi + 0x8c], 0x793794
// 0053a6ae  8bc6                 mov eax, esi
// 0053a6b0  5e                   pop esi
// 0053a6b1  c20400               ret 4

struct BaseClass {
    void construct(int);
};

struct FactoryProduct : BaseClass {
    FactoryProduct(int);
};

FactoryProduct::FactoryProduct(int arg)
{
    BaseClass::construct(arg);
    *(int*)((char*)this + 0x00) = 0x793804;
    *(int*)((char*)this + 0x04) = 0x7937fc;
    *(int*)((char*)this + 0x10) = 0x7937f4;
    *(int*)((char*)this + 0x14) = 0x7937e4;
    *(int*)((char*)this + 0x2c) = 0x7937d4;
    *(int*)((char*)this + 0x44) = 0x7937c4;
    *(int*)((char*)this + 0x5c) = 0x7937b4;
    *(int*)((char*)this + 0x74) = 0x7937a4;
    *(int*)((char*)this + 0x8c) = 0x793794;
}
