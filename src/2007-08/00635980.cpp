// from server: 68% by colin
// roc 2007-08 00635980  unit: CXTPCommandBarsOptions  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635980
//
// 00635980  51                   push ecx
// 00635981  56                   push esi
// 00635982  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00635986  83c154               add ecx, 0x54
// 00635989  51                   push ecx
// 0063598a  8bce                 mov ecx, esi
// 0063598c  c744240800000000     mov dword ptr [esp + 8], 0
// 00635994  ff1574dd7700         call dword ptr [0x77dd74]
// 0063599a  8bc6                 mov eax, esi
// 0063599c  5e                   pop esi
// 0063599d  59                   pop ecx
// 0063599e  c20400               ret 4

struct CXTPCommandBarsOptions
{
    char pad[0x54];
    int field54;
    CXTPCommandBarsOptions* CopyFrom(CXTPCommandBarsOptions* other);
};

extern "C" void __stdcall sub_77DD74(int* dest, int* src);

CXTPCommandBarsOptions* CXTPCommandBarsOptions::CopyFrom(CXTPCommandBarsOptions* other)
{
    int temp = 0;
    sub_77DD74(&temp, &this->field54);
    other->field54 = temp;
    return other;
}
