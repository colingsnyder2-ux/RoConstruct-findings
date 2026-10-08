// from server: 88% by colin
// roc 2007-08 004779e0  unit: CInstanceRecord::CNameItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004779e0
//
// 004779e0  56                   push esi
// 004779e1  8bf1                 mov esi, ecx
// 004779e3  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004779e9  85c9                 test ecx, ecx
// 004779eb  7416                 je 0x477a03
// 004779ed  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004779f4  8b01                 mov eax, dword ptr [ecx]
// 004779f6  8b5010               mov edx, dword ptr [eax + 0x10]
// 004779f9  56                   push esi
// 004779fa  ffd2                 call edx
// 004779fc  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00477a03  8bce                 mov ecx, esi
// 00477a05  5e                   pop esi
// 00477a06  e945e2ffff           jmp 0x475c50

struct CInstanceRecord_CNameItem {
    void f();
};

extern "C" void __fastcall sub_475c50(void*);

void CInstanceRecord_CNameItem::f() {
    char* self = (char*)this;
    int* p = *(int**)(self + 0x488);
    if (p != 0) {
        *(char*)(self + 0x111) = 1;
        void** vt = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[4];
        fn(this);
        *(char*)(self + 0x111) = 0;
    }
    sub_475c50(this);
}
