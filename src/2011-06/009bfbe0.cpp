// roc 2011-06 009bfbe0  unit: RBX::WedgeBuilder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009bfbe0
//
// 009bfbe0  8b442404             mov eax, dword ptr [esp + 4]
// 009bfbe4  3b01                 cmp eax, dword ptr [ecx]
// 009bfbe6  7506                 jne 0x9bfbee
// 009bfbe8  8b4174               mov eax, dword ptr [ecx + 0x74]
// 009bfbeb  c20400               ret 4
// 009bfbee  3b4104               cmp eax, dword ptr [ecx + 4]
// 009bfbf1  7506                 jne 0x9bfbf9
// 009bfbf3  8b4178               mov eax, dword ptr [ecx + 0x78]
// 009bfbf6  c20400               ret 4
// 009bfbf9  3b4108               cmp eax, dword ptr [ecx + 8]
// 009bfbfc  7506                 jne 0x9bfc04
// 009bfbfe  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 009bfc01  c20400               ret 4
// 009bfc04  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 009bfc07  7509                 jne 0x9bfc12
// 009bfc09  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 009bfc0f  c20400               ret 4
// 009bfc12  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 009bfc15  7509                 jne 0x9bfc20
// 009bfc17  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 009bfc1d  c20400               ret 4
// 009bfc20  33c0                 xor eax, eax
// 009bfc22  c20400               ret 4
// copied from an identical function in another client (function ?f@WedgeBuilder@@QAEHH@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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