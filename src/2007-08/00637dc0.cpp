// from server: 61% by colin
// roc 2007-08 00637dc0  unit: CXTPControlComboBoxList  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637dc0
//
// 00637dc0  56                   push esi
// 00637dc1  8bf1                 mov esi, ecx
// 00637dc3  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00637dc6  e8a5210000           call 0x639f70
// 00637dcb  85c0                 test eax, eax
// 00637dcd  7429                 je 0x637df8
// 00637dcf  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00637dd2  8b01                 mov eax, dword ptr [ecx]
// 00637dd4  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 00637dda  ffd2                 call edx
// 00637ddc  85c0                 test eax, eax
// 00637dde  741f                 je 0x637dff
// 00637de0  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00637de3  8b31                 mov esi, dword ptr [ecx]
// 00637de5  33d2                 xor edx, edx
// 00637de7  33c0                 xor eax, eax
// 00637de9  52                   push edx
// 00637dea  50                   push eax
// 00637deb  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00637df1  52                   push edx
// 00637df2  ffd0                 call eax
// 00637df4  5e                   pop esi
// 00637df5  c20c00               ret 0xc
// 00637df8  8bce                 mov ecx, esi
// 00637dfa  e83f84ffff           call 0x63023e
// 00637dff  5e                   pop esi
// 00637e00  c20c00               ret 0xc

struct CXTPControlComboBoxList {
    char pad[0x5c];
    void* field_5c;
    int method(int, int, int);
};

extern "C" int __fastcall sub_639f70(void*);
extern "C" int __fastcall sub_63023e(void*);

int CXTPControlComboBoxList::method(int a, int b, int c) {
    int result = sub_639f70(field_5c);
    if (result != 0) {
        return sub_63023e(this);
    }
    void** vtable = *(void***)field_5c;
    int (__fastcall *func)(void*) = (int (__fastcall *)(void*))vtable[0x128 / 4];
    result = func(field_5c);
    if (result != 0) {
        return result;
    }
    void** vt2 = *(void***)field_5c;
    int (__fastcall *func2)(void*, int, int, int) = (int (__fastcall *)(void*, int, int, int))vt2[0xe8 / 4];
    return func2(field_5c, 0, 0, 0);
}
