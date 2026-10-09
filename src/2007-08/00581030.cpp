// from server: 55% by colin
// roc 2007-08 00581030  unit: RBX::VAccoutrement::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581030
//
// 00581030  83ec34               sub esp, 0x34
// 00581033  56                   push esi
// 00581034  57                   push edi
// 00581035  81c184feffff         add ecx, 0xfffffe84
// 0058103b  c744240800000000     mov dword ptr [esp + 8], 0
// 00581043  e8980a0500           call 0x5d1ae0
// 00581048  85c0                 test eax, eax
// 0058104a  7409                 je 0x581055
// 0058104c  8bc8                 mov ecx, eax
// 0058104e  e82d2fffff           call 0x573f80
// 00581053  eb09                 jmp 0x58105e
// 00581055  8d4c240c             lea ecx, [esp + 0xc]
// 00581059  e8f23fefff           call 0x475050
// 0058105e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00581062  8bf0                 mov esi, eax
// 00581064  56                   push esi
// 00581065  8bcf                 mov ecx, edi
// 00581067  e86485f8ff           call 0x5095d0
// 0058106c  d94624               fld dword ptr [esi + 0x24]
// 0058106f  d95f24               fstp dword ptr [edi + 0x24]
// 00581072  8bc7                 mov eax, edi
// 00581074  d94628               fld dword ptr [esi + 0x28]
// 00581077  d95f28               fstp dword ptr [edi + 0x28]
// 0058107a  d9462c               fld dword ptr [esi + 0x2c]
// 0058107d  d95f2c               fstp dword ptr [edi + 0x2c]
// 00581080  5f                   pop edi
// 00581081  5e                   pop esi
// 00581082  83c434               add esp, 0x34
// 00581085  c20400               ret 4

struct RBX_Accoutrement {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

struct RBX_Accoutrement_FactoryProduct {
    RBX_Accoutrement* construct(RBX_Accoutrement* dst);
};

extern "C" void* __stdcall sub_5d1ae0(void*);
extern "C" void sub_573f80();
extern "C" void sub_475050();
extern "C" void sub_5095d0();

RBX_Accoutrement* RBX_Accoutrement_FactoryProduct::construct(RBX_Accoutrement* dst)
{
    char buf[0x34];
    *(int*)(buf + 8) = 0;
    void* p = sub_5d1ae0((char*)this - 0x17c);
    RBX_Accoutrement* src;
    if (p) {
        sub_573f80();
        src = (RBX_Accoutrement*)p;
    } else {
        sub_475050();
        src = (RBX_Accoutrement*)buf;
    }
    sub_5095d0();
    dst->f24 = src->f24;
    dst->f28 = src->f28;
    dst->f2c = src->f2c;
    return dst;
}
