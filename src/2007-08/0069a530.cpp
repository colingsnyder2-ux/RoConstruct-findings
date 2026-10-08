// from server: 100% by colin
// roc 2007-08 0069a530  unit: CPropertyGridItemBrickColor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a530
//
// 0069a530  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 0069a536  85c0                 test eax, eax
// 0069a538  7415                 je 0x69a54f
// 0069a53a  8b00                 mov eax, dword ptr [eax]
// 0069a53c  3b8100010000         cmp eax, dword ptr [ecx + 0x100]
// 0069a542  740b                 je 0x69a54f
// 0069a544  8b11                 mov edx, dword ptr [ecx]
// 0069a546  50                   push eax
// 0069a547  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0069a54d  ffd0                 call eax
// 0069a54f  c3                   ret 

struct CPropertyGridItemBrickColor {
    void Update();
};

void CPropertyGridItemBrickColor::Update() {
    int* p = *(int**)((char*)this + 0x104);
    if (p != 0) {
        int v = *p;
        if (v != *(int*)((char*)this + 0x100)) {
            int* vtbl = *(int**)this;
            void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))(vtbl + 0xe4 / 4);
            fn(this, v);
        }
    }
}
