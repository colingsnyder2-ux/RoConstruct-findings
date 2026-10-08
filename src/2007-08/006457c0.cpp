// from server: 80% by colin
// roc 2007-08 006457c0  unit: CXTPCommandBarList  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006457c0
//
// 006457c0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006457c3  56                   push esi
// 006457c4  8b742408             mov esi, dword ptr [esp + 8]
// 006457c8  83c124               add ecx, 0x24
// 006457cb  56                   push esi
// 006457cc  50                   push eax
// 006457cd  e83ed10800           call 0x6d2910
// 006457d2  8bc6                 mov eax, esi
// 006457d4  5e                   pop esi
// 006457d5  c20400               ret 4

struct CXTPCommandBarList
{
    char pad[0x24];
    int field_24;
    char pad2[0x4];
    int field_2c;
    int Add(int* p);
};

extern "C" int __stdcall sub_6d2910(int, int);

int CXTPCommandBarList::Add(int* p)
{
    int result = sub_6d2910(field_2c, (int)p);
    return (int)p;
}
