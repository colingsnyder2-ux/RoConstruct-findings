// from server: 100% by tester
// roc 2008-06 0041b460  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b460
//
// 0041b460  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b464  83f803               cmp eax, 3
// 0041b467  741e                 je 0x41b487
// 0041b469  8b542408             mov edx, dword ptr [esp + 8]
// 0041b46d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041b472  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041b476  51                   push ecx
// 0041b477  50                   push eax
// 0041b478  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b47c  52                   push edx
// 0041b47d  50                   push eax
// 0041b47e  e84decffff           call 0x41a0d0
// 0041b483  83c410               add esp, 0x10
// 0041b486  c3                   ret 
// 0041b487  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b48b  c70140c79200         mov dword ptr [ecx], 0x92c740
// 0041b491  c3                   ret 

struct Flag {
    bool value;
};

extern char descriptor;
extern void __cdecl manage(void* source, void** destination, int operation, Flag flag);

void __cdecl dispatch(void* source, void** destination, int operation)
{
    if (operation != 3) {
        Flag flag = { false };
        manage(source, destination, operation, flag);
    } else {
        *destination = &descriptor;
    }
}
