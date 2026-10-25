// from server: 100% by tester
// roc 2008-06 004276e0  unit: CSelectionTreeCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004276e0
//
// 004276e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004276e4  83f803               cmp eax, 3
// 004276e7  741e                 je 0x427707
// 004276e9  8b542408             mov edx, dword ptr [esp + 8]
// 004276ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 004276f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004276f6  51                   push ecx
// 004276f7  50                   push eax
// 004276f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004276fc  52                   push edx
// 004276fd  50                   push eax
// 004276fe  e85dffffff           call 0x427660
// 00427703  83c410               add esp, 0x10
// 00427706  c3                   ret 
// 00427707  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042770b  c70190e39200         mov dword ptr [ecx], 0x92e390
// 00427711  c3                   ret 

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
