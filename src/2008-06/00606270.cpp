// from server: 73% by tester
// roc 2008-06 00606270  unit: RBX::ContactConnector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606270
//
// 00606270  83ec20               sub esp, 0x20
// 00606273  833904               cmp dword ptr [ecx], 4
// 00606276  7542                 jne 0x6062ba
// 00606278  d9ee                 fldz 
// 0060627a  8d0424               lea eax, [esp]
// 0060627d  d91424               fst dword ptr [esp]
// 00606280  50                   push eax
// 00606281  d9542408             fst dword ptr [esp + 8]
// 00606285  d954240c             fst dword ptr [esp + 0xc]
// 00606289  d9542414             fst dword ptr [esp + 0x14]
// 0060628d  d9542418             fst dword ptr [esp + 0x18]
// 00606291  d95c241c             fstp dword ptr [esp + 0x1c]
// 00606295  e8c6d20000           call 0x613560
// 0060629a  d90588748200         fld dword ptr [0x827488]
// 006062a0  d85c240c             fcomp dword ptr [esp + 0xc]
// 006062a4  dfe0                 fnstsw ax
// 006062a6  f6c441               test ah, 0x41
// 006062a9  7509                 jne 0x6062b4
// 006062ab  b801000000           mov eax, 1
// 006062b0  83c420               add esp, 0x20
// 006062b3  c3                   ret 
// 006062b4  33c0                 xor eax, eax
// 006062b6  83c420               add esp, 0x20
// 006062b9  c3                   ret 
// 006062ba  b001                 mov al, 1
// 006062bc  83c420               add esp, 0x20
// 006062bf  c3                   ret 

struct ContactConnector {
    int type;
    bool isInContact();
};

extern "C" void __cdecl computeContactPoint(float* out);

bool ContactConnector::isInContact()
{
    if (type != 4)
        return true;

    float buf[6];
    buf[0] = 0.0f;
    buf[1] = 0.0f;
    buf[2] = 0.0f;
    buf[3] = 0.0f;
    buf[4] = 0.0f;
    buf[5] = 0.0f;

    computeContactPoint(buf);

    float threshold = *(float*)0x827488;
    if (threshold > buf[3])
        return false;
    return true;
}
