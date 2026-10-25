// from server: 100% by colin
// roc 2008-06 00583730  unit: RBX::ModelInstance  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583730
//
// 00583730  837c240800           cmp dword ptr [esp + 8], 0
// 00583735  56                   push esi
// 00583736  8bf1                 mov esi, ecx
// 00583738  740a                 je 0x583744
// 0058373a  c78634010000ac0f8300 mov dword ptr [esi + 0x134], 0x830fac
// 00583744  8b442408             mov eax, dword ptr [esp + 8]
// 00583748  6a00                 push 0
// 0058374a  50                   push eax
// 0058374b  e880610800           call 0x6098d0
// 00583750  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 00583756  c7062c0c8300         mov dword ptr [esi], 0x830c2c
// 0058375c  c746101c0c8300       mov dword ptr [esi + 0x10], 0x830c1c
// 00583763  c74614140c8300       mov dword ptr [esi + 0x14], 0x830c14
// 0058376a  c746200c0c8300       mov dword ptr [esi + 0x20], 0x830c0c
// 00583771  c74624fc0b8300       mov dword ptr [esi + 0x24], 0x830bfc
// 00583778  c74644ec0b8300       mov dword ptr [esi + 0x44], 0x830bec
// 0058377f  c74664dc0b8300       mov dword ptr [esi + 0x64], 0x830bdc
// 00583786  c78684000000cc0b8300 mov dword ptr [esi + 0x84], 0x830bcc
// 00583790  c786a4000000bc0b8300 mov dword ptr [esi + 0xa4], 0x830bbc
// 0058379a  c786c4000000ac0b8300 mov dword ptr [esi + 0xc4], 0x830bac
// 005837a4  c78630010000a00b8300 mov dword ptr [esi + 0x130], 0x830ba0
// 005837ae  8b5104               mov edx, dword ptr [ecx + 4]
// 005837b1  c7843234010000940b8300 mov dword ptr [edx + esi + 0x134], 0x830b94
// 005837bc  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005837c2  8b4808               mov ecx, dword ptr [eax + 8]
// 005837c5  c78431340100008c0b8300 mov dword ptr [ecx + esi + 0x134], 0x830b8c
// 005837d0  8bc6                 mov eax, esi
// 005837d2  5e                   pop esi
// 005837d3  c20800               ret 8

struct RBX_ModelInstance {
    char pad[0x134];
    int field_134;
    int method(int, int);
};

extern "C" int __stdcall sub_6098d0(int, int);

int RBX_ModelInstance::method(int a, int b) {
    if (b != 0) {
        field_134 = 0x830fac;
    }
    sub_6098d0(a, 0);
    int v = field_134;
    *(int*)((char*)this + 0x00) = 0x830c2c;
    *(int*)((char*)this + 0x10) = 0x830c1c;
    *(int*)((char*)this + 0x14) = 0x830c14;
    *(int*)((char*)this + 0x20) = 0x830c0c;
    *(int*)((char*)this + 0x24) = 0x830bfc;
    *(int*)((char*)this + 0x44) = 0x830bec;
    *(int*)((char*)this + 0x64) = 0x830bdc;
    *(int*)((char*)this + 0x84) = 0x830bcc;
    *(int*)((char*)this + 0xa4) = 0x830bbc;
    *(int*)((char*)this + 0xc4) = 0x830bac;
    *(int*)((char*)this + 0x130) = 0x830ba0;
    int* p = *(int**)(v + 4);
    *(int*)((char*)p + (int)this + 0x134) = 0x830b94;
    int* q = *(int**)(field_134 + 8);
    *(int*)((char*)q + (int)this + 0x134) = 0x830b8c;
    return (int)this;
}
