// from server: 65% by atomic.potato
// roc 2011-06 007ec2d0  unit: RBX::HUMAN::Dead  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec2d0
//
// 007ec2d0  8b442408             mov eax, dword ptr [esp + 8]
// 007ec2d4  56                   push esi
// 007ec2d5  8bf1                 mov esi, ecx
// 007ec2d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ec2db  50                   push eax
// 007ec2dc  51                   push ecx
// 007ec2dd  8bce                 mov ecx, esi
// 007ec2df  e87cfffaff           call 0x79c260
// 007ec2e4  f30f1005746ea700     movss xmm0, dword ptr [0xa76e74]
// 007ec2ec  c706c8edab00         mov dword ptr [esi], 0xabedc8
// 007ec2f2  c74604bcedab00       mov dword ptr [esi + 4], 0xabedbc
// 007ec2f9  f30f11460c           movss dword ptr [esi + 0xc], xmm0
// 007ec2fe  8bc6                 mov eax, esi
// 007ec300  5e                   pop esi
// 007ec301  c20800               ret 8

extern "C" void __stdcall sub_0079c260(int, int);

struct RBX_HUMAN_Dead {
    void* construct(int, int);
};

void* RBX_HUMAN_Dead::construct(int a, int b)
{
    sub_0079c260(a, b);
    *(int*)this = 0xabedc8;
    *(int*)((char*)this + 4) = 0xabedbc;
    *(float*)((char*)this + 0xc) = *(float*)0xa76e74;

    return this;
}
