// from server: 100% by king_originala
// roc 2008-06 004b20a0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b20a0
//
// 004b20a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b20a4  83f803               cmp eax, 3
// 004b20a7  741e                 je 0x4b20c7
// 004b20a9  8b542408             mov edx, dword ptr [esp + 8]
// 004b20ad  c644240c00           mov byte ptr [esp + 0xc], 0
// 004b20b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b20b6  51                   push ecx
// 004b20b7  50                   push eax
// 004b20b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b20bc  52                   push edx
// 004b20bd  50                   push eax
// 004b20be  e8cdfdffff           call 0x4b1e90
// 004b20c3  83c410               add esp, 0x10
// 004b20c6  c3                   ret 
// 004b20c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b20cb  c70120b99300         mov dword ptr [ecx], 0x93b920
// 004b20d1  c3                   ret 

struct Tag {
    unsigned char value;
};

extern char descriptor;
extern void __cdecl dispatch(void *, void **, int, Tag);

void __cdecl f(void *context, void **output, int kind)
{
    if (kind != 3) {
        Tag tag = { 0 };
        dispatch(context, output, kind, tag);
    } else {
        *output = &descriptor;
    }
}
