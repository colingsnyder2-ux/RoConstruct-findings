// from server: 100% by tester
// roc 2008-06 0066ef10  unit: RBX::HUMAN::VHumanoidState::?$Named  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ef10
//
// 0066ef10  56                   push esi
// 0066ef11  8d442408             lea eax, [esp + 8]
// 0066ef15  8bf1                 mov esi, ecx
// 0066ef17  50                   push eax
// 0066ef18  c70600000000         mov dword ptr [esi], 0
// 0066ef1e  e8cdb3f9ff           call 0x60a2f0
// 0066ef23  83c404               add esp, 4
// 0066ef26  84c0                 test al, al
// 0066ef28  752e                 jne 0x66ef58
// 0066ef2a  8d4608               lea eax, [esi + 8]
// 0066ef2d  85c0                 test eax, eax
// 0066ef2f  741b                 je 0x66ef4c
// 0066ef31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066ef35  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066ef39  8908                 mov dword ptr [eax], ecx
// 0066ef3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066ef3f  895004               mov dword ptr [eax + 4], edx
// 0066ef42  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066ef46  894808               mov dword ptr [eax + 8], ecx
// 0066ef49  89500c               mov dword ptr [eax + 0xc], edx
// 0066ef4c  c7068cd18400         mov dword ptr [esi], 0x84d18c
// 0066ef52  8bc6                 mov eax, esi
// 0066ef54  5e                   pop esi
// 0066ef55  c21400               ret 0x14
// 0066ef58  c70600000000         mov dword ptr [esi], 0
// 0066ef5e  8bc6                 mov eax, esi
// 0066ef60  5e                   pop esi
// 0066ef61  c21400               ret 0x14

struct Data {
    unsigned long a, b, c, d;
};

struct Argument {
    Data data;
    unsigned long extra;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char tag;

struct S {
    const void *type;
    unsigned long unused;
    Data data;

    S(Argument value);
};

S::S(Argument value)
{
    type = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument *)>(
            &func_0060a2f0)(&value)) {
        Data *destination = &data;
        if (destination)
            *destination = value.data;
        type = &tag;
    } else {
        type = 0;
    }
}
