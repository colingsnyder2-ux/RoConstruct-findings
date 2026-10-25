// from server: 100% by tester
// roc 2008-06 0043d560  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d560
//
// 0043d560  8b442408             mov eax, dword ptr [esp + 8]
// 0043d564  56                   push esi
// 0043d565  8bf1                 mov esi, ecx
// 0043d567  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043d56b  50                   push eax
// 0043d56c  51                   push ecx
// 0043d56d  8bce                 mov ecx, esi
// 0043d56f  e88cdeffff           call 0x43b400
// 0043d574  c7060c488100         mov dword ptr [esi], 0x81480c
// 0043d57a  c74620ac478100       mov dword ptr [esi + 0x20], 0x8147ac
// 0043d581  c78618010000a4478100 mov dword ptr [esi + 0x118], 0x8147a4
// 0043d58b  8bc6                 mov eax, esi
// 0043d58d  5e                   pop esi
// 0043d58e  c20800               ret 8

struct Descriptor {
    Descriptor(const char*, unsigned int);
};

struct XBoolItem : Descriptor {
    XBoolItem(const char*, unsigned int);
    char pad[0x43b400];
};

XBoolItem::XBoolItem(const char* name, unsigned int attributes)
    : Descriptor(name, attributes)
{
    *(void**)this = (void*)0x81480c;
    *(void**)((char*)this + 0x20) = (void*)0x8147ac;
    *(void**)((char*)this + 0x118) = (void*)0x8147a4;
}