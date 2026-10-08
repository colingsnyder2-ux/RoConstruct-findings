// from server: 100% by colin
// roc 2007-08 0043e3e0  unit: XBoolItem  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043e3e0
//
// 0043e3e0  8b442408             mov eax, dword ptr [esp + 8]
// 0043e3e4  56                   push esi
// 0043e3e5  8bf1                 mov esi, ecx
// 0043e3e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043e3eb  50                   push eax
// 0043e3ec  51                   push ecx
// 0043e3ed  8bce                 mov ecx, esi
// 0043e3ef  e8cce2ffff           call 0x43c6c0
// 0043e3f4  c70614e67800         mov dword ptr [esi], 0x78e614
// 0043e3fa  c74620b4e57800       mov dword ptr [esi + 0x20], 0x78e5b4
// 0043e401  c7860c010000ace57800 mov dword ptr [esi + 0x10c], 0x78e5ac
// 0043e40b  8bc6                 mov eax, esi
// 0043e40d  5e                   pop esi
// 0043e40e  c20800               ret 8

struct Descriptor {
    Descriptor(const char*, unsigned int);
};

struct XBoolItem : Descriptor {
    XBoolItem(const char*, unsigned int);
    char pad[0x110];
};

XBoolItem::XBoolItem(const char* name, unsigned int attributes)
    : Descriptor(name, attributes)
{
    *(void**)this = (void*)0x78e614;
    *(void**)((char*)this + 0x20) = (void*)0x78e5b4;
    *(void**)((char*)this + 0x10c) = (void*)0x78e5ac;
}
