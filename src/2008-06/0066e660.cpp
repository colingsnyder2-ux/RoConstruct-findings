// from server: 100% by colin
// roc 2008-06 0066e660  unit: RBX::GroupDragTool  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066e660
//
// 0066e660  8b442404             mov eax, dword ptr [esp + 4]
// 0066e664  56                   push esi
// 0066e665  50                   push eax
// 0066e666  8bf1                 mov esi, ecx
// 0066e668  e89357fdff           call 0x643e00
// 0066e66d  d944240c             fld dword ptr [esp + 0xc]
// 0066e671  d99ea0000000         fstp dword ptr [esi + 0xa0]
// 0066e677  c706dcd08400         mov dword ptr [esi], 0x84d0dc
// 0066e67d  d9442410             fld dword ptr [esp + 0x10]
// 0066e681  c74604d4d08400       mov dword ptr [esi + 4], 0x84d0d4
// 0066e688  d99ea4000000         fstp dword ptr [esi + 0xa4]
// 0066e68e  8bc6                 mov eax, esi
// 0066e690  5e                   pop esi
// 0066e691  c20c00               ret 0xc

struct MouseCommand {
    char pad[0xa0];
    float f0;
    float f1;
};

struct GroupDragTool {
    void* vtable;
    void* vtable2;
    char pad[0x98];
    float fieldA0;
    float fieldA4;
    GroupDragTool* construct(void* a, float x, float y);
};

extern "C" void __stdcall sub_643e00(void* a);

GroupDragTool* GroupDragTool::construct(void* a, float x, float y) {
    sub_643e00(a);
    fieldA0 = x;
    vtable = (void*)0x84d0dc;
    fieldA4 = y;
    vtable2 = (void*)0x84d0d4;
    return this;
}
