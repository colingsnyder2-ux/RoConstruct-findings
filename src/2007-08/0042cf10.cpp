// from server: 85% by colin
// roc 2007-08 0042cf10  unit: CLuaHtmlView::Binder  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042cf10
//
// 0042cf10  8b442404             mov eax, dword ptr [esp + 4]
// 0042cf14  3b442408             cmp eax, dword ptr [esp + 8]
// 0042cf18  7509                 jne 0x42cf23
// 0042cf1a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042cf1e  e9edfeffff           jmp 0x42ce10
// 0042cf23  c3                   ret 

struct CLuaHtmlView
{
    struct Binder
    {
        void assign(const void* a, const void* b, const void* c);
    };
};

extern "C" void __fastcall sub_42ce10(const void* c);

void CLuaHtmlView::Binder::assign(const void* a, const void* b, const void* c)
{
    if (a == b)
        sub_42ce10(c);
}
