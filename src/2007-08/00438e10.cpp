// from server: 70% by colin
// roc 2007-08 00438e10  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438e10
//
// 00438e10  51                   push ecx
// 00438e11  56                   push esi
// 00438e12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00438e16  81c1a8000000         add ecx, 0xa8
// 00438e1c  51                   push ecx
// 00438e1d  8bce                 mov ecx, esi
// 00438e1f  c744240800000000     mov dword ptr [esp + 8], 0
// 00438e27  ff1574dd7700         call dword ptr [0x77dd74]
// 00438e2d  8bc6                 mov eax, esi
// 00438e2f  5e                   pop esi
// 00438e30  59                   pop ecx
// 00438e31  c20400               ret 4

struct HVCXTPPropertyGridItemEnum_XItem {
    void* construct(void*);
};

extern "C" void* __stdcall sub_77DD74(void*, void*);

void* HVCXTPPropertyGridItemEnum_XItem::construct(void* arg)
{
    void* p = (char*)this + 0xa8;
    sub_77DD74(arg, p);
    return arg;
}
