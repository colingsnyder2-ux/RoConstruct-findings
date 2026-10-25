// from server: 100% by tester
// roc 2008-06 00458f90  unit: InsertModelFromRobloxVerb  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458f90
//
// 00458f90  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00458f93  33c9                 xor ecx, ecx
// 00458f95  3988d8010000         cmp dword ptr [eax + 0x1d8], ecx
// 00458f9b  0f95c1               setne cl
// 00458f9e  8ac1                 mov al, cl
// 00458fa0  c3                   ret 

struct SubInfo {
    char pad[0x1d8];
    int value;
};

struct InsertModelFromRobloxVerb {
    char pad[0xc];
    SubInfo* info;
    bool ShouldShow();
};

bool InsertModelFromRobloxVerb::ShouldShow()
{
    return this->info->value != 0;
}