// from server: 100% by colin
// roc 2007-08 0067d860  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d860
//
// 0067d860  8b442404             mov eax, dword ptr [esp + 4]
// 0067d864  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 0067d86b  740f                 je 0x67d87c
// 0067d86d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067d871  c70100000000         mov dword ptr [ecx], 0
// 0067d877  33c0                 xor eax, eax
// 0067d879  c21000               ret 0x10
// 0067d87c  b801000000           mov eax, 1
// 0067d881  c21000               ret 0x10

struct CXTPControlWindowList {
    int f(int, int, int, int*);
};

int CXTPControlWindowList::f(int a, int b, int c, int* out) {
    if (*(int*)((char*)a + 0xf4) != 2) {
        *out = 0;
        return 0;
    }
    return 1;
}
