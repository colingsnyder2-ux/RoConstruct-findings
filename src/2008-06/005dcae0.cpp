// from server: 100% by king_originala
// roc 2008-06 005dcae0  unit: RBX::VHumanoid::?$SignalDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcae0
//
// 005dcae0  8b442404             mov eax, dword ptr [esp + 4]
// 005dcae4  56                   push esi
// 005dcae5  50                   push eax
// 005dcae6  8bf1                 mov esi, ecx
// 005dcae8  e873eef7ff           call 0x55b960
// 005dcaed  c70664378200         mov dword ptr [esi], 0x823764
// 005dcaf3  c7461054378200       mov dword ptr [esi + 0x10], 0x823754
// 005dcafa  c746144c378200       mov dword ptr [esi + 0x14], 0x82374c
// 005dcb01  c7462044378200       mov dword ptr [esi + 0x20], 0x823744
// 005dcb08  c7462434378200       mov dword ptr [esi + 0x24], 0x823734
// 005dcb0f  c7464424378200       mov dword ptr [esi + 0x44], 0x823724
// 005dcb16  c7466414378200       mov dword ptr [esi + 0x64], 0x823714
// 005dcb1d  c7868400000004378200 mov dword ptr [esi + 0x84], 0x823704
// 005dcb27  c786a4000000f4368200 mov dword ptr [esi + 0xa4], 0x8236f4
// 005dcb31  c786c4000000e4368200 mov dword ptr [esi + 0xc4], 0x8236e4
// 005dcb3b  8bc6                 mov eax, esi
// 005dcb3d  5e                   pop esi
// 005dcb3e  c20400               ret 4

struct S {
    unsigned long data[50];

    void initialize(int arg);
    S* construct(int arg);
};

S* S::construct(int arg)
{
    initialize(arg);
    data[0]  = 0x00823764;
    data[4]  = 0x00823754;
    data[5]  = 0x0082374C;
    data[8]  = 0x00823744;
    data[9]  = 0x00823734;
    data[17] = 0x00823724;
    data[25] = 0x00823714;
    data[33] = 0x00823704;
    data[41] = 0x008236F4;
    data[49] = 0x008236E4;
    return this;
}
