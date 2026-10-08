// from server: 80% by colin
// roc 2007-08 0061c060  unit: RBX::ImageButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c060
//
// 0061c060  56                   push esi
// 0061c061  8b742408             mov esi, dword ptr [esp + 8]
// 0061c065  56                   push esi
// 0061c066  81c104010000         add ecx, 0x104
// 0061c06c  e85f4afeff           call 0x600ad0
// 0061c071  8bc6                 mov eax, esi
// 0061c073  5e                   pop esi
// 0061c074  c20400               ret 4

struct ImageButton {
    char pad[0x104];
    void* sub;
    void* method(void* arg);
};

extern "C" void __stdcall helper_600ad0(void* arg);

void* ImageButton::method(void* arg) {
    helper_600ad0(arg);
    return arg;
}
