// from server: 63% by colin
// roc 2007-08 0041d830  unit: CInstanceRecord::CNameItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d830
//
// 0041d830  51                   push ecx
// 0041d831  56                   push esi
// 0041d832  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d836  83c174               add ecx, 0x74
// 0041d839  51                   push ecx
// 0041d83a  8bce                 mov ecx, esi
// 0041d83c  c744240800000000     mov dword ptr [esp + 8], 0
// 0041d844  ff1574dd7700         call dword ptr [0x77dd74]
// 0041d84a  8bc6                 mov eax, esi
// 0041d84c  5e                   pop esi
// 0041d84d  59                   pop ecx
// 0041d84e  c20400               ret 4

struct CNameItem {
    char pad[0x74];
    void* field_74;
    CNameItem* construct(void* arg);
};

CNameItem* CNameItem::construct(void* arg)
{
    field_74 = 0;
    extern void __stdcall sub_77dd74(void*);
    sub_77dd74(&field_74);
    return this;
}
