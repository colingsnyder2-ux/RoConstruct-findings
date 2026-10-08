// from server: 98% by colin
// roc 2007-08 004b8400  unit: RBX::Network::ClientPhysics  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8400
//
// 004b8400  83ec08               sub esp, 8
// 004b8403  56                   push esi
// 004b8404  8bf1                 mov esi, ecx
// 004b8406  e8257b0400           call 0x4fff30
// 004b840b  dd5c2404             fstp qword ptr [esp + 4]
// 004b840f  e84c0bfeff           call 0x498f60
// 004b8414  d980f0000000         fld dword ptr [eax + 0xf0]
// 004b841a  dc4608               fadd qword ptr [esi + 8]
// 004b841d  dc5c2404             fcomp qword ptr [esp + 4]
// 004b8421  dfe0                 fnstsw ax
// 004b8423  f6c405               test ah, 5
// 004b8426  7a07                 jp 0x4b842f
// 004b8428  8bce                 mov ecx, esi
// 004b842a  e8e1feffff           call 0x4b8310
// 004b842f  5e                   pop esi
// 004b8430  83c408               add esp, 8
// 004b8433  c20c00               ret 0xc

struct ClientPhysics {
    char pad[8];
    double field_8;
    void method_4b8310();
    void method_4b8400(int, int, int);
};

extern "C" double __fastcall func_004fff30(void*);
extern "C" void* __fastcall func_00498f60();

void ClientPhysics::method_4b8400(int a1, int a2, int a3)
{
    double d = func_004fff30(this);
    void* p = func_00498f60();
    float f = *(float*)((char*)p + 0xf0);
    if ((double)f + field_8 <= d) {
        method_4b8310();
    }
}
