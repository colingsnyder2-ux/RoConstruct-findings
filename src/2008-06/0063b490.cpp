// from server: 100% by tester
// roc 2008-06 0063b490  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b490
//
// 0063b490  8b442404             mov eax, dword ptr [esp + 4]
// 0063b494  56                   push esi
// 0063b495  50                   push eax
// 0063b496  8bf1                 mov esi, ecx
// 0063b498  e8c304f2ff           call 0x55b960
// 0063b49d  c7061c998400         mov dword ptr [esi], 0x84991c
// 0063b4a3  c746100c998400       mov dword ptr [esi + 0x10], 0x84990c
// 0063b4aa  c7461404998400       mov dword ptr [esi + 0x14], 0x849904
// 0063b4b1  c74620fc988400       mov dword ptr [esi + 0x20], 0x8498fc
// 0063b4b8  c74624ec988400       mov dword ptr [esi + 0x24], 0x8498ec
// 0063b4bf  c74644dc988400       mov dword ptr [esi + 0x44], 0x8498dc
// 0063b4c6  c74664cc988400       mov dword ptr [esi + 0x64], 0x8498cc
// 0063b4cd  c78684000000bc988400 mov dword ptr [esi + 0x84], 0x8498bc
// 0063b4d7  c786a4000000ac988400 mov dword ptr [esi + 0xa4], 0x8498ac
// 0063b4e1  c786c40000009c988400 mov dword ptr [esi + 0xc4], 0x84989c
// 0063b4eb  8bc6                 mov eax, esi
// 0063b4ed  5e                   pop esi
// 0063b4ee  c20400               ret 4

struct S_func_0063b490 {
    char pad0[0x10];
    char pad10[0x10];
    char pad20[0x24];
    char pad44[0x20];
    char pad64[0x20];
    char pad84[0x20];
    char pada4[0x20];
    char padc4[0x4];
    S_func_0063b490* f(void* arg);
};

extern "C" void __stdcall sub_0055b960(void* arg);

S_func_0063b490* S_func_0063b490::f(void* arg)
{
    sub_0055b960(arg);
    *(int*)((char*)this + 0x00) = 0x84991c;
    *(int*)((char*)this + 0x10) = 0x84990c;
    *(int*)((char*)this + 0x14) = 0x849904;
    *(int*)((char*)this + 0x20) = 0x8498fc;
    *(int*)((char*)this + 0x24) = 0x8498ec;
    *(int*)((char*)this + 0x44) = 0x8498dc;
    *(int*)((char*)this + 0x64) = 0x8498cc;
    *(int*)((char*)this + 0x84) = 0x8498bc;
    *(int*)((char*)this + 0xa4) = 0x8498ac;
    *(int*)((char*)this + 0xc4) = 0x84989c;
    return this;
}
