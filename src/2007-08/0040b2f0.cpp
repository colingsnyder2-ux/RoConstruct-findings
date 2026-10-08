// from server: 88% by colin
// roc 2007-08 0040b2f0  unit: CBrowserView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b2f0
//
// 0040b2f0  8b442404             mov eax, dword ptr [esp + 4]
// 0040b2f4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040b2f7  83baf800000005       cmp dword ptr [edx + 0xf8], 5
// 0040b2fe  750f                 jne 0x40b30f
// 0040b300  e86bfdffff           call 0x40b070
// 0040b305  8b442408             mov eax, dword ptr [esp + 8]
// 0040b309  c70001000000         mov dword ptr [eax], 1
// 0040b30f  c20800               ret 8

struct CBrowserView {
    char pad[0xc];
    void* field_c;
};

struct Inner {
    char pad[0xf8];
    int field_f8;
};

extern "C" void __cdecl helper_40b070();

void __stdcall sub_40b2f0(CBrowserView* view, int* out)
{
    Inner* inner = (Inner*)view->field_c;
    if (inner->field_f8 == 5)
    {
        helper_40b070();
        *out = 1;
    }
}
