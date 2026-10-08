// from server: 47% by colin
// roc 2007-08 00653990  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653990
//
// 00653990  83794800             cmp dword ptr [ecx + 0x48], 0
// 00653994  740a                 je 0x6539a0
// 00653996  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00653999  8b01                 mov eax, dword ptr [ecx]
// 0065399b  8b4064               mov eax, dword ptr [eax + 0x64]
// 0065399e  ffe0                 jmp eax
// 006539a0  33c0                 xor eax, eax
// 006539a2  c20400               ret 4

struct CNameItem {
    int f(int);
};

int CNameItem::f(int arg) {
    if (*(int*)((char*)this + 0x48) != 0) {
        int* p = *(int**)((char*)this + 0x48);
        int (*fn)(int) = *(int (**)(int))((char*)*p + 0x64);
        return fn(arg);
    }
    return 0;
}
