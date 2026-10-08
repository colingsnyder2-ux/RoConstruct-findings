// from server: 65% by colin
// roc 2007-08 00570060  unit: seg_00570000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570060
//
// 00570060  8b442408             mov eax, dword ptr [esp + 8]
// 00570064  8b4004               mov eax, dword ptr [eax + 4]
// 00570067  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057006b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057006e  83c004               add eax, 4
// 00570071  89442408             mov dword ptr [esp + 8], eax
// 00570075  83c104               add ecx, 4
// 00570078  894c2404             mov dword ptr [esp + 4], ecx
// 0057007c  ff2520e67700         jmp dword ptr [0x77e620]
// library MSVCP80 std::operator<

extern "C" int __cdecl string_less(const void* a, const void* b);

struct StringRef
{
    char pad[4];
    char* data;
};

int __cdecl compare_strings(const StringRef* a, const StringRef* b)
{
    return string_less(a->data + 4, b->data + 4);
}
