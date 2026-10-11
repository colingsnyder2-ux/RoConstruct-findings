// from server: 100% by tester
// roc 2009-06 0065b640  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065b640
//
// 0065b640  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0065b643  8b01                 mov eax, dword ptr [ecx]
// 0065b645  8b4008               mov eax, dword ptr [eax + 8]
// 0065b648  ffe0                 jmp eax

struct VCRenderSettingsItem {
    int EnumPropDescriptor();
};

int VCRenderSettingsItem::EnumPropDescriptor() {
    int* ptr = *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + 0x1c);
    int* vtable = *reinterpret_cast<int**>(ptr);
    int func = vtable[2];
    return reinterpret_cast<int(__thiscall*)(int*)>(func)(ptr);
}
