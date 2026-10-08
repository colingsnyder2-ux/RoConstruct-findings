// from server: 100% by colin
// roc 2007-08 00655f20  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655f20
//
// 00655f20  8b89a8000000         mov ecx, dword ptr [ecx + 0xa8]
// 00655f26  56                   push esi
// 00655f27  8b742408             mov esi, dword ptr [esp + 8]
// 00655f2b  56                   push esi
// 00655f2c  e81fb90000           call 0x661850
// 00655f31  8bc6                 mov eax, esi
// 00655f33  5e                   pop esi
// 00655f34  c20400               ret 4

struct Inner;

struct Outer {
    char pad[0xa8];
    Inner* inner;
    Inner* SetItem(Inner* item);
};

struct Inner {
    Inner* SetItem(Inner* item);
};

Inner* Outer::SetItem(Inner* item)
{
    Inner* result = inner->SetItem(item);
    return item;
}
