// from server: 100% by colin
// roc 2007-08 00455f20  unit: InsertModelFromRobloxVerb  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455f20
//
// 00455f20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00455f23  33c9                 xor ecx, ecx
// 00455f25  398898010000         cmp dword ptr [eax + 0x198], ecx
// 00455f2b  0f95c1               setne cl
// 00455f2e  8ac1                 mov al, cl
// 00455f30  c3                   ret 

struct SubInfo {
    char pad[0x198];
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
