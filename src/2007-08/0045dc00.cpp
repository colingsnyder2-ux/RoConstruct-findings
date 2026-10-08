// from server: 70% by colin
// roc 2007-08 0045dc00  unit: HH::?$CArray  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045dc00
//
// 0045dc00  51                   push ecx
// 0045dc01  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0045dc07  56                   push esi
// 0045dc08  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045dc0c  50                   push eax
// 0045dc0d  8bce                 mov ecx, esi
// 0045dc0f  c744240800000000     mov dword ptr [esp + 8], 0
// 0045dc17  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0045dc1d  8bc6                 mov eax, esi
// 0045dc1f  5e                   pop esi
// 0045dc20  59                   pop ecx
// 0045dc21  c20400               ret 4

struct CArray {
    char pad[0x84];
    int field_0x84;
    void* CopyTo(void* dest);
};

extern "C" void __stdcall sub_77ddb8(int, int);

void* CArray::CopyTo(void* dest) {
    sub_77ddb8(this->field_0x84, (int)dest);
    return dest;
}
