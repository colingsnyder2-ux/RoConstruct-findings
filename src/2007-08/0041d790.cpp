// from server: 91% by colin
// roc 2007-08 0041d790  unit: CInstanceRecord::CNameItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d790
//
// 0041d790  56                   push esi
// 0041d791  8bf1                 mov esi, ecx
// 0041d793  8b06                 mov eax, dword ptr [esi]
// 0041d795  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0041d79b  ffd2                 call edx
// 0041d79d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041d7a1  894e50               mov dword ptr [esi + 0x50], ecx
// 0041d7a4  5e                   pop esi
// 0041d7a5  c20400               ret 4

struct CNameItem {
    void setValue(int value);
    int pad[0x13];
    int field50;
};

void CNameItem::setValue(int value) {
    (*(void (__thiscall **)(void *))(*(int *)this + 0xc8))(this);
    *(int *)((char *)this + 0x50) = value;
}
