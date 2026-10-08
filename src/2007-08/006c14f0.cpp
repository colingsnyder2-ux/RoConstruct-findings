// from server: 95% by colin
// roc 2007-08 006c14f0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c14f0
//
// 006c14f0  8b542408             mov edx, dword ptr [esp + 8]
// 006c14f4  8b82fc000000         mov eax, dword ptr [edx + 0xfc]
// 006c14fa  85c0                 test eax, eax
// 006c14fc  7417                 je 0x6c1515
// 006c14fe  83f801               cmp eax, 1
// 006c1501  7412                 je 0x6c1515
// 006c1503  56                   push esi
// 006c1504  8b742408             mov esi, dword ptr [esp + 8]
// 006c1508  52                   push edx
// 006c1509  56                   push esi
// 006c150a  e8b10bf8ff           call 0x6420c0
// 006c150f  8bc6                 mov eax, esi
// 006c1511  5e                   pop esi
// 006c1512  c20800               ret 8
// 006c1515  8b442404             mov eax, dword ptr [esp + 4]
// 006c1519  b902000000           mov ecx, 2
// 006c151e  c70004000000         mov dword ptr [eax], 4
// 006c1524  894804               mov dword ptr [eax + 4], ecx
// 006c1527  894808               mov dword ptr [eax + 8], ecx
// 006c152a  89480c               mov dword ptr [eax + 0xc], ecx
// 006c152d  c20800               ret 8

struct CXTPOffice2003Theme {
    int* sub_6C14F0(int* p1, int* p2);
};

extern "C" int __stdcall sub_6420C0(int* a, int* b);

int* CXTPOffice2003Theme::sub_6C14F0(int* p1, int* p2) {
    int v = p2[0x3f];
    if (v != 0 && v != 1) {
        sub_6420C0(p1, p2);
        return p1;
    }
    p1[0] = 4;
    p1[1] = 2;
    p1[2] = 2;
    p1[3] = 2;
    return p1;
}
