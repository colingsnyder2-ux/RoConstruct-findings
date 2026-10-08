// from server: 85% by colin
// roc 2007-08 00595960  unit: RBX::VLaserTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595960
//
// 00595960  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595963  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595969  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059596f  85c0                 test eax, eax
// 00595971  7416                 je 0x595989
// 00595973  50                   push eax
// 00595974  e819ba0900           call 0x631392
// 00595979  83c404               add esp, 4
// 0059597c  50                   push eax
// 0059597d  b9945a8a00           mov ecx, 0x8a5a94
// 00595982  ff1508e77700         call dword ptr [0x77e708]
// 00595988  c3                   ret 
// 00595989  32c0                 xor al, al
// 0059598b  c3                   ret 

struct type_info;

extern "C" {
    int __cdecl func_00631392(int);
    int __stdcall func_0077e708(int);
}

extern type_info type_info_008a5a94;

struct Inner {
    char pad[0x318];
    int field_318;
};

struct Mid {
    char pad[0x188];
    Inner* inner;
};

struct S {
    char pad[0xc];
    Mid* mid;
    bool f();
};

bool S::f()
{
    Inner* inner = mid->inner;
    int v = inner->field_318;
    if (v != 0) {
        int r = func_00631392(v);
        func_0077e708(r);
        return true;
    }
    return false;
}
