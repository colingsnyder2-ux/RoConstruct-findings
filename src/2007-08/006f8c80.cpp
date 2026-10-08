// from server: 72% by colin
// roc 2007-08 006f8c80  unit: CXTPPropertyGridInplaceEdit  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8c80
//
// 006f8c80  51                   push ecx
// 006f8c81  56                   push esi
// 006f8c82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f8c86  83c120               add ecx, 0x20
// 006f8c89  51                   push ecx
// 006f8c8a  8bce                 mov ecx, esi
// 006f8c8c  c744240800000000     mov dword ptr [esp + 8], 0
// 006f8c94  ff1574dd7700         call dword ptr [0x77dd74]
// 006f8c9a  8bc6                 mov eax, esi
// 006f8c9c  5e                   pop esi
// 006f8c9d  59                   pop ecx
// 006f8c9e  c20400               ret 4

struct CXTPPropertyGridInplaceEdit {
    char pad[0x20];
    int field_20;
    CXTPPropertyGridInplaceEdit* method(int* arg);
};

extern "C" void __stdcall sub_77dd74(int*, int*);

CXTPPropertyGridInplaceEdit* CXTPPropertyGridInplaceEdit::method(int* arg)
{
    int local = 0;
    sub_77dd74(&field_20, &local);
    return this;
}
