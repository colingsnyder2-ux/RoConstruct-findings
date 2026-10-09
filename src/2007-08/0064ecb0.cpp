// from server: 70% by colin
// roc 2007-08 0064ecb0  unit: CXTPToolBar::CControlButtonExpand  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ecb0
//
// 0064ecb0  83ec08               sub esp, 8
// 0064ecb3  53                   push ebx
// 0064ecb4  56                   push esi
// 0064ecb5  57                   push edi
// 0064ecb6  8bf1                 mov esi, ecx
// 0064ecb8  e843b3feff           call 0x63a000
// 0064ecbd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0064ecc3  8b10                 mov edx, dword ptr [eax]
// 0064ecc5  8b92ac000000         mov edx, dword ptr [edx + 0xac]
// 0064eccb  33db                 xor ebx, ebx
// 0064eccd  83b9fc00000004       cmp dword ptr [ecx + 0xfc], 4
// 0064ecd4  8dbe78010000         lea edi, [esi + 0x178]
// 0064ecda  57                   push edi
// 0064ecdb  0f95c3               setne bl
// 0064ecde  6a01                 push 1
// 0064ece0  51                   push ecx
// 0064ece1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0064ece5  56                   push esi
// 0064ece6  83eb01               sub ebx, 1
// 0064ece9  83e303               and ebx, 3
// 0064ecec  53                   push ebx
// 0064eced  51                   push ecx
// 0064ecee  8d4c2424             lea ecx, [esp + 0x24]
// 0064ecf2  51                   push ecx
// 0064ecf3  8bc8                 mov ecx, eax
// 0064ecf5  ffd2                 call edx
// 0064ecf7  5f                   pop edi
// 0064ecf8  5e                   pop esi
// 0064ecf9  5b                   pop ebx
// 0064ecfa  83c408               add esp, 8
// 0064ecfd  c20400               ret 4

struct CXTPToolBar {
    char pad[0xfc];
    void* field_fc;
    char pad2[0x178 - 0xfc - 4];
    int field_178;

    void CControlButtonExpand(int arg);
};

struct Inner {
    char pad[0xfc];
    int field_fc;
};

extern "C" void* __stdcall sub_63a000();

void CXTPToolBar::CControlButtonExpand(int arg)
{
    void* p = sub_63a000();
    Inner* inner = *(Inner**)((char*)this + 0xfc);
    void** vtbl = *(void***)p;
    void* fn = vtbl[0xac / 4];
    int flag = (inner->field_fc != 4) ? 1 : 0;
    flag = (flag - 1) & 3;
    int* ptr = (int*)((char*)this + 0x178);
    typedef void (__stdcall *Fn)(void*, int, void*, int, int*, int);
    ((Fn)fn)(p, arg, inner, 1, ptr, flag);
}
