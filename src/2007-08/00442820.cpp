// from server: 100% by colin
// roc 2007-08 00442820  unit: CPropGrid  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442820
//
// 00442820  8b5104               mov edx, dword ptr [ecx + 4]
// 00442823  33c0                 xor eax, eax
// 00442825  3bd0                 cmp edx, eax
// 00442827  c70188f57800         mov dword ptr [ecx], 0x78f588
// 0044282d  7426                 je 0x442855
// 0044282f  52                   push edx
// 00442830  894104               mov dword ptr [ecx + 4], eax
// 00442833  894108               mov dword ptr [ecx + 8], eax
// 00442836  89410c               mov dword ptr [ecx + 0xc], eax
// 00442839  894110               mov dword ptr [ecx + 0x10], eax
// 0044283c  894118               mov dword ptr [ecx + 0x18], eax
// 0044283f  894114               mov dword ptr [ecx + 0x14], eax
// 00442842  c74120ffffffff       mov dword ptr [ecx + 0x20], 0xffffffff
// 00442849  88411d               mov byte ptr [ecx + 0x1d], al
// 0044284c  88411c               mov byte ptr [ecx + 0x1c], al
// 0044284f  ff15c8d07700         call dword ptr [0x77d0c8]
// 00442855  c3                   ret 

struct CPropGrid {
    void* vtable;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    char field1C;
    char field1D;
    int field20;
    void destroy();
};

extern "C" int (__stdcall *DeleteObject)(void*);

void CPropGrid::destroy()
{
    void* p = field4;
    vtable = (void*)0x78f588;
    if (p != 0) {
        field4 = 0;
        field8 = 0;
        fieldC = 0;
        field10 = 0;
        field18 = 0;
        field14 = 0;
        field20 = -1;
        field1D = 0;
        field1C = 0;
        DeleteObject(p);
    }
}
