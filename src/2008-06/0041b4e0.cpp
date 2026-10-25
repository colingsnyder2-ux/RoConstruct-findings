// from server: 100% by king_originala
// roc 2008-06 0041b4e0  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b4e0
//
// 0041b4e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b4e4  83f803               cmp eax, 3
// 0041b4e7  741e                 je 0x41b507
// 0041b4e9  8b542408             mov edx, dword ptr [esp + 8]
// 0041b4ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041b4f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041b4f6  51                   push ecx
// 0041b4f7  50                   push eax
// 0041b4f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b4fc  52                   push edx
// 0041b4fd  50                   push eax
// 0041b4fe  e8cdecffff           call 0x41a1d0
// 0041b503  83c410               add esp, 0x10
// 0041b506  c3                   ret 
// 0041b507  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b50b  c701b0c89200         mov dword ptr [ecx], 0x92c8b0
// 0041b511  c3                   ret 

struct TypeInfo {};
extern TypeInfo target_type;

struct Buffer {
    const TypeInfo* type;
};

struct Tag {};

extern void __cdecl manage_impl(const Buffer&, Buffer&, int, Tag);

struct Manager {
    static void __cdecl manage(const Buffer&, Buffer&, int);
};

void __cdecl Manager::manage(const Buffer& source, Buffer& destination, int operation)
{
    if (operation != 3)
        manage_impl(source, destination, operation, Tag());
    else
        destination.type = &target_type;
}
