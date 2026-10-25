// from server: 100% by tester
// roc 2008-06 004b1530  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1530
//
// 004b1530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1534  83f803               cmp eax, 3
// 004b1537  741e                 je 0x4b1557
// 004b1539  8b542408             mov edx, dword ptr [esp + 8]
// 004b153d  c644240c00           mov byte ptr [esp + 0xc], 0
// 004b1542  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b1546  51                   push ecx
// 004b1547  50                   push eax
// 004b1548  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b154c  52                   push edx
// 004b154d  50                   push eax
// 004b154e  e81df9ffff           call 0x4b0e70
// 004b1553  83c410               add esp, 0x10
// 004b1556  c3                   ret 
// 004b1557  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b155b  c70178b39300         mov dword ptr [ecx], 0x93b378
// 004b1561  c3                   ret 

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
