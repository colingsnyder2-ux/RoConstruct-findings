// from server: 100% by king_originala
// roc 2008-06 0044d450  unit: CRobloxApp  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d450
//
// 0044d450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044d454  83f803               cmp eax, 3
// 0044d457  741e                 je 0x44d477
// 0044d459  8b542408             mov edx, dword ptr [esp + 8]
// 0044d45d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0044d462  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044d466  51                   push ecx
// 0044d467  50                   push eax
// 0044d468  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044d46c  52                   push edx
// 0044d46d  50                   push eax
// 0044d46e  e83dfbffff           call 0x44cfb0
// 0044d473  83c410               add esp, 0x10
// 0044d476  c3                   ret 
// 0044d477  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044d47b  c701f01a9300         mov dword ptr [ecx], 0x931af0
// 0044d481  c3                   ret 

extern char type_descriptor;
extern void __cdecl manage(void*, void**, int, int);

void __cdecl dispatch(void* source, void** destination, int operation)
{
    if (operation != 3)
    {
        int savedOperation = operation;
        reinterpret_cast<unsigned char*>(&operation)[0] = 0;
        manage(source, destination, savedOperation, operation);
    }
    else
    {
        *destination = &type_descriptor;
    }
}
