// from server: 100% by tester
// roc 2008-06 0066ed10  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ed10
//
// 0066ed10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066ed14  83f803               cmp eax, 3
// 0066ed17  741e                 je 0x66ed37
// 0066ed19  8b542408             mov edx, dword ptr [esp + 8]
// 0066ed1d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0066ed22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066ed26  51                   push ecx
// 0066ed27  50                   push eax
// 0066ed28  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066ed2c  52                   push edx
// 0066ed2d  50                   push eax
// 0066ed2e  e87dffffff           call 0x66ecb0
// 0066ed33  83c410               add esp, 0x10
// 0066ed36  c3                   ret 
// 0066ed37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066ed3b  c701e02c9600         mov dword ptr [ecx], 0x962ce0
// 0066ed41  c3                   ret 

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
