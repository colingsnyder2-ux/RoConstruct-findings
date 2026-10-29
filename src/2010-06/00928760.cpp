// roc 2010-06 00928760  unit: RBX::VerticalCylinderBuilder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00928760
//
// 00928760  8b442404             mov eax, dword ptr [esp + 4]
// 00928764  3b01                 cmp eax, dword ptr [ecx]
// 00928766  7506                 jne 0x92876e
// 00928768  8b4174               mov eax, dword ptr [ecx + 0x74]
// 0092876b  c20400               ret 4
// 0092876e  3b4104               cmp eax, dword ptr [ecx + 4]
// 00928771  7506                 jne 0x928779
// 00928773  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00928776  c20400               ret 4
// 00928779  3b4108               cmp eax, dword ptr [ecx + 8]
// 0092877c  7506                 jne 0x928784
// 0092877e  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00928781  c20400               ret 4
// 00928784  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00928787  7509                 jne 0x928792
// 00928789  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0092878f  c20400               ret 4
// 00928792  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 00928795  7509                 jne 0x9287a0
// 00928797  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0092879d  c20400               ret 4
// 009287a0  33c0                 xor eax, eax
// 009287a2  c20400               ret 4
// copied from an identical function in another client (function ?f@WedgeBuilder@ns_ROCX000005@@QAEHH@Z)

namespace ns_ROCX000005 {
struct WedgeBuilder {
    int f(int arg);
};

int WedgeBuilder::f(int arg) {
    if (arg == *(int*)this) {
        return *(int*)((char*)this + 0x74);
    }
    if (arg == *(int*)((char*)this + 4)) {
        return *(int*)((char*)this + 0x78);
    }
    if (arg == *(int*)((char*)this + 8)) {
        return *(int*)((char*)this + 0x7c);
    }
    if (arg == *(int*)((char*)this + 0xc)) {
        return *(int*)((char*)this + 0x80);
    }
    if (arg == *(int*)((char*)this + 0x10)) {
        return *(int*)((char*)this + 0x84);
    }
    return 0;
}
}
