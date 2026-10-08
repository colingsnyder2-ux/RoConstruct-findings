// from server: 67% by colin
// roc 2007-08 00405ea0  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405ea0
//
// 00405ea0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00405ea4  834118ff             add dword ptr [ecx + 0x18], -1
// 00405ea8  56                   push esi
// 00405ea9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00405eac  750d                 jne 0x405ebb
// 00405eae  85c9                 test ecx, ecx
// 00405eb0  7409                 je 0x405ebb
// 00405eb2  8b01                 mov eax, dword ptr [ecx]
// 00405eb4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00405eb7  6a01                 push 1
// 00405eb9  ffd2                 call edx
// 00405ebb  8bc6                 mov eax, esi
// 00405ebd  5e                   pop esi
// 00405ebe  c20400               ret 4

struct UIEnumConnectionPoints_V__CComEnum__CComObject {
    int Release(int);
};

int UIEnumConnectionPoints_V__CComEnum__CComObject::Release(int) {
    int result = --*(int*)((char*)this + 0x18);
    if (result == 0) {
        if (this != 0) {
            void** vtbl = *reinterpret_cast<void***>(this);
            typedef void (__stdcall *Fn)(void*, int);
            Fn fn = reinterpret_cast<Fn>(vtbl[7]);
            fn(this, 1);
        }
    }
    return result;
}
