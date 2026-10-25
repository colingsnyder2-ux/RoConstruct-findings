// from server: 100% by tester
// roc 2008-06 004a2180  unit: RBX::Network::P8Players::?$GetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2180
//
// 004a2180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a2184  83f803               cmp eax, 3
// 004a2187  741e                 je 0x4a21a7
// 004a2189  8b542408             mov edx, dword ptr [esp + 8]
// 004a218d  c644240c00           mov byte ptr [esp + 0xc], 0
// 004a2192  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a2196  51                   push ecx
// 004a2197  50                   push eax
// 004a2198  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a219c  52                   push edx
// 004a219d  50                   push eax
// 004a219e  e86dfbffff           call 0x4a1d10
// 004a21a3  83c410               add esp, 0x10
// 004a21a6  c3                   ret 
// 004a21a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a21ab  c70120989300         mov dword ptr [ecx], 0x939820
// 004a21b1  c3                   ret 

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
