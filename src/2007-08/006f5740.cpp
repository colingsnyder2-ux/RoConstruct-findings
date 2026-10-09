// from server: 75% by colin
// roc 2007-08 006f5740  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5740
//
// 006f5740  83b97001000000       cmp dword ptr [ecx + 0x170], 0
// 006f5747  56                   push esi
// 006f5748  743a                 je 0x6f5784
// 006f574a  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 006f5751  7431                 je 0x6f5784
// 006f5753  8b918c010000         mov edx, dword ptr [ecx + 0x18c]
// 006f5759  039180010000         add edx, dword ptr [ecx + 0x180]
// 006f575f  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 006f5765  03b17c010000         add esi, dword ptr [ecx + 0x17c]
// 006f576b  039178010000         add edx, dword ptr [ecx + 0x178]
// 006f5771  03b174010000         add esi, dword ptr [ecx + 0x174]
// 006f5777  8b442408             mov eax, dword ptr [esp + 8]
// 006f577b  8930                 mov dword ptr [eax], esi
// 006f577d  895004               mov dword ptr [eax + 4], edx
// 006f5780  5e                   pop esi
// 006f5781  c20800               ret 8
// 006f5784  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f5788  8b742408             mov esi, dword ptr [esp + 8]
// 006f578c  50                   push eax
// 006f578d  56                   push esi
// 006f578e  e8ad4ef4ff           call 0x63a640
// 006f5793  8bc6                 mov eax, esi
// 006f5795  5e                   pop esi
// 006f5796  c20800               ret 8

struct CXTPControlCustom {
    char pad[0x170];
    int field_0x170;
    int field_0x174;
    int field_0x178;
    int field_0x17c;
    int field_0x180;
    int field_0x184;
    int field_0x188;
    int field_0x18c;
    void getRect(int* out, int* out2);
};

extern "C" void __stdcall sub_63a640(int* a, int* b);

void CXTPControlCustom::getRect(int* out, int* out2) {
    if (field_0x170 != 0 && field_0x184 != 0) {
        int x = field_0x174 + field_0x17c;
        int y = field_0x178 + field_0x180;
        x += field_0x188;
        y += field_0x18c;
        *out = x;
        out[1] = y;
        return;
    }
    sub_63a640(out, out2);
    *out2 = *out;
}
