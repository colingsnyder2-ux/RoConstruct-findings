// from server: 100% by tester
// roc 2008-06 005acc70  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acc70
//
// 005acc70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005acc74  83f803               cmp eax, 3
// 005acc77  741e                 je 0x5acc97
// 005acc79  8b542408             mov edx, dword ptr [esp + 8]
// 005acc7d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005acc82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005acc86  51                   push ecx
// 005acc87  50                   push eax
// 005acc88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005acc8c  52                   push edx
// 005acc8d  50                   push eax
// 005acc8e  e8cdfcffff           call 0x5ac960
// 005acc93  83c410               add esp, 0x10
// 005acc96  c3                   ret 
// 005acc97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acc9b  c70138c99400         mov dword ptr [ecx], 0x94c938
// 005acca1  c3                   ret 

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
