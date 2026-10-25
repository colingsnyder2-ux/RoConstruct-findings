// from server: 100% by tester
// roc 2008-06 0041b4a0  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b4a0
//
// 0041b4a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b4a4  83f803               cmp eax, 3
// 0041b4a7  741e                 je 0x41b4c7
// 0041b4a9  8b542408             mov edx, dword ptr [esp + 8]
// 0041b4ad  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041b4b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041b4b6  51                   push ecx
// 0041b4b7  50                   push eax
// 0041b4b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b4bc  52                   push edx
// 0041b4bd  50                   push eax
// 0041b4be  e88decffff           call 0x41a150
// 0041b4c3  83c410               add esp, 0x10
// 0041b4c6  c3                   ret 
// 0041b4c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b4cb  c701e8c79200         mov dword ptr [ecx], 0x92c7e8
// 0041b4d1  c3                   ret 

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
