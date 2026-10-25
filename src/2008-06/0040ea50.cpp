// from server: 100% by king_originala
// roc 2008-06 0040ea50  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ea50
//
// 0040ea50  8b442404             mov eax, dword ptr [esp + 4]
// 0040ea54  85c0                 test eax, eax
// 0040ea56  7418                 je 0x40ea70
// 0040ea58  8b542408             mov edx, dword ptr [esp + 8]
// 0040ea5c  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040ea5f  83c0f8               add eax, -8
// 0040ea62  52                   push edx
// 0040ea63  68b8d38000           push 0x80d3b8
// 0040ea68  50                   push eax
// 0040ea69  8b01                 mov eax, dword ptr [ecx]
// 0040ea6b  ffd0                 call eax
// 0040ea6d  c20800               ret 8
// 0040ea70  8b542408             mov edx, dword ptr [esp + 8]
// 0040ea74  33c0                 xor eax, eax
// 0040ea76  8b08                 mov ecx, dword ptr [eax]
// 0040ea78  52                   push edx
// 0040ea79  68b8d38000           push 0x80d3b8
// 0040ea7e  50                   push eax
// 0040ea7f  8b01                 mov eax, dword ptr [ecx]
// 0040ea81  ffd0                 call eax
// 0040ea83  c20800               ret 8

struct Object;

struct Table {
    long (__stdcall *query)(Object *, const void *, void **);
};

struct Object {
    Table *table;
};

extern const unsigned char interfaceId;

long __stdcall queryInterface(void *pointer, void **result)
{
    Object *object = pointer
        ? reinterpret_cast<Object *>(static_cast<char *>(pointer) - 8)
        : 0;
    return object->table->query(object, &interfaceId, result);
}
