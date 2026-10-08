// from server: 56% by colin
// roc 2007-08 0041d740  unit: CInstanceRecord::CNameItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d740
//
// 0041d740  51                   push ecx
// 0041d741  56                   push esi
// 0041d742  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d746  83c140               add ecx, 0x40
// 0041d749  51                   push ecx
// 0041d74a  8bce                 mov ecx, esi
// 0041d74c  c744240800000000     mov dword ptr [esp + 8], 0
// 0041d754  ff1574dd7700         call dword ptr [0x77dd74]
// 0041d75a  8bc6                 mov eax, esi
// 0041d75c  5e                   pop esi
// 0041d75d  59                   pop ecx
// 0041d75e  c20400               ret 4

struct CNameItem {
    char pad[0x40];
    void* field_40;
    void* construct(void* arg);
};

extern "C" void __stdcall sub_77dd74(void*, void*);

void* CNameItem::construct(void* arg)
{
    void* p = (char*)this + 0x40;
    *(void**)p = 0;
    sub_77dd74(arg, p);
    return arg;
}
