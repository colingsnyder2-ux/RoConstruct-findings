// from server: 100% by colin
// roc 2007-08 00651f00  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651f00
//
// 00651f00  83b9c002000000       cmp dword ptr [ecx + 0x2c0], 0
// 00651f07  7416                 je 0x651f1f
// 00651f09  8b01                 mov eax, dword ptr [ecx]
// 00651f0b  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651f11  ffd2                 call edx
// 00651f13  8b10                 mov edx, dword ptr [eax]
// 00651f15  8bc8                 mov ecx, eax
// 00651f17  8b8270010000         mov eax, dword ptr [edx + 0x170]
// 00651f1d  ffe0                 jmp eax
// 00651f1f  c3                   ret 

struct XTP_REPORTRECORDITEM_DRAWARGS {
    void f();
};

void XTP_REPORTRECORDITEM_DRAWARGS::f() {
    if (*(int*)((char*)this + 0x2c0) != 0) {
        void* p = (*(void*(__thiscall**)(void*))(*(void***)this + 0x18c / 4))(this);
        (*(void(__thiscall**)(void*))(*(void***)p + 0x170 / 4))(p);
    }
}
