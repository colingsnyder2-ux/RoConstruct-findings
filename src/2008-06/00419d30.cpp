// from server: 100% by tester
// roc 2008-06 00419d30  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419d30
//
// 00419d30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00419d34  83f803               cmp eax, 3
// 00419d37  741e                 je 0x419d57
// 00419d39  8b542408             mov edx, dword ptr [esp + 8]
// 00419d3d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00419d42  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00419d46  51                   push ecx
// 00419d47  50                   push eax
// 00419d48  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00419d4c  52                   push edx
// 00419d4d  50                   push eax
// 00419d4e  e8bdf1ffff           call 0x418f10
// 00419d53  83c410               add esp, 0x10
// 00419d56  c3                   ret 
// 00419d57  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00419d5b  c70120c59200         mov dword ptr [ecx], 0x92c520
// 00419d61  c3                   ret 

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
