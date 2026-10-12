// from server: 100% by king_originala
// roc 2008-06 0041a040  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a040
//
// 0041a040  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a044  83f803               cmp eax, 3
// 0041a047  741e                 je 0x41a067
// 0041a049  8b542408             mov edx, dword ptr [esp + 8]
// 0041a04d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0041a052  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a056  51                   push ecx
// 0041a057  50                   push eax
// 0041a058  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a05c  52                   push edx
// 0041a05d  50                   push eax
// 0041a05e  e85df8ffff           call 0x4198c0
// 0041a063  83c410               add esp, 0x10
// 0041a066  c3                   ret 
// 0041a067  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a06b  c70138c69200         mov dword ptr [ecx], 0x92c638
// 0041a071  c3                   ret 

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
