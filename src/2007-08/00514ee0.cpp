// from server: 100% by colin
// roc 2007-08 00514ee0  unit: G3D::_internal::DialogTemplate  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514ee0
//
// 00514ee0  56                   push esi
// 00514ee1  8b742408             mov esi, dword ptr [esp + 8]
// 00514ee5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 00514eec  7411                 je 0x514eff
// 00514eee  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00514ef1  2500030000           and eax, 0x300
// 00514ef6  3d00030000           cmp eax, 0x300
// 00514efb  750b                 jne 0x514f08
// 00514efd  5e                   pop esi
// 00514efe  c3                   ret 
// 00514eff  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00514f06  751c                 jne 0x514f24
// 00514f08  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00514f0c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00514f10  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00514f16  51                   push ecx
// 00514f17  52                   push edx
// 00514f18  50                   push eax
// 00514f19  e842822100           call 0x72d160
// 00514f1e  898610010000         mov dword ptr [esi + 0x110], eax
// 00514f24  5e                   pop esi
// 00514f25  c3                   ret 

struct G3D_DialogTemplate {
    char pad[0x6c];
    unsigned int flags;
    char pad2[0x110 - 0x70];
    void* field_110;
    char pad3[0x11c - 0x114];
    unsigned char byte_11c;
};

extern "C" void* __stdcall sub_0072d160(void*, void*, void*);

void G3D_DialogTemplate_method(G3D_DialogTemplate* self, void* a, void* b, void* c)
{
    if ((self->byte_11c & 0x20) != 0) {
        unsigned int v = self->flags & 0x300;
        if (v != 0x300)
            goto do_call;
        return;
    } else {
        if ((self->flags & 0x800) != 0)
            return;
    }
do_call:
    self->field_110 = sub_0072d160(self->field_110, a, b);
}
