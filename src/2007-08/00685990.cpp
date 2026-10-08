// from server: 84% by colin
// roc 2007-08 00685990  unit: CInstanceRecord::CNameItem  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685990
//
// 00685990  56                   push esi
// 00685991  57                   push edi
// 00685992  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00685996  8bf1                 mov esi, ecx
// 00685998  6a00                 push 0
// 0068599a  8bcf                 mov ecx, edi
// 0068599c  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006859a2  50                   push eax
// 006859a3  56                   push esi
// 006859a4  e809300b00           call 0x7389b2
// 006859a9  8bcf                 mov ecx, edi
// 006859ab  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006859b1  50                   push eax
// 006859b2  8bcf                 mov ecx, edi
// 006859b4  ff1598dd7700         call dword ptr [0x77dd98]
// 006859ba  50                   push eax
// 006859bb  8bce                 mov ecx, esi
// 006859bd  e8d2acfaff           call 0x630694
// 006859c2  5f                   pop edi
// 006859c3  8bc6                 mov eax, esi
// 006859c5  5e                   pop esi
// 006859c6  c20400               ret 4

struct CNameItem {
    CNameItem* construct(const char* name);
};

extern "C" void* __stdcall sub_77DCC8(void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __fastcall sub_7389B2(void* self, void* unused, void* a);
extern "C" void __fastcall sub_630694(void* self, void* unused, void* a, void* b);

CNameItem* CNameItem::construct(const char* name)
{
    void* p1 = sub_77DCC8((void*)name);
    sub_7389B2(this, 0, p1);
    void* p2 = sub_77DCC8((void*)name);
    void* p3 = sub_77DD98(p2);
    sub_630694(this, 0, p2, p3);
    return this;
}
