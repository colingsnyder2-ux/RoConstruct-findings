// from server: 78% by colin
// roc 2007-08 0069e1b0  unit: CXTPPropertyGridItemEnum  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e1b0
//
// 0069e1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0069e1b4  56                   push esi
// 0069e1b5  8bf1                 mov esi, ecx
// 0069e1b7  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0069e1bd  85c9                 test ecx, ecx
// 0069e1bf  898600010000         mov dword ptr [esi + 0x100], eax
// 0069e1c5  7402                 je 0x69e1c9
// 0069e1c7  8901                 mov dword ptr [ecx], eax
// 0069e1c9  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0069e1cf  50                   push eax
// 0069e1d0  e8ebb7ffff           call 0x6999c0
// 0069e1d5  51                   push ecx
// 0069e1d6  8bcc                 mov ecx, esp
// 0069e1d8  8964240c             mov dword ptr [esp + 0xc], esp
// 0069e1dc  50                   push eax
// 0069e1dd  51                   push ecx
// 0069e1de  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0069e1e4  e837afffff           call 0x699120
// 0069e1e9  8bce                 mov ecx, esi
// 0069e1eb  e840a4ffff           call 0x698630
// 0069e1f0  5e                   pop esi
// 0069e1f1  c20400               ret 4

struct CXTPPropertyGridItemEnum {
    char pad[0xbc];
    void* field_bc;
    char pad2[0x100 - 0xbc - 4];
    int field_100;
    int* field_104;
    void SetValue(int value);
};

extern "C" int __stdcall sub_6999C0(void*, int);
extern "C" void __stdcall sub_699120(void*, int*, int, int*);
extern "C" void __stdcall sub_698630(CXTPPropertyGridItemEnum*);

void CXTPPropertyGridItemEnum::SetValue(int value) {
    field_100 = value;
    if (field_104) {
        *field_104 = value;
    }
    int r = sub_6999C0(field_bc, value);
    int tmp;
    sub_699120(field_bc, &tmp, r, &tmp);
    sub_698630(this);
}
