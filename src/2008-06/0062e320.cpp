// from server: 100% by king_originala
// roc 2008-06 0062e320  unit: RBX::VDecal::?$FactoryProduct  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e320
//
// 0062e320  8b442404             mov eax, dword ptr [esp + 4]
// 0062e324  56                   push esi
// 0062e325  50                   push eax
// 0062e326  8bf1                 mov esi, ecx
// 0062e328  e833d6f2ff           call 0x55b960
// 0062e32d  c78634010000ffffffff mov dword ptr [esi + 0x134], 0xffffffff
// 0062e337  c78630010000f4d18300 mov dword ptr [esi + 0x130], 0x83d1f4
// 0062e341  33c0                 xor eax, eax
// 0062e343  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0062e349  c706ec6b8400         mov dword ptr [esi], 0x846bec
// 0062e34f  c74610e06b8400       mov dword ptr [esi + 0x10], 0x846be0
// 0062e356  c74614d86b8400       mov dword ptr [esi + 0x14], 0x846bd8
// 0062e35d  c74620d06b8400       mov dword ptr [esi + 0x20], 0x846bd0
// 0062e364  c74624c06b8400       mov dword ptr [esi + 0x24], 0x846bc0
// 0062e36b  c74644b06b8400       mov dword ptr [esi + 0x44], 0x846bb0
// 0062e372  c74664a06b8400       mov dword ptr [esi + 0x64], 0x846ba0
// 0062e379  c78684000000906b8400 mov dword ptr [esi + 0x84], 0x846b90
// 0062e383  c786a4000000806b8400 mov dword ptr [esi + 0xa4], 0x846b80
// 0062e38d  c786c4000000706b8400 mov dword ptr [esi + 0xc4], 0x846b70
// 0062e397  c78630010000546b8400 mov dword ptr [esi + 0x130], 0x846b54
// 0062e3a1  c78638010000486b8400 mov dword ptr [esi + 0x138], 0x846b48
// 0062e3ab  898640010000         mov dword ptr [esi + 0x140], eax
// 0062e3b1  898644010000         mov dword ptr [esi + 0x144], eax
// 0062e3b7  8bc6                 mov eax, esi
// 0062e3b9  5e                   pop esi
// 0062e3ba  c20400               ret 4

struct S {
    volatile unsigned int data[82];

    void initialize(int argument);
    S* construct(int argument);
};

S* S::construct(int argument)
{
    initialize(argument);
    data[0x134 / 4] = 0xffffffff;
    data[0x130 / 4] = 0x0083d1f4;
    data[0x13c / 4] = 0;
    data[0x000 / 4] = 0x00846bec;
    data[0x010 / 4] = 0x00846be0;
    data[0x014 / 4] = 0x00846bd8;
    data[0x020 / 4] = 0x00846bd0;
    data[0x024 / 4] = 0x00846bc0;
    data[0x044 / 4] = 0x00846bb0;
    data[0x064 / 4] = 0x00846ba0;
    data[0x084 / 4] = 0x00846b90;
    data[0x0a4 / 4] = 0x00846b80;
    data[0x0c4 / 4] = 0x00846b70;
    data[0x130 / 4] = 0x00846b54;
    data[0x138 / 4] = 0x00846b48;
    data[0x140 / 4] = 0;
    data[0x144 / 4] = 0;
    return this;
}
