// from server: 100% by tester
// roc 2008-06 005871d0  unit: RBX::LocalScript  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005871d0
//
// 005871d0  8b442404             mov eax, dword ptr [esp + 4]
// 005871d4  56                   push esi
// 005871d5  50                   push eax
// 005871d6  8bf1                 mov esi, ecx
// 005871d8  e88347fdff           call 0x55b960
// 005871dd  c70684168300         mov dword ptr [esi], 0x831684
// 005871e3  c7461074168300       mov dword ptr [esi + 0x10], 0x831674
// 005871ea  c746146c168300       mov dword ptr [esi + 0x14], 0x83166c
// 005871f1  c7462064168300       mov dword ptr [esi + 0x20], 0x831664
// 005871f8  c7462454168300       mov dword ptr [esi + 0x24], 0x831654
// 005871ff  c7464444168300       mov dword ptr [esi + 0x44], 0x831644
// 00587206  c7466434168300       mov dword ptr [esi + 0x64], 0x831634
// 0058720d  c7868400000024168300 mov dword ptr [esi + 0x84], 0x831624
// 00587217  c786a400000014168300 mov dword ptr [esi + 0xa4], 0x831614
// 00587221  c786c400000004168300 mov dword ptr [esi + 0xc4], 0x831604
// 0058722b  8bc6                 mov eax, esi
// 0058722d  5e                   pop esi
// 0058722e  c20400               ret 4

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
