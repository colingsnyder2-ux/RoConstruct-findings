// from server: 100% by tester
// roc 2007-03 00402910  unit: seg_00400000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402910
//
// 00402910  56                   push esi
// 00402911  8bf1                 mov esi, ecx
// 00402913  c7064c3b7800         mov dword ptr [esi], 0x783b4c
// 00402919  c74604343b7800       mov dword ptr [esi + 4], 0x783b34
// 00402920  c746081c3b7800       mov dword ptr [esi + 8], 0x783b1c
// 00402927  c7460cf83a7800       mov dword ptr [esi + 0xc], 0x783af8
// 0040292e  c74618e03a7800       mov dword ptr [esi + 0x18], 0x783ae0
// 00402935  c74620c43a7800       mov dword ptr [esi + 0x20], 0x783ac4
// 0040293c  c74628b83a7800       mov dword ptr [esi + 0x28], 0x783ab8
// 00402943  c7462cac3a7800       mov dword ptr [esi + 0x2c], 0x783aac
// 0040294a  c74630010000c0       mov dword ptr [esi + 0x30], 0xc0000001
// 00402951  e8aa520600           call 0x467c00
// 00402956  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 0040295c  8b01                 mov eax, dword ptr [ecx]
// 0040295e  8b5008               mov edx, dword ptr [eax + 8]
// 00402961  ffd2                 call edx
// 00402963  8bce                 mov ecx, esi
// 00402965  5e                   pop esi
// 00402966  e9353f0600           jmp 0x4668a0

struct Seg_00400000 {
    void construct();
};

extern "C" void __fastcall sub_467c00(void*);
extern "C" void __fastcall sub_4668a0(void*);

struct GlobalThing {
    void* vtbl;
};

extern GlobalThing* g_8b535c;

void Seg_00400000::construct() {
    *(int*)((char*)this + 0x00) = 0x783b4c;
    *(int*)((char*)this + 0x04) = 0x783b34;
    *(int*)((char*)this + 0x08) = 0x783b1c;
    *(int*)((char*)this + 0x0c) = 0x783af8;
    *(int*)((char*)this + 0x18) = 0x783ae0;
    *(int*)((char*)this + 0x20) = 0x783ac4;
    *(int*)((char*)this + 0x28) = 0x783ab8;
    *(int*)((char*)this + 0x2c) = 0x783aac;
    *(int*)((char*)this + 0x30) = 0xc0000001;
    sub_467c00(this);
    GlobalThing* g = g_8b535c;
    void* vt = g->vtbl;
    void (__fastcall *fn)(GlobalThing*) = *(void (__fastcall **)(GlobalThing*))((char*)vt + 8);
    fn(g);
    sub_4668a0(this);
}
