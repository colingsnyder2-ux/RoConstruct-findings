// roc 2009-06 0040d7e0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d7e0
//
// 0040d7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0040d7e4  85c0                 test eax, eax
// 0040d7e6  7418                 je 0x40d800
// 0040d7e8  8b542408             mov edx, dword ptr [esp + 8]
// 0040d7ec  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040d7ef  83c0f8               add eax, -8
// 0040d7f2  52                   push edx
// 0040d7f3  68e4e08a00           push 0x8ae0e4
// 0040d7f8  50                   push eax
// 0040d7f9  8b01                 mov eax, dword ptr [ecx]
// 0040d7fb  ffd0                 call eax
// 0040d7fd  c20800               ret 8
// 0040d800  8b542408             mov edx, dword ptr [esp + 8]
// 0040d804  33c0                 xor eax, eax
// 0040d806  8b08                 mov ecx, dword ptr [eax]
// 0040d808  52                   push edx
// 0040d809  68e4e08a00           push 0x8ae0e4
// 0040d80e  50                   push eax
// 0040d80f  8b01                 mov eax, dword ptr [ecx]
// 0040d811  ffd0                 call eax
// 0040d813  c20800               ret 8
// copied from an identical function in another client (function ?queryInterface@@YGJPAXPAPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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