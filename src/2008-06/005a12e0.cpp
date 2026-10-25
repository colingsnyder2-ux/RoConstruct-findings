// from server: 100% by king_originala
// roc 2008-06 005a12e0  unit: RBX::PartTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a12e0
//
// 005a12e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a12e4  83f803               cmp eax, 3
// 005a12e7  741e                 je 0x5a1307
// 005a12e9  8b542408             mov edx, dword ptr [esp + 8]
// 005a12ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a12f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a12f6  51                   push ecx
// 005a12f7  50                   push eax
// 005a12f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a12fc  52                   push edx
// 005a12fd  50                   push eax
// 005a12fe  e8edf7ffff           call 0x5a0af0
// 005a1303  83c410               add esp, 0x10
// 005a1306  c3                   ret 
// 005a1307  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a130b  c70140b99400         mov dword ptr [ecx], 0x94b940
// 005a1311  c3                   ret 

struct Tag {};

extern void __cdecl manage(void*, void*, int, Tag);

void __cdecl dispatch(void* source, void* destination, int operation)
{
    if (operation != 3)
        manage(source, destination, operation, Tag());
    else
        *static_cast<unsigned long*>(destination) = 0x0094B940UL;
}
