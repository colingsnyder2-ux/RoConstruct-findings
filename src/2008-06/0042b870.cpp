// from server: 100% by king_originala
// roc 2008-06 0042b870  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b870
//
// 0042b870  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b874  83f803               cmp eax, 3
// 0042b877  741e                 je 0x42b897
// 0042b879  8b542408             mov edx, dword ptr [esp + 8]
// 0042b87d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0042b882  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b886  51                   push ecx
// 0042b887  50                   push eax
// 0042b888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b88c  52                   push edx
// 0042b88d  50                   push eax
// 0042b88e  e8bdfcffff           call 0x42b550
// 0042b893  83c410               add esp, 0x10
// 0042b896  c3                   ret 
// 0042b897  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b89b  c701b8e99200         mov dword ptr [ecx], 0x92e9b8
// 0042b8a1  c3                   ret 

struct Flag
{
    bool value;
};

extern void __cdecl manage_impl(const void*, void*, int, Flag);

void __cdecl manage(const void* source, void* destination, int operation)
{
    if (operation != 3)
    {
        Flag flag = { false };
        manage_impl(source, destination, operation, flag);
    }
    else
    {
        *static_cast<unsigned long*>(destination) = 0x0092e9b8;
    }
}
