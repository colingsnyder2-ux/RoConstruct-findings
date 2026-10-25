// from server: 100% by colin
// roc 2008-06 005fceb0  unit: RBX::LocalBackpackItem  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fceb0
//
// 005fceb0  56                   push esi
// 005fceb1  8bf1                 mov esi, ecx
// 005fceb3  e808fdffff           call 0x5fcbc0
// 005fceb8  33c0                 xor eax, eax
// 005fceba  c70664138400         mov dword ptr [esi], 0x841364
// 005fcec0  c7461054138400       mov dword ptr [esi + 0x10], 0x841354
// 005fcec7  c746144c138400       mov dword ptr [esi + 0x14], 0x84134c
// 005fcece  c7462044138400       mov dword ptr [esi + 0x20], 0x841344
// 005fced5  c7462434138400       mov dword ptr [esi + 0x24], 0x841334
// 005fcedc  c7464424138400       mov dword ptr [esi + 0x44], 0x841324
// 005fcee3  c7466414138400       mov dword ptr [esi + 0x64], 0x841314
// 005fceea  c7868400000004138400 mov dword ptr [esi + 0x84], 0x841304
// 005fcef4  c786a4000000f4128400 mov dword ptr [esi + 0xa4], 0x8412f4
// 005fcefe  c786c4000000e4128400 mov dword ptr [esi + 0xc4], 0x8412e4
// 005fcf08  c78630010000dc128400 mov dword ptr [esi + 0x130], 0x8412dc
// 005fcf12  c78668010000d0128400 mov dword ptr [esi + 0x168], 0x8412d0
// 005fcf1c  c7866c010000c4128400 mov dword ptr [esi + 0x16c], 0x8412c4
// 005fcf26  c78670010000b8128400 mov dword ptr [esi + 0x170], 0x8412b8
// 005fcf30  c78674010000ac128400 mov dword ptr [esi + 0x174], 0x8412ac
// 005fcf3a  c78678010000a0128400 mov dword ptr [esi + 0x178], 0x8412a0
// 005fcf44  c7867c01000094128400 mov dword ptr [esi + 0x17c], 0x841294
// 005fcf4e  898680010000         mov dword ptr [esi + 0x180], eax
// 005fcf54  898684010000         mov dword ptr [esi + 0x184], eax
// 005fcf5a  898688010000         mov dword ptr [esi + 0x188], eax
// 005fcf60  89868c010000         mov dword ptr [esi + 0x18c], eax
// 005fcf66  898690010000         mov dword ptr [esi + 0x190], eax
// 005fcf6c  898694010000         mov dword ptr [esi + 0x194], eax
// 005fcf72  898698010000         mov dword ptr [esi + 0x198], eax
// 005fcf78  89869c010000         mov dword ptr [esi + 0x19c], eax
// 005fcf7e  8986a0010000         mov dword ptr [esi + 0x1a0], eax
// 005fcf84  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 005fcf8a  c786a8010000ffffffff mov dword ptr [esi + 0x1a8], 0xffffffff
// 005fcf94  c7866001000001000000 mov dword ptr [esi + 0x160], 1
// 005fcf9e  8bc6                 mov eax, esi
// 005fcfa0  5e                   pop esi
// 005fcfa1  c3                   ret 

struct LocalBackpackItem
{
    LocalBackpackItem* construct();
};

extern "C" void __fastcall sub_005fcbc0(LocalBackpackItem* self);

LocalBackpackItem* LocalBackpackItem::construct()
{
    sub_005fcbc0(this);
    *(int*)((char*)this + 0x00) = 0x841364;
    *(int*)((char*)this + 0x10) = 0x841354;
    *(int*)((char*)this + 0x14) = 0x84134c;
    *(int*)((char*)this + 0x20) = 0x841344;
    *(int*)((char*)this + 0x24) = 0x841334;
    *(int*)((char*)this + 0x44) = 0x841324;
    *(int*)((char*)this + 0x64) = 0x841314;
    *(int*)((char*)this + 0x84) = 0x841304;
    *(int*)((char*)this + 0xa4) = 0x8412f4;
    *(int*)((char*)this + 0xc4) = 0x8412e4;
    *(int*)((char*)this + 0x130) = 0x8412dc;
    *(int*)((char*)this + 0x168) = 0x8412d0;
    *(int*)((char*)this + 0x16c) = 0x8412c4;
    *(int*)((char*)this + 0x170) = 0x8412b8;
    *(int*)((char*)this + 0x174) = 0x8412ac;
    *(int*)((char*)this + 0x178) = 0x8412a0;
    *(int*)((char*)this + 0x17c) = 0x841294;
    *(volatile int*)((char*)this + 0x180) = 0;
    *(int*)((char*)this + 0x184) = 0;
    *(int*)((char*)this + 0x188) = 0;
    *(int*)((char*)this + 0x18c) = 0;
    *(int*)((char*)this + 0x190) = 0;
    *(int*)((char*)this + 0x194) = 0;
    *(int*)((char*)this + 0x198) = 0;
    *(int*)((char*)this + 0x19c) = 0;
    *(int*)((char*)this + 0x1a0) = 0;
    *(int*)((char*)this + 0x1a4) = 0;
    *(int*)((char*)this + 0x1a8) = -1;
    *(int*)((char*)this + 0x160) = 1;
    return this;
}
