// from server: 57% by colin
// roc 2007-08 005567f0  unit: RBX::TextDisplay  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005567f0
//
// 005567f0  51                   push ecx
// 005567f1  56                   push esi
// 005567f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005567f6  81c1fc000000         add ecx, 0xfc
// 005567fc  51                   push ecx
// 005567fd  8bce                 mov ecx, esi
// 005567ff  c744240800000000     mov dword ptr [esp + 8], 0
// 00556807  ff159ce67700         call dword ptr [0x77e69c]
// 0055680d  8bc6                 mov eax, esi
// 0055680f  5e                   pop esi
// 00556810  59                   pop ecx
// 00556811  c20400               ret 4

struct GuiItem {
    char pad[0xfc];
    void* field_fc;
};

struct TextDisplay : GuiItem {
    void construct(void* other);
};

extern "C" void* __stdcall string_copy_ctor(void* dest, const void* src);

void TextDisplay::construct(void* other) {
    void* tmp = 0;
    string_copy_ctor(&this->field_fc, other);
}
