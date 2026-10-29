// roc 2009-12 0040d540  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d540
//
// 0040d540  8b442404             mov eax, dword ptr [esp + 4]
// 0040d544  85c0                 test eax, eax
// 0040d546  7418                 je 0x40d560
// 0040d548  8b542408             mov edx, dword ptr [esp + 8]
// 0040d54c  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040d54f  83c0f8               add eax, -8
// 0040d552  52                   push edx
// 0040d553  68b40c9a00           push 0x9a0cb4
// 0040d558  50                   push eax
// 0040d559  8b01                 mov eax, dword ptr [ecx]
// 0040d55b  ffd0                 call eax
// 0040d55d  c20800               ret 8
// 0040d560  8b542408             mov edx, dword ptr [esp + 8]
// 0040d564  33c0                 xor eax, eax
// 0040d566  8b08                 mov ecx, dword ptr [eax]
// 0040d568  52                   push edx
// 0040d569  68b40c9a00           push 0x9a0cb4
// 0040d56e  50                   push eax
// 0040d56f  8b01                 mov eax, dword ptr [ecx]
// 0040d571  ffd0                 call eax
// 0040d573  c20800               ret 8
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