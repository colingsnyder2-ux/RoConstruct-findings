// from server: 69% by colin
// roc 2007-08 00416be0  unit: VCLuaFunction::?$CComObject  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416be0
//
// 00416be0  8b442408             mov eax, dword ptr [esp + 8]
// 00416be4  83f802               cmp eax, 2
// 00416be7  7519                 jne 0x416c02
// 00416be9  56                   push esi
// 00416bea  8b742408             mov esi, dword ptr [esp + 8]
// 00416bee  56                   push esi
// 00416bef  b9e8338800           mov ecx, 0x8833e8
// 00416bf4  ff1508e77700         call dword ptr [0x77e708]
// 00416bfa  f6d8                 neg al
// 00416bfc  1bc0                 sbb eax, eax
// 00416bfe  23c6                 and eax, esi
// 00416c00  5e                   pop esi
// 00416c01  c3                   ret 
// 00416c02  8b542404             mov edx, dword ptr [esp + 4]
// 00416c06  c644240800           mov byte ptr [esp + 8], 0
// 00416c0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00416c0f  51                   push ecx
// 00416c10  50                   push eax
// 00416c11  52                   push edx
// 00416c12  e859fcffff           call 0x416870
// 00416c17  83c40c               add esp, 0xc
// 00416c1a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_8833e8;
extern "C" void* __cdecl sub_416870(void*, int, char);

struct VCLuaFunction {
    void* method(int, int);
};

void* VCLuaFunction::method(int a, int b)
{
    if (b == 2) {
        void* p = (void*)a;
        if (type_info_8833e8 == *(type_info*)p)
            return p;
        return 0;
    }
    sub_416870((void*)a, b, 0);
    return 0;
}
