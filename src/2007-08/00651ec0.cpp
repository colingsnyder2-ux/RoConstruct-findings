// from server: 100% by colin
// roc 2007-08 00651ec0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651ec0
//
// 00651ec0  83b9bc02000000       cmp dword ptr [ecx + 0x2bc], 0
// 00651ec7  7416                 je 0x651edf
// 00651ec9  8b01                 mov eax, dword ptr [ecx]
// 00651ecb  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651ed1  ffd2                 call edx
// 00651ed3  8b10                 mov edx, dword ptr [eax]
// 00651ed5  8bc8                 mov ecx, eax
// 00651ed7  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00651edd  ffe0                 jmp eax
// 00651edf  c3                   ret 

struct XTP_REPORTRECORDITEM_DRAWARGS {
    void f();
};

void XTP_REPORTRECORDITEM_DRAWARGS::f() {
    if (*(int*)((char*)this + 0x2bc) != 0) {
        void* p = (*(void*(__thiscall**)(void*))(*(void***)this + 0x18c / 4))(this);
        (*(void(__thiscall**)(void*))(*(void***)p + 0x168 / 4))(p);
    }
}
