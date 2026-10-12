// from server: 100% by king_originala
// roc 2008-06 005877e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005877e0
//
// 005877e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005877e4  83f803               cmp eax, 3
// 005877e7  741e                 je 0x587807
// 005877e9  8b542408             mov edx, dword ptr [esp + 8]
// 005877ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005877f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005877f6  51                   push ecx
// 005877f7  50                   push eax
// 005877f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005877fc  52                   push edx
// 005877fd  50                   push eax
// 005877fe  e82dfdffff           call 0x587530
// 00587803  83c410               add esp, 0x10
// 00587806  c3                   ret 
// 00587807  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058780b  c701488f9400         mov dword ptr [ecx], 0x948f48
// 00587811  c3                   ret 

struct Tag {
    char value;
};

extern char typeInfo;
extern void __cdecl manageObject(void *, void *, int, Tag);

void __cdecl manage(void *source, void *destination, int operation)
{
    if (operation != 3) {
        Tag tag = { 0 };
        manageObject(source, destination, operation, tag);
    } else {
        *static_cast<void **>(destination) = &typeInfo;
    }
}
