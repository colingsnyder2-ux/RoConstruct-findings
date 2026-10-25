// from server: 58% by atomic.potato
// roc 2011-06 006e0f10  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e0f10
//
// 006e0f10  8b442408             mov eax, dword ptr [esp + 8]
// 006e0f14  56                   push esi
// 006e0f15  50                   push eax
// 006e0f16  8bf1                 mov esi, ecx
// 006e0f18  e8339ad2ff           call 0x40a950
// 006e0f1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e0f21  c70648dea800         mov dword ptr [esi], 0xa8de48
// 006e0f27  894e28               mov dword ptr [esi + 0x28], ecx
// 006e0f2a  8bc6                 mov eax, esi
// 006e0f2c  5e                   pop esi
// 006e0f2d  c20800               ret 8

extern "C" void __cdecl sub_40A950(int);

struct S
{
    int value;
    char padding[36];
    int status;
    int f(int, int);
};

int S::f(int, int statusCode)
{
    sub_40A950(statusCode);
    value = 0xA8DE48;
    status = statusCode;
    return (int)this;
}
